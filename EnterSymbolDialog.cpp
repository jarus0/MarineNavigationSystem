#include "wx_pch.h"
#include "EnterSymbolDialog.h"
#define nextName imageFileName=wxGetCwd()+"/ProgramFiles/image/symbol/"+wxString::Format("%i", counter++)+".bmp";
#define imageSet SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));
#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(EnterSymbolDialog)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(EnterSymbolDialog)
//*)

//(*IdInit(EnterSymbolDialog)
const long EnterSymbolDialog::ID_STATICTEXT1 = wxNewId();
const long EnterSymbolDialog::ID_STATICTEXT2 = wxNewId();
const long EnterSymbolDialog::ID_STATICTEXT3 = wxNewId();
const long EnterSymbolDialog::ID_STATICTEXT5 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP1 = wxNewId();
const long EnterSymbolDialog::ID_PANEL2 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP2 = wxNewId();
const long EnterSymbolDialog::ID_PANEL3 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP3 = wxNewId();
const long EnterSymbolDialog::ID_PANEL4 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP4 = wxNewId();
const long EnterSymbolDialog::ID_PANEL5 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP5 = wxNewId();
const long EnterSymbolDialog::ID_PANEL6 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP6 = wxNewId();
const long EnterSymbolDialog::ID_PANEL7 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP7 = wxNewId();
const long EnterSymbolDialog::ID_PANEL8 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP8 = wxNewId();
const long EnterSymbolDialog::ID_PANEL9 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP9 = wxNewId();
const long EnterSymbolDialog::ID_PANEL10 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP10 = wxNewId();
const long EnterSymbolDialog::ID_PANEL11 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP11 = wxNewId();
const long EnterSymbolDialog::ID_PANEL12 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP12 = wxNewId();
const long EnterSymbolDialog::ID_PANEL13 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP13 = wxNewId();
const long EnterSymbolDialog::ID_PANEL14 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP14 = wxNewId();
const long EnterSymbolDialog::ID_PANEL15 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP15 = wxNewId();
const long EnterSymbolDialog::ID_PANEL16 = wxNewId();
const long EnterSymbolDialog::ID_STATICBITMAP17 = wxNewId();
const long EnterSymbolDialog::ID_PANEL17 = wxNewId();
const long EnterSymbolDialog::ID_PANEL1 = wxNewId();
//*)

long listOfComponentArraySymbol123[] ={
    EnterSymbolDialog::ID_STATICTEXT2,
    EnterSymbolDialog::ID_STATICTEXT3,
    EnterSymbolDialog::ID_STATICTEXT5
    };

long listOfComponentArraySymbol[] ={
    EnterSymbolDialog::ID_PANEL2,
    EnterSymbolDialog::ID_PANEL3,
    EnterSymbolDialog::ID_PANEL4,
    EnterSymbolDialog::ID_PANEL5,
    EnterSymbolDialog::ID_PANEL6,
    EnterSymbolDialog::ID_PANEL7,
    EnterSymbolDialog::ID_PANEL8,
    EnterSymbolDialog::ID_PANEL9,
    EnterSymbolDialog::ID_PANEL10,
    EnterSymbolDialog::ID_PANEL11,
    EnterSymbolDialog::ID_PANEL12,
    EnterSymbolDialog::ID_PANEL13,
    EnterSymbolDialog::ID_PANEL14,
    EnterSymbolDialog::ID_PANEL15,
    EnterSymbolDialog::ID_PANEL16,
    EnterSymbolDialog::ID_PANEL17
};

BEGIN_EVENT_TABLE(EnterSymbolDialog,wxDialog)
	//(*EventTable(EnterSymbolDialog)
	//*)
END_EVENT_TABLE()

EnterSymbolDialog::EnterSymbolDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EnterSymbolDialog)
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer14;
	wxBoxSizer* BoxSizer15;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer17;
	wxBoxSizer* BoxSizer18;
	wxBoxSizer* BoxSizer19;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;
	wxGridSizer* GridSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(300,500));
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	displayName = new wxStaticText(Panel1, ID_STATICTEXT1, _("DISPLAY:-"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer3->Add(displayName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	nameWithSymbolName = new wxStaticText(Panel1, ID_STATICTEXT2, _("NAME WITH SYMBOL"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer3->Add(nameWithSymbolName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	variSymbolOnly = new wxStaticText(Panel1, ID_STATICTEXT3, _("SYMBOL ONLY"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer3->Add(variSymbolOnly, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	variCommentWithSymbol = new wxStaticText(Panel1, ID_STATICTEXT5, _("COMMENT WITH SYMBOL"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer3->Add(variCommentWithSymbol, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1 = new wxGridSizer(4, 4, 0, 0);
	symbolPanel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(symbolPanel2, ID_STATICBITMAP1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer4->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel2->SetSizer(BoxSizer4);
	BoxSizer4->Fit(symbolPanel2);
	BoxSizer4->SetSizeHints(symbolPanel2);
	GridSizer1->Add(symbolPanel2, 1, wxALL|wxEXPAND, 5);
	symbolPanel3 = new wxPanel(Panel1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap2 = new wxStaticBitmap(symbolPanel3, ID_STATICBITMAP2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP2"));
	BoxSizer5->Add(StaticBitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel3->SetSizer(BoxSizer5);
	BoxSizer5->Fit(symbolPanel3);
	BoxSizer5->SetSizeHints(symbolPanel3);
	GridSizer1->Add(symbolPanel3, 1, wxALL|wxEXPAND, 5);
	symbolPanel4 = new wxPanel(Panel1, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap3 = new wxStaticBitmap(symbolPanel4, ID_STATICBITMAP3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP3"));
	BoxSizer6->Add(StaticBitmap3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel4->SetSizer(BoxSizer6);
	BoxSizer6->Fit(symbolPanel4);
	BoxSizer6->SetSizeHints(symbolPanel4);
	GridSizer1->Add(symbolPanel4, 1, wxALL|wxEXPAND, 5);
	symbolPanel5 = new wxPanel(Panel1, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap4 = new wxStaticBitmap(symbolPanel5, ID_STATICBITMAP4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP4"));
	BoxSizer7->Add(StaticBitmap4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel5->SetSizer(BoxSizer7);
	BoxSizer7->Fit(symbolPanel5);
	BoxSizer7->SetSizeHints(symbolPanel5);
	GridSizer1->Add(symbolPanel5, 1, wxALL|wxEXPAND, 5);
	symbolPanel6 = new wxPanel(Panel1, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap5 = new wxStaticBitmap(symbolPanel6, ID_STATICBITMAP5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP5"));
	BoxSizer8->Add(StaticBitmap5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel6->SetSizer(BoxSizer8);
	BoxSizer8->Fit(symbolPanel6);
	BoxSizer8->SetSizeHints(symbolPanel6);
	GridSizer1->Add(symbolPanel6, 1, wxALL|wxEXPAND, 5);
	symbolPanel7 = new wxPanel(Panel1, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL7"));
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap6 = new wxStaticBitmap(symbolPanel7, ID_STATICBITMAP6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP6"));
	BoxSizer9->Add(StaticBitmap6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel7->SetSizer(BoxSizer9);
	BoxSizer9->Fit(symbolPanel7);
	BoxSizer9->SetSizeHints(symbolPanel7);
	GridSizer1->Add(symbolPanel7, 1, wxALL|wxEXPAND, 5);
	symbolPanel8 = new wxPanel(Panel1, ID_PANEL8, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL8"));
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap7 = new wxStaticBitmap(symbolPanel8, ID_STATICBITMAP7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP7"));
	BoxSizer10->Add(StaticBitmap7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel8->SetSizer(BoxSizer10);
	BoxSizer10->Fit(symbolPanel8);
	BoxSizer10->SetSizeHints(symbolPanel8);
	GridSizer1->Add(symbolPanel8, 1, wxALL|wxEXPAND, 5);
	symbolPanel9 = new wxPanel(Panel1, ID_PANEL9, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL9"));
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap8 = new wxStaticBitmap(symbolPanel9, ID_STATICBITMAP8, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP8"));
	BoxSizer11->Add(StaticBitmap8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel9->SetSizer(BoxSizer11);
	BoxSizer11->Fit(symbolPanel9);
	BoxSizer11->SetSizeHints(symbolPanel9);
	GridSizer1->Add(symbolPanel9, 1, wxALL|wxEXPAND, 5);
	symbolPanel10 = new wxPanel(Panel1, ID_PANEL10, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL10"));
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap9 = new wxStaticBitmap(symbolPanel10, ID_STATICBITMAP9, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP9"));
	BoxSizer12->Add(StaticBitmap9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel10->SetSizer(BoxSizer12);
	BoxSizer12->Fit(symbolPanel10);
	BoxSizer12->SetSizeHints(symbolPanel10);
	GridSizer1->Add(symbolPanel10, 1, wxALL|wxEXPAND, 5);
	symbolPanel11 = new wxPanel(Panel1, ID_PANEL11, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL11"));
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap10 = new wxStaticBitmap(symbolPanel11, ID_STATICBITMAP10, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP10"));
	BoxSizer13->Add(StaticBitmap10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel11->SetSizer(BoxSizer13);
	BoxSizer13->Fit(symbolPanel11);
	BoxSizer13->SetSizeHints(symbolPanel11);
	GridSizer1->Add(symbolPanel11, 1, wxALL|wxEXPAND, 5);
	symbolPanel12 = new wxPanel(Panel1, ID_PANEL12, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL12"));
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap11 = new wxStaticBitmap(symbolPanel12, ID_STATICBITMAP11, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP11"));
	BoxSizer14->Add(StaticBitmap11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel12->SetSizer(BoxSizer14);
	BoxSizer14->Fit(symbolPanel12);
	BoxSizer14->SetSizeHints(symbolPanel12);
	GridSizer1->Add(symbolPanel12, 1, wxALL|wxEXPAND, 5);
	symbolPanel13 = new wxPanel(Panel1, ID_PANEL13, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL13"));
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap12 = new wxStaticBitmap(symbolPanel13, ID_STATICBITMAP12, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP12"));
	BoxSizer15->Add(StaticBitmap12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel13->SetSizer(BoxSizer15);
	BoxSizer15->Fit(symbolPanel13);
	BoxSizer15->SetSizeHints(symbolPanel13);
	GridSizer1->Add(symbolPanel13, 1, wxALL|wxEXPAND, 5);
	symbolPanel14 = new wxPanel(Panel1, ID_PANEL14, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL14"));
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap13 = new wxStaticBitmap(symbolPanel14, ID_STATICBITMAP13, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP13"));
	BoxSizer16->Add(StaticBitmap13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel14->SetSizer(BoxSizer16);
	BoxSizer16->Fit(symbolPanel14);
	BoxSizer16->SetSizeHints(symbolPanel14);
	GridSizer1->Add(symbolPanel14, 1, wxALL|wxEXPAND, 5);
	symbolPanel15 = new wxPanel(Panel1, ID_PANEL15, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL15"));
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap14 = new wxStaticBitmap(symbolPanel15, ID_STATICBITMAP14, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP14"));
	BoxSizer17->Add(StaticBitmap14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel15->SetSizer(BoxSizer17);
	BoxSizer17->Fit(symbolPanel15);
	BoxSizer17->SetSizeHints(symbolPanel15);
	GridSizer1->Add(symbolPanel15, 1, wxALL|wxEXPAND, 5);
	symbolPanel16 = new wxPanel(Panel1, ID_PANEL16, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL16"));
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap15 = new wxStaticBitmap(symbolPanel16, ID_STATICBITMAP15, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP15"));
	BoxSizer18->Add(StaticBitmap15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel16->SetSizer(BoxSizer18);
	BoxSizer18->Fit(symbolPanel16);
	BoxSizer18->SetSizeHints(symbolPanel16);
	GridSizer1->Add(symbolPanel16, 1, wxALL|wxEXPAND, 5);
	symbolPanel17 = new wxPanel(Panel1, ID_PANEL17, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL17"));
	BoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap16 = new wxStaticBitmap(symbolPanel17, ID_STATICBITMAP17, wxNullBitmap, wxDefaultPosition, wxSize(50,50), wxSIMPLE_BORDER, _T("ID_STATICBITMAP17"));
	BoxSizer19->Add(StaticBitmap16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	symbolPanel17->SetSizer(BoxSizer19);
	BoxSizer19->Fit(symbolPanel17);
	BoxSizer19->SetSizeHints(symbolPanel17);
	GridSizer1->Add(symbolPanel17, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(GridSizer1, 3, wxALL|wxEXPAND, 5);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	SetSizer(BoxSizer1);
	Layout();
	//*)

	enterPressed = true;
	selectionX = -1;
	selectionY = -1;
    buttonThreadPointer1 = new buttonThread(this, 5);
    buttonThreadPointer1->Create();
    buttonThreadPointer1->Run();
    Connect(wxID_ANY, wxEVT_MYTHREAD, wxCommandEventHandler(EnterSymbolDialog::buttonThreadEventFun));
    currentSelectedText = (wxStaticText*)this->FindWindowById(listOfComponentArraySymbol[cursorSelected]);
    sizeofArray123 = sizeof(listOfComponentArraySymbol123)/sizeof(listOfComponentArraySymbol123[0]);
    sizeofArray123--;

    sizeofArray = sizeof(listOfComponentArraySymbol)/sizeof(listOfComponentArraySymbol[0]);
    sizeofArray--;

int counter = 1;
nextName StaticBitmap1->imageSet
nextName StaticBitmap2->imageSet
nextName StaticBitmap3->imageSet
nextName StaticBitmap4->imageSet
nextName StaticBitmap5->imageSet
nextName StaticBitmap6->imageSet
nextName StaticBitmap7->imageSet
nextName StaticBitmap8->imageSet
nextName StaticBitmap9->imageSet
nextName StaticBitmap10->imageSet
nextName StaticBitmap11->imageSet
imageFileName  = wxGetCwd() + "/ProgramFiles/image/symbol/"+ wxString::Format("%i", 1+1) +".bmp";
StaticBitmap12->SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));
imageFileName  = wxGetCwd() + "/ProgramFiles/image/symbol/"+ wxString::Format("%i", 1+1) +".bmp";
StaticBitmap13->SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));
imageFileName  = wxGetCwd() + "/ProgramFiles/image/symbol/"+ wxString::Format("%i", 1+1) +".bmp";
StaticBitmap14->SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));
imageFileName  = wxGetCwd() + "/ProgramFiles/image/symbol/"+ wxString::Format("%i", 1+1) +".bmp";
StaticBitmap15->SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));
imageFileName  = wxGetCwd() + "/ProgramFiles/image/symbol/"+ wxString::Format("%i", 1+1) +".bmp";
StaticBitmap16->SetBitmap(wxBitmap(wxImage(imageFileName).Rescale(wxSize(50,50).GetWidth(),wxSize(50,50).GetHeight())));

}

EnterSymbolDialog::~EnterSymbolDialog()
{
	//(*Destroy(EnterSymbolDialog)
	//*)

    buttonThreadPointer1->Delete();
    buttonThreadPointer1->Wait();
    delete buttonThreadPointer1;
}

void EnterSymbolDialog::buttonThreadEventFun(wxCommandEvent& event)
{

    currentSelectedText->SetBackgroundColour(wxColor (*wxWHITE));

    int temp = event.GetInt();
    if(temp == jarus::LEFT_ARROW)
    {
        if(cursorSelected > 0) cursorSelected--;
    }
    else if(temp == jarus::RIGHT_ARROW)
    {
        if(enterPressed)
            {if(cursorSelected < sizeofArray123) cursorSelected++;}
        else
            {if(cursorSelected < sizeofArray) cursorSelected++;}
    }
    else if(temp == jarus::ENTER)
    {

        if (enterPressed )
        {
            selectionX = cursorSelected;

        }
        else
        {
            selectionY = cursorSelected;
            Close();
        }
        enterPressed = false;

    }

    displayName->SetLabelText(wxString::Format(wxT("%i"), cursorSelected));

    if(enterPressed)
        currentSelectedText = (wxStaticText*)this->FindWindowById(listOfComponentArraySymbol123[cursorSelected]);
    else
        currentSelectedText = (wxStaticText*)this->FindWindowById(listOfComponentArraySymbol[cursorSelected]);


    currentSelectedText->SetBackgroundColour(wxColor (*wxYELLOW));

}
void EnterSymbolDialog::OnPanel1Paint(wxPaintEvent& event)
{

}
