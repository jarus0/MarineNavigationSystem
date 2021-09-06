#ifndef JARUS_H
#define JARUS_H
#define earthRadiusKm 6371.01



#include <wx/thread.h>
#include <wx/event.h>
#include <wiringPi.h>
#include <wiringSerial.h>

#include "../minmea.h"

#include <wx/textfile.h>
#include <wx/tokenzr.h>


#include "../myFiles/include/buttonThread.h"

class jarus
{
public:
    jarus();
    virtual ~jarus();

    double deg2rad(double deg);
    double rad2deg(double rad);
    double distanceEarth(double lat1d, double lon1d, double lat2d, double lon2d);
    void getCordinateFromLatiLongi(double *xCor, double *yCor, double lati, double longi);
    void secondLocationFromBearingAdistance(double lat1, double lon1, double bearing, double distance, double *secLati, double *secLongi);

      static  int cursorSelected;

struct myGpsAllData
{
    //rmc
    int day;
    int month;
    int year;
    int hours;
    int minutes;
    int seconds;
    float courseOverGround;
    float speedOverGround;

    //gsa
    int mode;
    double pdop;

    //gsv
    int totalSatellite;
    int messagesNumber;
    int satIdNum[12];
    int elevation[12];
    int azimuth[12];
    float snr[12];

    //gll
    float latitude;
    float longitude;

    //vtg
    float speedOverGroundKmHr;
};


    struct fileRelatedVariables
    {
        wxString wayPointfileName = wxGetCwd() + "/ProgramFiles/waypointListFiles.txt";
        wxString routefileName =  wxGetCwd() + "/ProgramFiles/routeListFiles.txt";
        wxString fileContains;
        wxTextFile fileVari;
        wxStringTokenizer tokenizer;
        wxString token;

        int currentLineWPnum;
        wxString currentLineWPname;
        double currentLinelatitude;
        double currentLinelongitude;
        int currentLinesymbolEnum;

    };

    struct fileRelatedOperationAvariable
    {
        wxString wpFileName = wxGetCwd() + "/ProgramFiles/waypointListFiles.txt";
        wxString RoutefileName =  wxGetCwd() + "/ProgramFiles/routeListFiles.txt";
        wxString line;
        wxTextFile fileRef;
        wxStringTokenizer tokenizer;
        wxString currentToken;


        long str2number;
        wxString currentLineWPname;
        double currentLinelatitude;
        double currentLinelongitude;
        int currentLinesymbolEnum;

    };
enum symbolEnum
{
    symbol1,
    symbol2,
    symbol3,
    symbol4,
    symbol5,
    symbol6,
    symbol7,
    symbol8,
    symbol9,
    symbol10,
    symbol11,
    symbol12,
    symbol13,
    symbol14,
    symbol15,
    symbol16,
};
    enum pbButton
    {
        PAGE,
        MARK,
        GOTO,
        ENTER,
        QUIT,
        MOB,
        IN,
        OUT,

        UP_ARROW,
        DOWN_ARROW,
        LEFT_ARROW,
        RIGHT_ARROW,
        defaultNull

    };

    enum
    {
        GGA,
        GLL,
        GSA,
        GSV,
        RMC,
        VTG
    };



protected:

private:
};

#endif // JARUS_H
