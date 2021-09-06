#include "gpsThread.h"
#include "jarus.h"

DEFINE_EVENT_TYPE(wxEVT_GPSTHREAD)

gpsThread::gpsThread(wxEvtHandler* pParent1, int param1) : wxThread(wxTHREAD_JOINABLE), m_pParent1(pParent1)
{
    m_param1 = param1;
}

void* gpsThread::Entry()
{
    wxCommandEvent evt1(wxEVT_GPSTHREAD, GetId());    //can be used to set some identifier for the dataevt.SetInt(r);

    if ((serial_port = serialOpen ("/dev/ttyS0", 9600)) < 0)
    {
        while(1)
        {delay(1000);}
        //cout << "Unable to open serial device: %s\n";
    }
    if (wiringPiSetup () == -1)
    {
        //cout << "Unable to start wiringPi: %s\n";
    }

    bool isAllGpsCollected[6];
    for (int myLoop = 0; myLoop < 6; myLoop++)
        isAllGpsCollected[myLoop] = false;

    for (;;)
    {
        if(TestDestroy()){this->Exit();}
        if(serialDataAvail (serial_port) )
        {
            fromGPSchar = serialGetchar(serial_port);
            if(fromGPSchar == '$')
            {
                for(myLoop = 0; myLoop<100; myLoop++)
                {
                    if(fromGPSchar == 13)
                    {
                        fromGPSchar = serialGetchar(serial_port);
                        if(fromGPSchar == 10)
                        {
                            temporaryGPSbuffStore[myLoop] = '\n';
                            counter = myLoop;
                            break;
                        }
                    }
                    temporaryGPSbuffStore[myLoop] = fromGPSchar;
                    fromGPSchar = serialGetchar(serial_port);
                }
            }
            collectedGPSLine = temporaryGPSbuffStore;
            //StaticText1->SetLabel(collectedGPSLine);
            //printf("%s", collectedGPSLine);//cout << collectedGPSLine;
            char *line = collectedGPSLine;

            switch (minmea_sentence_id(line, false))
            {

            case MINMEA_SENTENCE_RMC:
            {
                minmea_parse_rmc(&rmcFrame, line);

                myGpsAllDataVariable.day     = rmcFrame.date.day;
                myGpsAllDataVariable.month   = rmcFrame.date.month;
                myGpsAllDataVariable.year    = rmcFrame.date.year;
                myGpsAllDataVariable.hours   = rmcFrame.time.hours;
                myGpsAllDataVariable.minutes = rmcFrame.time.minutes;
                myGpsAllDataVariable.seconds = rmcFrame.time.seconds;

                myGpsAllDataVariable.courseOverGround   = minmea_tofloat(&rmcFrame.course);
                myGpsAllDataVariable.speedOverGround    = minmea_tofloat(&rmcFrame.speed);

                isAllGpsCollected[jarus::RMC] = true;
            }
            break;

            case MINMEA_SENTENCE_GGA:
            {
                minmea_parse_gga(&ggaFrame, line);
                isAllGpsCollected[jarus::GGA] = true;
            }
            break;

            case MINMEA_SENTENCE_GSV:
            {
                minmea_parse_gsv(&gsvFrame, line);

                myGpsAllDataVariable.totalSatellite = gsvFrame.total_sats;
                myGpsAllDataVariable.messagesNumber = gsvFrame.msg_nr;

                for(int myLoop = 0; myLoop < 4; myLoop++)
                {
                    myGpsAllDataVariable.satIdNum   [myLoop + (4*(gsvFrame.msg_nr-1))] = gsvFrame.sats[myLoop].nr;
                    myGpsAllDataVariable.elevation  [myLoop + (4*(gsvFrame.msg_nr-1))] = gsvFrame.sats[myLoop].elevation;
                    myGpsAllDataVariable.azimuth    [myLoop + (4*(gsvFrame.msg_nr-1))] = gsvFrame.sats[myLoop].azimuth;
                    myGpsAllDataVariable.snr        [myLoop + (4*(gsvFrame.msg_nr-1))] = gsvFrame.sats[myLoop].snr;
                }
                if(gsvFrame.msg_nr == gsvFrame.total_msgs)
                    isAllGpsCollected[jarus::GSV] = true;
            }
            break;


            case MINMEA_SENTENCE_VTG:
            {
                minmea_parse_vtg(&vtgFrame, line);
                myGpsAllDataVariable.speedOverGroundKmHr = minmea_tofloat(&vtgFrame.speed_kph);
                isAllGpsCollected[jarus::VTG] = true;
            }
            break;

            case MINMEA_SENTENCE_GSA:
            {
                minmea_parse_gsa(&gsaFrame, line);
                myGpsAllDataVariable.mode = gsaFrame.fix_type;
                myGpsAllDataVariable.pdop = minmea_tofloat(&gsaFrame.pdop);
                isAllGpsCollected[jarus::GSA] = true;
            }
            break;

            case MINMEA_SENTENCE_GLL:
            {
                minmea_parse_gll(&gllFrame, line);
                myGpsAllDataVariable.latitude = minmea_tocoord(&gllFrame.latitude);
                myGpsAllDataVariable.longitude = minmea_tocoord(&gllFrame.longitude);
                isAllGpsCollected[jarus::GLL] = true;
            }
            break;

            case MINMEA_INVALID:
            {
                //printf(INDENT_SPACES "$xxxxx sentence is not valid\n");
            } break;

            default:
            {
                //printf(INDENT_SPACES "$xxxxx sentence is not parsed\n");
            } break;

            }

            bool myBool = true;
            for (int myLoop = 0; myLoop < 6; myLoop++)
                myBool = myBool && isAllGpsCollected[myLoop];

            if(myBool)
            {
                //myGpsAllDataVariable.latitude  = 25;
                //myGpsAllDataVariable.longitude  = 45;
                evt1.SetClientData(&myGpsAllDataVariable);
                wxPostEvent(m_pParent1, evt1);
                for (int myLoop = 0; myLoop < 6; myLoop++)
                    isAllGpsCollected[myLoop] = false;
                delay(800);

            }
            memset(temporaryGPSbuffStore, 0, sizeof temporaryGPSbuffStore);
        }
    }
}
