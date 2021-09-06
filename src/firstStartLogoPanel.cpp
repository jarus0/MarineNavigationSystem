#include "firstStartLogoPanel.h"


BEGIN_EVENT_TABLE(firstStartLogoPanel, wxPanel)
    //EVT_PAINT(firstStartLogoPanel::paintEvent)
END_EVENT_TABLE()

firstStartLogoPanel::firstStartLogoPanel(wxPanel * parent):wxPanel(parent, wxID_ANY, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{



    /*wxButton *button1 = new wxButton(this, wxID_EXIT, wxT("JarusQuit"),wxPoint(-1, -1));
    wxButton *button2 = new wxButton(this, wxID_ANY, wxT("Quit1"),wxPoint(-1, -1));

    wxButton *bmyText = new wxButton(this, wxID_ANY, wxT("Quit2"),wxPoint(-1, -1));

    button1->SetBackgroundColour(wxColour(* wxYELLOW));

    wxBoxSizer *hbox2 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer *hbox3 = new wxBoxSizer(wxVERTICAL);
    hbox2->Add(button1, 1, wxEXPAND | wxALL, 25);
    hbox2->Add(button2, 2, wxEXPAND | wxALL, 25);


    hbox3->Add(hbox2, 1, wxEXPAND | wxALL, 25);
    hbox3->Add(bmyText, 1, wxEXPAND | wxALL, 25);

    this->SetSizer(hbox3);
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED,wxCommandEventHandler(firstStartLogoPanel::OnMyButton));
    */
}

firstStartLogoPanel::~firstStartLogoPanel()
{
}

void firstStartLogoPanel::OnMyButton(wxCommandEvent & WXUNUSED(event))
{
    Destroy();
}

