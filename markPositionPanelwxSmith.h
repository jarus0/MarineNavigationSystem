#ifndef MARKPOSITIONPANELWXSMITH_H
#define MARKPOSITIONPANELWXSMITH_H

#ifndef WX_PRECOMP
//(*HeadersPCH(markPositionPanelwxSmith)
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)
#endif
//(*Headers(markPositionPanelwxSmith)
#include <wx/statline.h>
//*)

#include "jarus.h"
#include "gpsThread.h"
#include "mpu9250Thread.h"

#include "markPositionSubPanelwxSmith.h"

class markPositionPanelwxSmith: public wxPanel
{
public:

    markPositionPanelwxSmith(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~markPositionPanelwxSmith();


    //(*Declarations(markPositionPanelwxSmith)
    wxPanel* Panel1;
    wxStaticBitmap* wpBitmap;
    wxStaticLine* StaticLine1;
    wxStaticLine* StaticLine2;
    wxStaticLine* StaticLine3;
    wxStaticLine* StaticLine4;
    wxStaticText* A2RName;
    wxStaticText* FOMName;
    wxStaticText* FOMValue;
    wxStaticText* averageName;
    wxStaticText* latitudeValue;
    wxStaticText* longitudeValue;
    wxStaticText* mpName;
    wxStaticText* numberName;
    wxStaticText* numberValue;
    wxStaticText* saveName;
    wxStaticText* waypointName;
    wxStaticText* waypointValue;
    //*)

    gpsThread *gpsPanelThread;
    void gpsThreadEventFun      (wxCommandEvent& event);
    jarus::myGpsAllData *myGpsAllDataVariable;


    markPositionSubPanelwxSmith *markPositionSubPanelwxSmithPointer;

    buttonThread *buttonThreadPointer;
    void buttonEventHappend(int buttonEnum);
    void setButtonThreadPointer(buttonThread * thread);

protected:

    //(*Identifiers(markPositionPanelwxSmith)
    static const long ID_STATICTEXT1;
    static const long ID_STATICLINE1;
    static const long ID_STATICTEXT2;
    static const long ID_STATICTEXT3;
    static const long ID_wpBitmap;
    static const long ID_PANEL1;
    static const long ID_STATICTEXT4;
    static const long ID_STATICTEXT5;
    static const long ID_STATICLINE2;
    static const long ID_STATICTEXT6;
    static const long ID_STATICTEXT7;
    static const long ID_STATICTEXT11;
    static const long ID_STATICLINE3;
    static const long ID_STATICTEXT10;
    static const long ID_STATICTEXT12;
    static const long ID_STATICLINE4;
    static const long ID_STATICTEXT8;
    static const long ID_STATICTEXT9;
    //*)

private:

    //(*Handlers(markPositionPanelwxSmith)
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
