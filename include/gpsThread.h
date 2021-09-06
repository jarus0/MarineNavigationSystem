#ifndef GPSTHREAD_H
#define GPSTHREAD_H

#include "jarus.h"

BEGIN_DECLARE_EVENT_TYPES()
DECLARE_EVENT_TYPE(wxEVT_GPSTHREAD, -1)
END_DECLARE_EVENT_TYPES()

class gpsThread : public wxThread
{

public:
    gpsThread(wxEvtHandler* pParent1, int param1);
    wxEvtHandler* m_pParent1;
    int countVar1;

    char    fromGPSchar,
            temporaryGPSbuffStore[100],
            *collectedGPSLine;
    int serial_port,
        myLoop,
        counter;


    struct  minmea_sentence_gga ggaFrame;
    struct  minmea_sentence_gll gllFrame;
    struct  minmea_sentence_gsa gsaFrame;
    struct  minmea_sentence_gsv gsvFrame;
    struct  minmea_sentence_rmc rmcFrame;
    struct  minmea_sentence_vtg vtgFrame;

    jarus::myGpsAllData myGpsAllDataVariable;

protected:

private:
    int m_param1;
    void* Entry();
};

#endif // GPSTHREAD_H
