#include "wx_pch.h"
#include "routeDefinitionPagePanelwxSmith.h"

#ifndef WX_PRECOMP
//(*InternalHeadersPCH(routeDefinitionPagePanelwxSmith)
#include <wx/intl.h>
#include <wx/string.h>
//*)
#endif
//(*InternalHeaders(routeDefinitionPagePanelwxSmith)
#include <wx/font.h>
//*)

//(*IdInit(routeDefinitionPagePanelwxSmith)
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT1 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_RouteValue = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICLINE1 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_commentValue = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICLINE2 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT4 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT3 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dst1 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT14 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_up = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT11 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT10 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT19 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT20 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT21 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT22 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_wpValue1 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_wpValue2 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_wpValue3 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_wpValue4 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_wpValue5 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_wpValue6 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dst2 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dst3 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dst4 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dst5 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dst6 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dst7 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dtk1 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dtk2 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dtk3 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dtk4 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dtk5 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_dtk6 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_down = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICLINE3 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT8 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICTEXT9 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_STATICLINE4 = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_copyToName = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_copyToValue = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_clr = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_inv = wxNewId();
const long routeDefinitionPagePanelwxSmith::ID_act = wxNewId();
//*)

long listOfComponentArrayRdefi[] =
{
    routeDefinitionPagePanelwxSmith::ID_RouteValue,
    routeDefinitionPagePanelwxSmith::ID_commentValue,
    routeDefinitionPagePanelwxSmith::ID_up,
    routeDefinitionPagePanelwxSmith::ID_wpValue1,
    routeDefinitionPagePanelwxSmith::ID_wpValue2,
    routeDefinitionPagePanelwxSmith::ID_wpValue3,
    routeDefinitionPagePanelwxSmith::ID_wpValue4,
    routeDefinitionPagePanelwxSmith::ID_wpValue5,
    routeDefinitionPagePanelwxSmith::ID_wpValue6,
    routeDefinitionPagePanelwxSmith::ID_down,
    routeDefinitionPagePanelwxSmith::ID_copyToValue,
    routeDefinitionPagePanelwxSmith::ID_clr,
    routeDefinitionPagePanelwxSmith::ID_inv,
    routeDefinitionPagePanelwxSmith::ID_act
};



BEGIN_EVENT_TABLE(routeDefinitionPagePanelwxSmith,wxPanel)
    //(*EventTable(routeDefinitionPagePanelwxSmith)
    //*)
END_EVENT_TABLE()

routeDefinitionPagePanelwxSmith::routeDefinitionPagePanelwxSmith(wxWindow* parent)
{
    //(*Initialize(routeDefinitionPagePanelwxSmith)
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer11;
    wxBoxSizer* BoxSizer12;
    wxBoxSizer* BoxSizer13;
    wxBoxSizer* BoxSizer14;
    wxBoxSizer* BoxSizer17;
    wxBoxSizer* BoxSizer18;
    wxBoxSizer* BoxSizer19;
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer20;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* BoxSizer9;
    wxBoxSizer* downBS;
    wxBoxSizer* indexNameBS;
    wxBoxSizer* listBS;
    wxBoxSizer* upBS;

    Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
    wxFont thisFont(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    SetFont(thisFont);
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    routeName = new wxStaticText(this, ID_STATICTEXT1, _("ROUTE No."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont routeNameFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    routeName->SetFont(routeNameFont);
    BoxSizer2->Add(routeName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    routeValue = new wxStaticText(this, ID_RouteValue, _("< 1/19 >"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_RouteValue"));
    wxFont routeValueFont(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    routeValue->SetFont(routeValueFont);
    BoxSizer2->Add(routeValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 0);
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    BoxSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND, 0);
    BoxSizer9 = new wxBoxSizer(wxVERTICAL);
    commentValue = new wxStaticText(this, ID_commentValue, _("Comment Field"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_commentValue"));
    wxFont commentValueFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    commentValue->SetFont(commentValueFont);
    BoxSizer9->Add(commentValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    BoxSizer1->Add(BoxSizer9, 1, wxALL|wxEXPAND, 0);
    StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    BoxSizer1->Add(StaticLine2, 1, wxALL|wxEXPAND, 5);
    BoxSizer3 = new wxBoxSizer(wxVERTICAL);
    indexNameBS = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer17 = new wxBoxSizer(wxVERTICAL);
    wpNumberName = new wxStaticText(this, ID_STATICTEXT4, _("NO"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont wpNumberNameFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Sans"),wxFONTENCODING_DEFAULT);
    wpNumberName->SetFont(wpNumberNameFont);
    BoxSizer17->Add(wpNumberName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    indexNameBS->Add(BoxSizer17, 1, wxALL|wxEXPAND, 0);
    BoxSizer18 = new wxBoxSizer(wxVERTICAL);
    wpnmHeading = new wxStaticText(this, ID_STATICTEXT3, _("WAYPNT"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    wxFont wpnmHeadingFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Sans"),wxFONTENCODING_DEFAULT);
    wpnmHeading->SetFont(wpnmHeadingFont);
    BoxSizer18->Add(wpnmHeading, 1, wxALL|wxEXPAND, 0);
    indexNameBS->Add(BoxSizer18, 5, wxALL|wxEXPAND, 0);
    BoxSizer19 = new wxBoxSizer(wxVERTICAL);
    dstValue1 = new wxStaticText(this, ID_dst1, _("DST"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dst1"));
    wxFont dstValue1Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Sans"),wxFONTENCODING_DEFAULT);
    dstValue1->SetFont(dstValue1Font);
    BoxSizer19->Add(dstValue1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    indexNameBS->Add(BoxSizer19, 3, wxALL|wxEXPAND, 0);
    BoxSizer20 = new wxBoxSizer(wxVERTICAL);
    dtkName = new wxStaticText(this, ID_STATICTEXT14, _("DTK"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
    wxFont dtkNameFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Sans"),wxFONTENCODING_DEFAULT);
    dtkName->SetFont(dtkNameFont);
    BoxSizer20->Add(dtkName, 1, wxALL|wxEXPAND, 0);
    indexNameBS->Add(BoxSizer20, 3, wxALL|wxEXPAND, 0);
    BoxSizer3->Add(indexNameBS, 10, wxALL|wxEXPAND, 0);
    upBS = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_up, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_up"));
    upBS->Add(Panel1, 1, wxALL|wxEXPAND, 0);
    BoxSizer3->Add(upBS, 1, wxALL|wxEXPAND, 0);
    listBS = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer8 = new wxBoxSizer(wxVERTICAL);
    num1 = new wxStaticText(this, ID_STATICTEXT11, _("_"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    BoxSizer8->Add(num1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    num2 = new wxStaticText(this, ID_STATICTEXT10, _("_"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    BoxSizer8->Add(num2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    num3 = new wxStaticText(this, ID_STATICTEXT19, _("_"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
    BoxSizer8->Add(num3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    num4 = new wxStaticText(this, ID_STATICTEXT20, _("_"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
    BoxSizer8->Add(num4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    num5 = new wxStaticText(this, ID_STATICTEXT21, _("_"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
    BoxSizer8->Add(num5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    num6 = new wxStaticText(this, ID_STATICTEXT22, _("_"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
    BoxSizer8->Add(num6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    listBS->Add(BoxSizer8, 1, wxALL|wxEXPAND, 2);
    BoxSizer6 = new wxBoxSizer(wxVERTICAL);
    wpValue1 = new wxStaticText(this, ID_wpValue1, _("wp1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_wpValue1"));
    BoxSizer6->Add(wpValue1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wpValue2 = new wxStaticText(this, ID_wpValue2, _("wp1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_wpValue2"));
    BoxSizer6->Add(wpValue2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wpValue3 = new wxStaticText(this, ID_wpValue3, _("wp1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_wpValue3"));
    BoxSizer6->Add(wpValue3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wpValue4 = new wxStaticText(this, ID_wpValue4, _("wp1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_wpValue4"));
    BoxSizer6->Add(wpValue4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wpValue5 = new wxStaticText(this, ID_wpValue5, _("wp1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_wpValue5"));
    BoxSizer6->Add(wpValue5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wpValue6 = new wxStaticText(this, ID_wpValue6, _("wp1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_wpValue6"));
    BoxSizer6->Add(wpValue6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    listBS->Add(BoxSizer6, 5, wxALL|wxEXPAND, 2);
    BoxSizer5 = new wxBoxSizer(wxVERTICAL);
    dstValue2 = new wxStaticText(this, ID_dst2, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dst2"));
    BoxSizer5->Add(dstValue2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dstValue3 = new wxStaticText(this, ID_dst3, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dst3"));
    BoxSizer5->Add(dstValue3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dstValue4 = new wxStaticText(this, ID_dst4, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dst4"));
    BoxSizer5->Add(dstValue4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dstValue5 = new wxStaticText(this, ID_dst5, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dst5"));
    BoxSizer5->Add(dstValue5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dstValue6 = new wxStaticText(this, ID_dst6, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dst6"));
    BoxSizer5->Add(dstValue6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dstValue7 = new wxStaticText(this, ID_dst7, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dst7"));
    BoxSizer5->Add(dstValue7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    listBS->Add(BoxSizer5, 3, wxALL|wxEXPAND, 2);
    BoxSizer7 = new wxBoxSizer(wxVERTICAL);
    dtkValue1 = new wxStaticText(this, ID_dtk1, _("dtk1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dtk1"));
    BoxSizer7->Add(dtkValue1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dtkValue2 = new wxStaticText(this, ID_dtk2, _("dtk1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dtk2"));
    BoxSizer7->Add(dtkValue2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dtkValue3 = new wxStaticText(this, ID_dtk3, _("dtk1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dtk3"));
    BoxSizer7->Add(dtkValue3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dtkValue4 = new wxStaticText(this, ID_dtk4, _("dtk1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dtk4"));
    BoxSizer7->Add(dtkValue4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dtkValue5 = new wxStaticText(this, ID_dtk5, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dtk5"));
    BoxSizer7->Add(dtkValue5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dtkValue6 = new wxStaticText(this, ID_dtk6, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_dtk6"));
    BoxSizer7->Add(dtkValue6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    listBS->Add(BoxSizer7, 3, wxALL|wxEXPAND, 2);
    BoxSizer3->Add(listBS, 50, wxALL|wxEXPAND, 0);
    downBS = new wxBoxSizer(wxHORIZONTAL);
    Panel2 = new wxPanel(this, ID_down, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_down"));
    downBS->Add(Panel2, 1, wxALL|wxEXPAND, 0);
    BoxSizer3->Add(downBS, 1, wxALL|wxEXPAND, 0);
    BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
    BoxSizer1->Add(StaticLine3, 1, wxALL|wxEXPAND, 0);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer10 = new wxBoxSizer(wxVERTICAL);
    totalDSTName = new wxStaticText(this, ID_STATICTEXT8, _("TOTAL DST"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    wxFont totalDSTNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    totalDSTName->SetFont(totalDSTNameFont);
    BoxSizer10->Add(totalDSTName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    BoxSizer11 = new wxBoxSizer(wxVERTICAL);
    totalDstValue = new wxStaticText(this, ID_STATICTEXT9, _("3.70"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    wxFont totalDstValueFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    totalDstValue->SetFont(totalDstValueFont);
    BoxSizer11->Add(totalDstValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(BoxSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    BoxSizer1->Add(BoxSizer4, 1, wxALL|wxEXPAND, 0);
    StaticLine4 = new wxStaticLine(this, ID_STATICLINE4, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE4"));
    BoxSizer1->Add(StaticLine4, 1, wxALL|wxEXPAND, 0);
    BoxSizer12 = new wxBoxSizer(wxVERTICAL);
    BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
    copyToName = new wxStaticText(this, ID_copyToName, _("Copy to: "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_copyToName"));
    BoxSizer13->Add(copyToName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CopyToValue = new wxStaticText(this, ID_copyToValue, _("_ _ _"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_copyToValue"));
    BoxSizer13->Add(CopyToValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer12->Add(BoxSizer13, 1, wxALL|wxEXPAND, 5);
    BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    clrName = new wxStaticText(this, ID_clr, _("CLR\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_clr"));
    BoxSizer14->Add(clrName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    invName = new wxStaticText(this, ID_inv, _("INV\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_inv"));
    BoxSizer14->Add(invName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    actName = new wxStaticText(this, ID_act, _("ACT\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_act"));
    BoxSizer14->Add(actName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer12->Add(BoxSizer14, 1, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer12, 1, wxALL|wxEXPAND, 5);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    //*)


    sizeofArray = sizeof(listOfComponentArrayRdefi)/sizeof(listOfComponentArrayRdefi[0]);
    sizeofArray--;

    thisPanelColor = parent->GetBackgroundColour();
    currentText = (wxStaticText*)this->FindWindowById(listOfComponentArrayRdefi[selectedOption]);
    currentText->SetBackgroundColour(wxColor (*wxYELLOW));

    fileRelatedVariablesInstance.fileVari.Open(fileRelatedVariablesInstance.routefileName);

    listNum[0] = num1;
    listNum[1] = num2;
    listNum[2] = num3;
    listNum[3] = num4;
    listNum[4] = num5;
    listNum[5] = num6;

}

routeDefinitionPagePanelwxSmith::~routeDefinitionPagePanelwxSmith()
{
    //(*Destroy(routeDefinitionPagePanelwxSmith)
    //*)


}
    wxString routeDisplayText;
    wxString commentText;

void routeDefinitionPagePanelwxSmith::ReadLineAstore(int lineNum)
{
    fileRelatedVariablesInstance.fileVari.GoToLine(lineNum-1);
    fileRelatedVariablesInstance.token = fileRelatedVariablesInstance.fileVari.GetNextLine();
    fileRelatedVariablesInstance.tokenizer.SetString(fileRelatedVariablesInstance.token, ",");

    if(fileRelatedVariablesInstance.tokenizer.HasMoreTokens())
        routeComment = fileRelatedVariablesInstance.tokenizer.GetNextToken();

    for (myLoop = 0; myLoop< 30; myLoop++)
    {
        routeWpNum = fileRelatedVariablesInstance.tokenizer.GetNextToken();
        wpNum[myLoop] = wxAtoi(routeWpNum);
    }
}
void routeDefinitionPagePanelwxSmith::calculateAADisplay(int lineDisplay)
{
    commentValue->SetLabelText(routeComment);
    for (myLoop = lineDisplay; myLoop < lineDisplay+6; myLoop++)
    {
        if(wpNum[myLoop] < 0)
        {
            listNum[myLoop%6]->SetLabelText("-");
        }
        else
        {
            routeWpNum = wxString::Format("%i", wpNum[myLoop]);
            listNum[myLoop%6]->SetLabelText(routeWpNum);
        }
    }
}


void routeDefinitionPagePanelwxSmith::setButtonThreadPointer(buttonThread * thread)
{
    buttonThreadPointer = thread;
}

void routeDefinitionPagePanelwxSmith::buttonEventHappend(int buttonEnum)
{

    currentText->SetBackgroundColour(thisPanelColor);
    int temp = buttonEnum;
    if(temp == jarus::LEFT_ARROW)
    {
        if(ID_RouteValue == currentText->GetId())
        {
            if(currentRouteNumber>1)currentRouteNumber--;
            routeDisplayText = wxString::Format("< %i/%i >",currentRouteNumber,19);
            routeValue->SetLabelText(routeDisplayText);
        }
    }
    else if(temp == jarus::RIGHT_ARROW)
    {
        if(ID_RouteValue == currentText->GetId())
        {
            if(currentRouteNumber<19)currentRouteNumber++;
            routeDisplayText = wxString::Format("< %i/%i >",currentRouteNumber,19);
            routeValue->SetLabelText(routeDisplayText);
        }
    }
    else if(temp == jarus::UP_ARROW)
    {
        if(selectedOption > 0)
            selectedOption--;
    }
    else if(temp == jarus::DOWN_ARROW)
    {
        if(selectedOption < sizeofArray)
            selectedOption++;
    }
    else if(temp == jarus::ENTER)
    {
        if(ID_RouteValue == currentText->GetId())
        {
            if(!fileRelatedVariablesInstance.fileVari.Eof())
            {
                ReadLineAstore(currentRouteNumber);
                nextPrint = 0;
                calculateAADisplay(nextPrint);
            }

        }
        else if (ID_down == currentText->GetId())
        {
            if (nextPrint<24) nextPrint += 6;
            calculateAADisplay(nextPrint);
        }
        else if (ID_up == currentText->GetId())
        {
            if (nextPrint>0) nextPrint -= 6;
            calculateAADisplay(nextPrint);
        }

        else
        {
            buttonThreadPointer->Pause();

            temporaryString = currentText->GetName();
            myDialog = new EnterStringDataDialog (this, wxID_ANY,wxPoint(-1,-1), wxSize(-1,-1), temporaryString);
            if ( myDialog->ShowModal() != wxID_OK )
            {
                temporaryString= myDialog->myStringInput;
                buttonThreadPointer->Resume();
            }
            else
                temporaryString= "something Went Wrong";
            currentText->SetLabelText(temporaryString);
        }
    }
    routeName->SetLabelText(wxString::Format("%i", selectedOption));
    currentText = (wxStaticText*)this->FindWindowById(listOfComponentArrayRdefi[selectedOption]);
    currentText->SetBackgroundColour(wxColor (*wxYELLOW));


}
