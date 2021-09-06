#include "mainPanel.h"

const long mainPanel::ID_TIMER1 = wxNewId();
mainPanel::mainPanel(wxPanel * parent):wxPanel(parent, wxID_ANY, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{

    subPanelPointer = new panelClassName(this);
    hbox->Add(subPanelPointer, 1, wxEXPAND | wxALL, 10);
    this->SetSizer(hbox);
/*
    EnterSymbolDialog *myDialog;
    myDialog = new EnterSymbolDialog(this, wxID_ANY,wxPoint(-1,-1), wxSize(-1,-1));
    if ( myDialog->ShowModal() != wxID_OK )
    {
        delete myDialog;
    }
    else
        {}
*/


    /*  automatic new panel
        Timer1.SetOwner(this, ID_TIMER1);
        Timer1.Start(1000, true);
        Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&mainPanel::OnTimer1Trigger);
    */
    buttonThreadPointer = new buttonThread(this, 5);
    buttonThreadPointer->Create();
    buttonThreadPointer->Run();
    Connect(wxID_ANY, wxEVT_MYTHREAD, wxCommandEventHandler(mainPanel::buttonThreadEventFun));
    subPanelPointer->setButtonThreadPointer(buttonThreadPointer);
}

mainPanel::~mainPanel()
{
    buttonThreadPointer->Delete();
    buttonThreadPointer->Wait();
    delete buttonThreadPointer;
}


void mainPanel::buttonThreadEventFun(wxCommandEvent& event)
{
    int temp = event.GetInt();
    subPanelPointer->buttonEventHappend(temp);
}


void mainPanel::OnTimer1Trigger(wxTimerEvent& event)
{
    /*
        delete firstStartLogoPanelPointer; hbox->Detach(firstStartLogoPanelPointer);
        this->SetBackgroundColour(wxColour(* wxWHITE));

        PositionPagePanelPointer = new PositionPagePanel(this);
        PositionPagePanelPointer->SetSize( GetClientSize() -wxSize(80,80) );

        PositionPagePanelPointer->Center(wxBOTH);
        PositionPagePanelPointer->SetBackgroundColour(wxColour(* wxLIGHT_GREY));
        hbox1->Add(PositionPagePanelPointer, 1, wxEXPAND | wxALL, 40);

        this->SetSizer(hbox1);
    */
}

