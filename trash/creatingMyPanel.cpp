#include "creatingMyPanel.h"

#include "../panelCreatingMain.h"
creatingMyPanel::creatingMyPanel(wxPanel * parent)
    : wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
wxButton *button = new wxButton(this, wxID_EXIT, wxT("Quit"),
      wxPoint(20, 20));

      Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED,wxCommandEventHandler(creatingMyPanel::OnMyButton));
  button->SetFocus();
    //ctor
}

creatingMyPanel::~creatingMyPanel()
{
    //dtor
}
void creatingMyPanel::OnMyButton(wxCommandEvent & WXUNUSED(event))
{
    Destroy();
    //Close(true);
    //mainFrame::myClose();
    //Close(true);

}
