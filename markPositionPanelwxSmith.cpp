#include "wx_pch.h"
#include "markPositionPanelwxSmith.h"

#ifndef WX_PRECOMP
//(*InternalHeadersPCH(markPositionPanelwxSmith)
#include <wx/intl.h>
#include <wx/string.h>
//*)
#endif
//(*InternalHeaders(markPositionPanelwxSmith)
#include <wx/font.h>
//*)

//(*IdInit(markPositionPanelwxSmith)
const long markPositionPanelwxSmith::ID_STATICTEXT1 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICLINE1 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT2 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT3 = wxNewId();
const long markPositionPanelwxSmith::ID_wpBitmap = wxNewId();
const long markPositionPanelwxSmith::ID_PANEL1 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT4 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT5 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICLINE2 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT6 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT7 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT11 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICLINE3 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT10 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT12 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICLINE4 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT8 = wxNewId();
const long markPositionPanelwxSmith::ID_STATICTEXT9 = wxNewId();
//*)

BEGIN_EVENT_TABLE(markPositionPanelwxSmith,wxPanel)
    //(*EventTable(markPositionPanelwxSmith)
    //*)
END_EVENT_TABLE()

markPositionPanelwxSmith::markPositionPanelwxSmith(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(markPositionPanelwxSmith)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* BoxSizer9;

    Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    mpName = new wxStaticText(this, ID_STATICTEXT1, _("MARK POSITION pg19"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont mpNameFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    mpName->SetFont(mpNameFont);
    BoxSizer6->Add(mpName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer6, 5, wxALL|wxEXPAND, 5);
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    BoxSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND, 0);
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    waypointName = new wxStaticText(this, ID_STATICTEXT2, _("Waypoint:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont waypointNameFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    waypointName->SetFont(waypointNameFont);
    BoxSizer2->Add(waypointName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    waypointValue = new wxStaticText(this, ID_STATICTEXT3, _("000"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    wxFont waypointValueFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    waypointValue->SetFont(waypointValueFont);
    BoxSizer8->Add(waypointValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    wpBitmap = new wxStaticBitmap(Panel1, ID_wpBitmap, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_wpBitmap"));
    BoxSizer9->Add(wpBitmap, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer9);
    BoxSizer9->Fit(Panel1);
    BoxSizer9->SetSizeHints(Panel1);
    BoxSizer8->Add(Panel1, 1, wxALL|wxEXPAND, 5);
    BoxSizer2->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
    latitudeValue = new wxStaticText(this, ID_STATICTEXT4, _("N 00*00.000\'"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont latitudeValueFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    latitudeValue->SetFont(latitudeValueFont);
    BoxSizer2->Add(latitudeValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    longitudeValue = new wxStaticText(this, ID_STATICTEXT5, _("W 000*00.000\'"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    wxFont longitudeValueFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    longitudeValue->SetFont(longitudeValueFont);
    BoxSizer2->Add(longitudeValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 5, wxALL|wxEXPAND, 5);
    StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    BoxSizer1->Add(StaticLine2, 1, wxALL|wxEXPAND, 0);
    BoxSizer3 = new wxBoxSizer(wxVERTICAL);
    A2RName = new wxStaticText(this, ID_STATICTEXT6, _("Add to route"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    BoxSizer3->Add(A2RName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    numberName = new wxStaticText(this, ID_STATICTEXT7, _("number: "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    wxFont numberNameFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    numberName->SetFont(numberNameFont);
    BoxSizer7->Add(numberName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    numberValue = new wxStaticText(this, ID_STATICTEXT11, _("_ _"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    wxFont numberValueFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    numberValue->SetFont(numberValueFont);
    BoxSizer7->Add(numberValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer3, 5, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
    BoxSizer1->Add(StaticLine3, 1, wxALL|wxEXPAND, 0);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    FOMName = new wxStaticText(this, ID_STATICTEXT10, _("FOM"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    wxFont FOMNameFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    FOMName->SetFont(FOMNameFont);
    BoxSizer4->Add(FOMName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FOMValue = new wxStaticText(this, ID_STATICTEXT12, _("_ _ _ _"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    wxFont FOMValueFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    FOMValue->SetFont(FOMValueFont);
    BoxSizer4->Add(FOMValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer4, 5, wxALL|wxEXPAND, 5);
    StaticLine4 = new wxStaticLine(this, ID_STATICLINE4, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE4"));
    BoxSizer1->Add(StaticLine4, 1, wxALL|wxEXPAND, 0);
    BoxSizer5 = new wxBoxSizer(wxVERTICAL);
    averageName = new wxStaticText(this, ID_STATICTEXT8, _("AVERAGE\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    wxFont averageNameFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    averageName->SetFont(averageNameFont);
    BoxSizer5->Add(averageName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    saveName = new wxStaticText(this, ID_STATICTEXT9, _("SAVE\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    wxFont saveNameFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    saveName->SetFont(saveNameFont);
    BoxSizer5->Add(saveName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BoxSizer1->Add(BoxSizer5, 5, wxALL|wxEXPAND, 5);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    //*)


wxString imageFileName  = wxGetCwd() + "/ProgramFiles/image/symbol/"+ wxString::Format("%i", 2) +".bmp";
wpBitmap->SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));


    gpsPanelThread = new gpsThread(this, 5);
    gpsPanelThread->Create();
    gpsPanelThread->Run();
    Connect(wxID_ANY, wxEVT_GPSTHREAD, wxCommandEventHandler(markPositionPanelwxSmith::gpsThreadEventFun));
    /*
        fileVari.Open(wayPointfileName);
        fileContains = fileVari.GetFirstLine();
        tokenizer.SetString(fileContains, ",");

        token = "";
        token = tokenizer.GetNextToken();
        currentLineWPnum = wxAtoi(token);
        A2RName->SetLabelText(wxString::Format("%i", currentLineWPnum));

        token = "";
        token = tokenizer.GetNextToken();
        //currentLineWPnum = wxAtoi(token);
        A2RName->SetLabelText(wxString::Format("%s", token));
    */


}

markPositionPanelwxSmith::~markPositionPanelwxSmith()
{
    //(*Destroy(markPositionPanelwxSmith)
    //*)

    gpsPanelThread->Delete();
    gpsPanelThread->Wait();
    delete gpsPanelThread;
}


void markPositionPanelwxSmith::setButtonThreadPointer(buttonThread * thread)
{
    buttonThreadPointer = thread;
}
void markPositionPanelwxSmith::buttonEventHappend(int buttonEnum)
{
}
void markPositionPanelwxSmith::gpsThreadEventFun(wxCommandEvent& event)
{

//location avaraging maethod
//https://gis.stackexchange.com/questions/7555/computing-an-averaged-latitude-and-longitude-coordinates
    myGpsAllDataVariable= (jarus::myGpsAllData*) event.GetClientData();

    latitudeValue->SetLabelText(wxString::Format("%f", myGpsAllDataVariable->latitude));
    longitudeValue->SetLabelText(wxString::Format("%f", myGpsAllDataVariable->longitude));

}

