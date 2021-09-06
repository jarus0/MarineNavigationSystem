#ifndef SATELLITEPAGEPANELWXSMITH_H
#define SATELLITEPAGEPANELWXSMITH_H

#ifndef WX_PRECOMP
//(*HeadersPCH(satellitePagePanelwxSmith)
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)
#endif
//(*Headers(satellitePagePanelwxSmith)
//*)

#include "../satellitePageStrengthSubPanelwxSmith.h"
#include "../satellitePageSkyviewSubPanelwxSmith.h"
#include "jarus.h"


#include "gpsThread.h"
#include "mpu9250Thread.h"
class satellitePagePanelwxSmith: public wxPanel
{
public:

    satellitePagePanelwxSmith(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~satellitePagePanelwxSmith();

    //(*Declarations(satellitePagePanelwxSmith)
    wxPanel* skyview;
    wxPanel* strengthBar;
    wxStaticText* StaticText1;
    wxStaticText* estimatedPostionErrorName;
    wxStaticText* satelliteStatusName;
    //*)

    satellitePageStrengthSubPanelwxSmith    *satellitePageStrengthSubPanelwxSmithPointer;
    satellitePageSkyviewSubPanelwxSmith     *satellitePageSkyviewSubPanelwxSmithPointer;

    gpsThread *gpsPanelThread;
    void gpsThreadEventFun(wxCommandEvent& event);
    jarus::myGpsAllData *myGpsAllDataVariable;
    buttonThread    *buttonThreadPointer;
    void buttonEventHappend(int buttonEnum);
    void setButtonThreadPointer(buttonThread * thread);
protected:

    //(*Identifiers(satellitePagePanelwxSmith)
    static const long ID_STATICTEXT1;
    static const long ID_STATICTEXT2;
    static const long ID_STATICTEXT3;
    static const long ID_PANEL1;
    static const long ID_PANEL2;
    //*)

private:

    //(*Handlers(satellitePagePanelwxSmith)
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
