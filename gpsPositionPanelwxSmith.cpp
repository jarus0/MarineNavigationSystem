#include "wx_pch.h"
#include "gpsPositionPanelwxSmith.h"

#ifndef WX_PRECOMP
//(*InternalHeadersPCH(gpsPositionPanelwxSmith)
#include <wx/intl.h>
#include <wx/string.h>
//*)
#endif
//(*InternalHeaders(gpsPositionPanelwxSmith)
#include <wx/font.h>
//*)

//(*IdInit(gpsPositionPanelwxSmith)
const long gpsPositionPanelwxSmith::ID_STATICTEXT1 = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICLINE1 = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICTEXT2 = wxNewId();
const long gpsPositionPanelwxSmith::ID_wpValue = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICBITMAP1 = wxNewId();
const long gpsPositionPanelwxSmith::ID_symbol = wxNewId();
const long gpsPositionPanelwxSmith::ID_latitudeValue = wxNewId();
const long gpsPositionPanelwxSmith::ID_longitudeValue = wxNewId();
const long gpsPositionPanelwxSmith::ID_wpComment = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICLINE2 = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICTEXT6 = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICTEXT7 = wxNewId();
const long gpsPositionPanelwxSmith::ID_routeNumValue = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICLINE3 = wxNewId();
const long gpsPositionPanelwxSmith::ID_avarageName = wxNewId();
const long gpsPositionPanelwxSmith::ID_saveName = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICTEXT8 = wxNewId();
const long gpsPositionPanelwxSmith::ID_STATICTEXT13 = wxNewId();
//*)

long listOfComponentArrayGpsPos[] =
{
    gpsPositionPanelwxSmith::ID_wpValue,
    gpsPositionPanelwxSmith::ID_symbol,
    gpsPositionPanelwxSmith::ID_latitudeValue,
    gpsPositionPanelwxSmith::ID_longitudeValue,
    gpsPositionPanelwxSmith::ID_wpComment,
    gpsPositionPanelwxSmith::ID_routeNumValue,
    gpsPositionPanelwxSmith::ID_avarageName,
    gpsPositionPanelwxSmith::ID_saveName
};
BEGIN_EVENT_TABLE(gpsPositionPanelwxSmith,wxPanel)
    //(*EventTable(gpsPositionPanelwxSmith)
    //*)
END_EVENT_TABLE()

gpsPositionPanelwxSmith::gpsPositionPanelwxSmith(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(gpsPositionPanelwxSmith)
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer11;
    wxBoxSizer* BoxSizer12;
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
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    gpsPositiontitleName = new wxStaticText(this, ID_STATICTEXT1, _("GPS POSITION"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont gpsPositiontitleNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    gpsPositiontitleName->SetFont(gpsPositiontitleNameFont);
    BoxSizer2->Add(gpsPositiontitleName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    BoxSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND, 5);
    BoxSizer6 = new wxBoxSizer(wxVERTICAL);
    waypointName = new wxStaticText(this, ID_STATICTEXT2, _("Waypoint:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont waypointNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    waypointName->SetFont(waypointNameFont);
    BoxSizer6->Add(waypointName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer12 = new wxBoxSizer(wxVERTICAL);
    wpValue = new wxStaticText(this, ID_wpValue, _("001"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_wpValue"));
    wxFont wpValueFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    wpValue->SetFont(wpValueFont);
    BoxSizer12->Add(wpValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer10->Add(BoxSizer12, 1, wxALL|wxEXPAND, 5);
    Panel1 = new wxPanel(this, ID_symbol, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_symbol"));
    BoxSizer11 = new wxBoxSizer(wxVERTICAL);
    StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
    BoxSizer11->Add(StaticBitmap1, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    Panel1->SetSizer(BoxSizer11);
    BoxSizer11->Fit(Panel1);
    BoxSizer11->SetSizeHints(Panel1);
    BoxSizer10->Add(Panel1, 1, wxALL|wxEXPAND, 5);
    BoxSizer6->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
    latitudeValue = new wxStaticText(this, ID_latitudeValue, _("N 00*00.000\'"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_latitudeValue"));
    wxFont latitudeValueFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    latitudeValue->SetFont(latitudeValueFont);
    BoxSizer6->Add(latitudeValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    longitudeValue = new wxStaticText(this, ID_longitudeValue, _("W 000*00.000\'"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_longitudeValue"));
    wxFont longitudeValueFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    longitudeValue->SetFont(longitudeValueFont);
    BoxSizer6->Add(longitudeValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wpComment = new wxStaticText(this, ID_wpComment, _("_ _ _ _ _ _ _"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_wpComment"));
    wxFont wpCommentFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    wpComment->SetFont(wpCommentFont);
    BoxSizer6->Add(wpComment, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer6, 8, wxALL|wxEXPAND, 5);
    StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    BoxSizer1->Add(StaticLine2, 1, wxALL|wxEXPAND, 5);
    BoxSizer5 = new wxBoxSizer(wxVERTICAL);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    addToRouteName = new wxStaticText(this, ID_STATICTEXT6, _("Add to route"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    wxFont addToRouteNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    addToRouteName->SetFont(addToRouteNameFont);
    BoxSizer4->Add(addToRouteName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    numberName = new wxStaticText(this, ID_STATICTEXT7, _("number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    wxFont numberNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    numberName->SetFont(numberNameFont);
    BoxSizer3->Add(numberName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    routeNumValue = new wxStaticText(this, ID_routeNumValue, _("_ _ _"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_routeNumValue"));
    wxFont routeNumValueFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    routeNumValue->SetFont(routeNumValueFont);
    BoxSizer3->Add(routeNumValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer5, 8, wxALL|wxEXPAND, 0);
    StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
    BoxSizer1->Add(StaticLine3, 1, wxALL|wxEXPAND, 0);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer8 = new wxBoxSizer(wxVERTICAL);
    avarageName = new wxStaticText(this, ID_avarageName, _("Average\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_avarageName"));
    wxFont avarageNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    avarageName->SetFont(avarageNameFont);
    BoxSizer8->Add(avarageName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    saveName = new wxStaticText(this, ID_saveName, _("Save\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_saveName"));
    wxFont saveNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    saveName->SetFont(saveNameFont);
    BoxSizer8->Add(saveName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
    BoxSizer9 = new wxBoxSizer(wxVERTICAL);
    fomName = new wxStaticText(this, ID_STATICTEXT8, _("FOM"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    wxFont fomNameFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    fomName->SetFont(fomNameFont);
    BoxSizer9->Add(fomName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fomValue = new wxStaticText(this, ID_STATICTEXT13, _("_ _ _ "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
    wxFont fomValueFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    fomValue->SetFont(fomValueFont);
    BoxSizer9->Add(fomValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer7, 8, wxALL|wxEXPAND, 0);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    //*)




    currentRouteNumber = -1;
    wxString imageFileName  = wxGetCwd() + "/ProgramFiles/image/symbol/"+ wxString::Format("%i", 1) +".bmp";
    StaticBitmap1->SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));

    currentStatixText = (wxStaticText*)this->FindWindowById(listOfComponentArrayGpsPos[cursorSelected]);
    sizeofArray = sizeof(listOfComponentArrayGpsPos)/sizeof(listOfComponentArrayGpsPos[0]);
    sizeofArray--;




    getNewWpName();
    wpValue->SetLabelText(wxString::Format(wxT("%i"), wpCountNum));





}

gpsPositionPanelwxSmith::~gpsPositionPanelwxSmith()
{
    //(*Destroy(gpsPositionPanelwxSmith)
    //*)
}
void gpsPositionPanelwxSmith::addNewWptoRoute(int lineNumberToRead, int wpNum)
{
    wxString addToRouteFile = "";
    int counting=0;
    bool doIStop = true;

    file.fileRef.Open(file.RoutefileName);


    if(!file.fileRef.Eof())
    {
        file.line = file.fileRef.GetLine(lineNumberToRead);
        file.tokenizer.SetString(file.line, ",");
        file.currentToken = file.tokenizer.GetNextToken();
        addToRouteFile = file.currentToken;

        while(doIStop)
        {
            file.currentToken = file.tokenizer.GetNextToken();
            counting++;
            if( file.currentToken.IsSameAs("-1") || counting > 30)
            {
                doIStop = false;
                if(counting < 31)
                {
                    addToRouteFile += wxString::Format(wxT(",%i"), wpNum);
                    for(int myLoop  = counting-1; myLoop < 29; myLoop++)
                    {
                        addToRouteFile += ",-1";

                    }
                    file.fileRef.RemoveLine(lineNumberToRead);
                    file.fileRef.InsertLine(addToRouteFile, lineNumberToRead);
                    file.fileRef.Write();
                    file.fileRef.Close();
                }
                else
                {
                    file.fileRef.Close();
                }

            }
            else {addToRouteFile += "," + file.currentToken;}
        }

    }

}
void gpsPositionPanelwxSmith::saveWptoFile()
{
    //name,latitude,longitude,comment,symbolEnum,ref,bering,distance
    wxString wpAddToFile;
    wpAddToFile = wpValue->GetLabelText();          wpAddToFile += ",";
    wpAddToFile += latitudeValue->GetLabelText();   wpAddToFile += ",";
    wpAddToFile += longitudeValue->GetLabelText();  wpAddToFile += ",";
    wpAddToFile += wpComment->GetLabelText();       wpAddToFile += ",";
    wpAddToFile += wxString::Format(wxT("%i"), symbol); wpAddToFile += ",";
    wpAddToFile += wxString::Format(wxT("%i"), -1);

    file.fileRef.Open(file.wpFileName);
    file.fileRef.AddLine(wpAddToFile);
    file.fileRef.Write();
    file.fileRef.Close();
}

void gpsPositionPanelwxSmith::getNewWpName()
{

    currentNum = wpCountNum = -1;
    file.fileRef.Open(file.wpFileName);

    while(!file.fileRef.Eof())
    {
        file.line = file.fileRef.GetNextLine();
        file.tokenizer.SetString(file.line, ",");
        file.currentToken = file.tokenizer.GetNextToken();
        if(!file.currentToken.ToLong(&currentNum))
        { /* error! */ }
        else
        {
            if(currentNum > wpCountNum)
                wpCountNum = currentNum;
        }
    }
    wpCountNum++;
    file.fileRef.Close();
}

wxString routeDisplayText1;

void gpsPositionPanelwxSmith::setButtonThreadPointer(buttonThread * thread)
{
    buttonThreadPointer = thread;
}
void gpsPositionPanelwxSmith::buttonEventHappend(int buttonEnum)
{
    currentStatixText->SetBackgroundColour(wxColor (*wxWHITE));
    int temp = buttonEnum;
    if(temp == jarus::LEFT_ARROW)
    {
        if(ID_routeNumValue == currentStatixText->GetId())
        {
            if(currentRouteNumber>1)currentRouteNumber--;
            routeDisplayText1 = wxString::Format("< %i/%i >",currentRouteNumber,19);
            routeNumValue->SetLabelText(routeDisplayText1);
            doRouteAlsoSave = true;
        }
        else if (ID_wpValue == currentStatixText->GetId())
        {
            if(wpCountNum>0)wpCountNum--;
            routeDisplayText1 = wxString::Format("%i",wpCountNum);
            wpValue->SetLabelText(routeDisplayText1);
        }
    }
    else if(temp == jarus::RIGHT_ARROW)
    {

        if(ID_routeNumValue == currentStatixText->GetId())
        {
            if(currentRouteNumber<20)currentRouteNumber++;
            routeDisplayText1 = wxString::Format("< %i/%i >",currentRouteNumber,19);
            routeNumValue->SetLabelText(routeDisplayText1);
            doRouteAlsoSave = true;
        }
        else if (ID_wpValue == currentStatixText->GetId())
        {
            if(wpCountNum<500)wpCountNum++;
            routeDisplayText1 = wxString::Format("%i",wpCountNum);
            wpValue->SetLabelText(routeDisplayText1);
        }


    }
    else if(temp == jarus::UP_ARROW)
    {

        if(cursorSelected > 0)cursorSelected--;
    }
    else if(temp == jarus::DOWN_ARROW)
    {
        if(cursorSelected < sizeofArray) cursorSelected++;
    }
    else if(temp == jarus::ENTER)
    {
        if(ID_symbol == currentStatixText->GetId())
        {
            buttonThreadPointer->Pause();

            temporaryString = currentStatixText->GetName();

            symbolDialog = new EnterSymbolDialog(this, wxID_ANY,wxPoint(-1,-1), wxSize(-1,-1));
            if ( symbolDialog->ShowModal() != wxID_OK )
            {
                wxString myStr = wxString::Format(wxT("%i,%i"), symbolDialog->selectionX, symbolDialog->selectionY);
                gpsPositiontitleName->SetLabelText(myStr);

                wxString imageFileName  = wxGetCwd() + "/ProgramFiles/image/symbol/"+ wxString::Format("%i", symbolDialog->selectionY+1) +".bmp";
                StaticBitmap1->SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));
                symbol = symbolDialog->selectionY+1;
                buttonThreadPointer->Resume();
                delete symbolDialog;
            }
            else
                temporaryString= "something Went Wrong";
            //currentStatixText->SetLabelText(temporaryString);

        }
        else if (ID_saveName == currentStatixText->GetId())
        {
            saveWptoFile();
            if(doRouteAlsoSave)
                {addNewWptoRoute(currentRouteNumber,67);}
        }
        else
        {

            buttonThreadPointer->Pause();

            temporaryString = currentStatixText->GetName();

            myDialog = new EnterStringDataDialog (this, wxID_ANY,wxPoint(-1,-1), wxSize(-1,-1), temporaryString);
            if ( myDialog->ShowModal() != wxID_OK )
            {
                temporaryString= myDialog->myStringInput;
                buttonThreadPointer->Resume();
                delete myDialog;
            }
            else
                temporaryString= "something Went Wrong";
            currentStatixText->SetLabelText(temporaryString);

        }
    }

    currentStatixText = (wxStaticText*)this->FindWindowById(listOfComponentArrayGpsPos[cursorSelected]);
    currentStatixText->SetBackgroundColour(wxColor (*wxYELLOW));

}
