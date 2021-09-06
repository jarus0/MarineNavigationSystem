#include "wx_pch.h"
#include "satellitePagePanelwxSmith.h"

#ifndef WX_PRECOMP
//(*InternalHeadersPCH(satellitePagePanelwxSmith)
#include <wx/intl.h>
#include <wx/string.h>
//*)
#endif
//(*InternalHeaders(satellitePagePanelwxSmith)
#include <wx/font.h>
//*)

//(*IdInit(satellitePagePanelwxSmith)
const long satellitePagePanelwxSmith::ID_STATICTEXT1 = wxNewId();
const long satellitePagePanelwxSmith::ID_STATICTEXT2 = wxNewId();
const long satellitePagePanelwxSmith::ID_STATICTEXT3 = wxNewId();
const long satellitePagePanelwxSmith::ID_PANEL1 = wxNewId();
const long satellitePagePanelwxSmith::ID_PANEL2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(satellitePagePanelwxSmith,wxPanel)
    //(*EventTable(satellitePagePanelwxSmith)
    //*)
END_EVENT_TABLE()

satellitePagePanelwxSmith::satellitePagePanelwxSmith(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(satellitePagePanelwxSmith)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* temporaryDelteLater;

    Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer3 = new wxBoxSizer(wxVERTICAL);
    satelliteStatusName = new wxStaticText(this, ID_STATICTEXT1, _("Status"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    BoxSizer3->Add(satelliteStatusName, 1, wxALL|wxALIGN_LEFT, 1);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxEXPAND, 1);
    BoxSizer4 = new wxBoxSizer(wxVERTICAL);
    estimatedPostionErrorName = new wxStaticText(this, ID_STATICTEXT2, _("EPE"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont estimatedPostionErrorNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    estimatedPostionErrorName->SetFont(estimatedPostionErrorNameFont);
    BoxSizer4->Add(estimatedPostionErrorName, 1, wxALL|wxALIGN_RIGHT, 1);
    BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 1);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
    temporaryDelteLater = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT3, _("lookup"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    temporaryDelteLater->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(temporaryDelteLater, 1, wxALL|wxEXPAND, 5);
    BoxSizer5 = new wxBoxSizer(wxVERTICAL);
    skyview = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    satellitePageSkyviewSubPanelwxSmithPointer = new satellitePageSkyviewSubPanelwxSmith(this);
    skyview = satellitePageSkyviewSubPanelwxSmithPointer;

    BoxSizer5->Add(skyview, 5, wxALL|wxEXPAND, 1);
    strengthBar = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    satellitePageStrengthSubPanelwxSmithPointer = new satellitePageStrengthSubPanelwxSmith(this);
    strengthBar = satellitePageStrengthSubPanelwxSmithPointer;
    BoxSizer5->Add(strengthBar, 1, wxALL|wxEXPAND, 1);
    BoxSizer1->Add(BoxSizer5, 20, wxALL|wxEXPAND, 1);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    //*)

    gpsPanelThread = new gpsThread(this, 5);
    gpsPanelThread->Create();
    gpsPanelThread->Run();
    Connect(wxID_ANY, wxEVT_GPSTHREAD, wxCommandEventHandler(satellitePagePanelwxSmith::gpsThreadEventFun));
}

satellitePagePanelwxSmith::~satellitePagePanelwxSmith()
{
    //(*Destroy(satellitePagePanelwxSmith)
    //*)

    gpsPanelThread->Delete();
    gpsPanelThread->Wait();
    delete gpsPanelThread;

}
void satellitePagePanelwxSmith::setButtonThreadPointer(buttonThread * thread)
{
    buttonThreadPointer = thread;
}
void satellitePagePanelwxSmith::buttonEventHappend(int buttonEnum)
{
	int temp = buttonEnum;
}
//time wxString myString  = wxString::Format(wxT("%i:%i:%i"), myGpsAllDataVariable->hours, myGpsAllDataVariable->minutes, myGpsAllDataVariable->seconds);
int counter0=0;
float sizeOfBar[12];

int myElevatioCustom[12];
int myAzuCustom[12];


void satellitePagePanelwxSmith::gpsThreadEventFun(wxCommandEvent& event)
{
    wxString myString1 = "";
    wxString myString2 = "";
    myGpsAllDataVariable= (jarus::myGpsAllData*)event.GetClientData();


    estimatedPostionErrorName->SetLabelText(wxString::Format("%fm", myGpsAllDataVariable->pdop));
    for (int myLoop = myGpsAllDataVariable->totalSatellite; myLoop < 12; myLoop++)
    {
        myGpsAllDataVariable->satIdNum  [myLoop] = -1;
        myGpsAllDataVariable->azimuth   [myLoop] = 0;
        myGpsAllDataVariable->elevation [myLoop] = 0;
    }

    satellitePageSkyviewSubPanelwxSmithPointer->setNewAzimuthArray(myGpsAllDataVariable->azimuth);
    satellitePageSkyviewSubPanelwxSmithPointer->setNewElevationArray(myGpsAllDataVariable->elevation);
    satellitePageSkyviewSubPanelwxSmithPointer->satelliteID(myGpsAllDataVariable->satIdNum);

    satellitePageSkyviewSubPanelwxSmithPointer->paintNow();

    satellitePageStrengthSubPanelwxSmithPointer->setNewBarID(myGpsAllDataVariable->satIdNum);
    satellitePageStrengthSubPanelwxSmithPointer->setNewBarSize(myGpsAllDataVariable->snr);
    satellitePageStrengthSubPanelwxSmithPointer->paintNow();

    switch(myGpsAllDataVariable->mode)
    {
    case 1:
    {
        myString1 += " Fix not Available";
    }
    break;

    case 2:
    {
        myString1 += " 2D Fix";
    }
    break;

    case 3:
    {
        myString1 += " 3D Fix";
    }
    break;
    }
    satelliteStatusName->SetLabelText(myString1);

}

