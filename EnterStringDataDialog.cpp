#include "wx_pch.h"
#include "EnterStringDataDialog.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(EnterStringDataDialog)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(EnterStringDataDialog)
//*)

//(*IdInit(EnterStringDataDialog)
const long EnterStringDataDialog::ID_STATICTEXT1 = wxNewId();
const long EnterStringDataDialog::ID_STATICTEXT2 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON1 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON2 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON3 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON4 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON5 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON6 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON7 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON8 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON9 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON10 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON11 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON12 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON13 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON14 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON15 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON16 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON17 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON18 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON19 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON20 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON21 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON22 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON23 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON24 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON25 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON26 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON27 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON28 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON29 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON39 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON30 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON31 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON32 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON33 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON34 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON35 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON36 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON37 = wxNewId();
const long EnterStringDataDialog::ID_BUTTON38 = wxNewId();
const long EnterStringDataDialog::ID_PANEL1 = wxNewId();
//*)

long listOfComponentArrayKey[39] =
{
    EnterStringDataDialog::ID_BUTTON1,
    EnterStringDataDialog::ID_BUTTON2,
    EnterStringDataDialog::ID_BUTTON3,
    EnterStringDataDialog::ID_BUTTON4,
    EnterStringDataDialog::ID_BUTTON5,
    EnterStringDataDialog::ID_BUTTON6,
    EnterStringDataDialog::ID_BUTTON7,
    EnterStringDataDialog::ID_BUTTON8,
    EnterStringDataDialog::ID_BUTTON9,
    EnterStringDataDialog::ID_BUTTON10,
    EnterStringDataDialog::ID_BUTTON11,
    EnterStringDataDialog::ID_BUTTON12,
    EnterStringDataDialog::ID_BUTTON13,
    EnterStringDataDialog::ID_BUTTON14,
    EnterStringDataDialog::ID_BUTTON15,
    EnterStringDataDialog::ID_BUTTON16,
    EnterStringDataDialog::ID_BUTTON17,
    EnterStringDataDialog::ID_BUTTON18,
    EnterStringDataDialog::ID_BUTTON19,
    EnterStringDataDialog::ID_BUTTON20,
    EnterStringDataDialog::ID_BUTTON21,
    EnterStringDataDialog::ID_BUTTON22,
    EnterStringDataDialog::ID_BUTTON23,
    EnterStringDataDialog::ID_BUTTON24,
    EnterStringDataDialog::ID_BUTTON25,
    EnterStringDataDialog::ID_BUTTON26,
    EnterStringDataDialog::ID_BUTTON27,
    EnterStringDataDialog::ID_BUTTON28,
    EnterStringDataDialog::ID_BUTTON29,
    EnterStringDataDialog::ID_BUTTON39,
    EnterStringDataDialog::ID_BUTTON30,
    EnterStringDataDialog::ID_BUTTON31,
    EnterStringDataDialog::ID_BUTTON32,
    EnterStringDataDialog::ID_BUTTON33,
    EnterStringDataDialog::ID_BUTTON34,
    EnterStringDataDialog::ID_BUTTON35,
    EnterStringDataDialog::ID_BUTTON36,
    EnterStringDataDialog::ID_BUTTON37,
    EnterStringDataDialog::ID_BUTTON38
};
int selectedKey(4);

BEGIN_EVENT_TABLE(EnterStringDataDialog,wxDialog)
	//(*EventTable(EnterStringDataDialog)
	//*)
END_EVENT_TABLE()

EnterStringDataDialog::EnterStringDataDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size, wxString name)
{
	//(*Initialize(EnterStringDataDialog)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxGridSizer* GridSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(300,500));
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	requireFieldValue = new wxStaticText(Panel1, ID_STATICTEXT1, _("requireField"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer3->Add(requireFieldValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	dataValue = new wxStaticText(Panel1, ID_STATICTEXT2, _("Data"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer3->Add(dataValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	BoxSizer2->Add(BoxSizer3, 5, wxALL|wxEXPAND, 1);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("DONE-PAGE"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("CANCEL-QUIT"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer4->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("<--"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer4->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 1);
	GridSizer1 = new wxGridSizer(6, 6, 0, 0);
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("A"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	GridSizer1->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button5 = new wxButton(Panel1, ID_BUTTON5, _("B"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	GridSizer1->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button6 = new wxButton(Panel1, ID_BUTTON6, _("C"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	GridSizer1->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button7 = new wxButton(Panel1, ID_BUTTON7, _("D"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON7"));
	GridSizer1->Add(Button7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button8 = new wxButton(Panel1, ID_BUTTON8, _("E"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON8"));
	GridSizer1->Add(Button8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button9 = new wxButton(Panel1, ID_BUTTON9, _("F"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON9"));
	GridSizer1->Add(Button9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button10 = new wxButton(Panel1, ID_BUTTON10, _("G"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON10"));
	GridSizer1->Add(Button10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button11 = new wxButton(Panel1, ID_BUTTON11, _("H"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON11"));
	GridSizer1->Add(Button11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button12 = new wxButton(Panel1, ID_BUTTON12, _("I"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON12"));
	GridSizer1->Add(Button12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button13 = new wxButton(Panel1, ID_BUTTON13, _("J"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON13"));
	GridSizer1->Add(Button13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button14 = new wxButton(Panel1, ID_BUTTON14, _("K"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON14"));
	GridSizer1->Add(Button14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button15 = new wxButton(Panel1, ID_BUTTON15, _("L"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON15"));
	GridSizer1->Add(Button15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button16 = new wxButton(Panel1, ID_BUTTON16, _("M"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON16"));
	GridSizer1->Add(Button16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button17 = new wxButton(Panel1, ID_BUTTON17, _("N"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON17"));
	GridSizer1->Add(Button17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button18 = new wxButton(Panel1, ID_BUTTON18, _("O"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON18"));
	GridSizer1->Add(Button18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button19 = new wxButton(Panel1, ID_BUTTON19, _("P"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON19"));
	GridSizer1->Add(Button19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button20 = new wxButton(Panel1, ID_BUTTON20, _("Q"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON20"));
	GridSizer1->Add(Button20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button21 = new wxButton(Panel1, ID_BUTTON21, _("R"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON21"));
	GridSizer1->Add(Button21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button22 = new wxButton(Panel1, ID_BUTTON22, _("S"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON22"));
	GridSizer1->Add(Button22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button23 = new wxButton(Panel1, ID_BUTTON23, _("T"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON23"));
	GridSizer1->Add(Button23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button24 = new wxButton(Panel1, ID_BUTTON24, _("U"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON24"));
	GridSizer1->Add(Button24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button25 = new wxButton(Panel1, ID_BUTTON25, _("V"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON25"));
	GridSizer1->Add(Button25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button26 = new wxButton(Panel1, ID_BUTTON26, _("W"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON26"));
	GridSizer1->Add(Button26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button27 = new wxButton(Panel1, ID_BUTTON27, _("X"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON27"));
	GridSizer1->Add(Button27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button28 = new wxButton(Panel1, ID_BUTTON28, _("Y"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON28"));
	GridSizer1->Add(Button28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button29 = new wxButton(Panel1, ID_BUTTON29, _("Z"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON29"));
	GridSizer1->Add(Button29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button39 = new wxButton(Panel1, ID_BUTTON39, _("0"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON39"));
	GridSizer1->Add(Button39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button30 = new wxButton(Panel1, ID_BUTTON30, _("1"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON30"));
	GridSizer1->Add(Button30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button31 = new wxButton(Panel1, ID_BUTTON31, _("2"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON31"));
	GridSizer1->Add(Button31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button32 = new wxButton(Panel1, ID_BUTTON32, _("3"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON32"));
	GridSizer1->Add(Button32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
	Button33 = new wxButton(Panel1, ID_BUTTON33, _("4"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON33"));
	GridSizer1->Add(Button33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button34 = new wxButton(Panel1, ID_BUTTON34, _("5"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON34"));
	GridSizer1->Add(Button34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button35 = new wxButton(Panel1, ID_BUTTON35, _("6"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON35"));
	GridSizer1->Add(Button35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button36 = new wxButton(Panel1, ID_BUTTON36, _("7"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON36"));
	GridSizer1->Add(Button36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button37 = new wxButton(Panel1, ID_BUTTON37, _("8"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON37"));
	GridSizer1->Add(Button37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	Button38 = new wxButton(Panel1, ID_BUTTON38, _("9"), wxDefaultPosition, wxSize(45,45), 0, wxDefaultValidator, _T("ID_BUTTON38"));
	GridSizer1->Add(Button38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	BoxSizer2->Add(GridSizer1, 1, wxALL|wxEXPAND, 1);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	SetSizer(BoxSizer1);
	SetSizer(BoxSizer1);
	Layout();
	//*)

    defaultName = name;
    requireFieldValue->SetLabelText(name);

    buttonThreadPointer = new buttonThread(Panel1, 5);
    buttonThreadPointer->Create();
    buttonThreadPointer->Run();
    Connect(wxID_ANY, wxEVT_MYTHREAD, wxCommandEventHandler(EnterStringDataDialog::buttonThreadEventFun));
    currentButton  = (wxButton*)Panel1->FindWindowById(listOfComponentArrayKey[selectedKey]);
    currentButton ->SetBackgroundColour(wxColor (*wxYELLOW));

}

EnterStringDataDialog::~EnterStringDataDialog()
{
	//(*Destroy(EnterStringDataDialog)
	//*)
    buttonThreadPointer->Delete();
    buttonThreadPointer->Wait();
    delete buttonThreadPointer;

}


void EnterStringDataDialog::buttonThreadEventFun(wxCommandEvent& event)
{

    currentButton ->SetBackgroundColour(wxColor (*wxWHITE));
    int temp = event.GetInt();
    if(temp == jarus::LEFT_ARROW)
    {
        if(selectedKey > 0) selectedKey--;
    }
    else if(temp == jarus::RIGHT_ARROW)
    {
        if(selectedKey < 38) selectedKey++;
    }
    else if(temp == jarus::UP_ARROW)
    {
        if(selectedKey > 6) selectedKey -= 6;
        else selectedKey -= selectedKey-1;
    }
    else if(temp == jarus::DOWN_ARROW)
    {
        if(selectedKey < 33) selectedKey += 6;
    }
    else if(temp == jarus::ENTER)
    {
        if(selectedKey == 2)
        {
            if (!myStringInput.IsEmpty())
            {
                myStringInput = myStringInput.substr(0, myStringInput.Length()-1);
                dataValue->SetLabelText(myStringInput);
            }
        }
        else if(selectedKey == 0)
        {
            Close();
        }
        else if(selectedKey == 1)
        {
            Close();
        }
        else
        {
            myStringInput.Append(currentButton->GetLabel());
            dataValue->SetLabelText(myStringInput);
        }

    }
    else if (temp == jarus::PAGE)
    {
        Close();
    }
    else if (temp == jarus::QUIT)
    {
        myStringInput = defaultName;
        Close();
    }

    currentButton  = (wxButton*)this->FindWindowById(listOfComponentArrayKey[selectedKey]);
    currentButton->SetBackgroundColour(wxColor (*wxYELLOW));

}
