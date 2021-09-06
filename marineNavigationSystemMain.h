/***************************************************************
 * Name:      marineNavigationSystemMain.h
 * Purpose:   Defines Application Frame
 * Author:    jarus (techinnovation4u@gmail.com)
 * Created:   2019-06-07
 * Copyright: jarus (jarus.com)
 * License:
 **************************************************************/

#ifndef MARINENAVIGATIONSYSTEMMAIN_H
#define MARINENAVIGATIONSYSTEMMAIN_H

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "marineNavigationSystemApp.h"
#include "mainPanel.h"

class marineNavigationSystemFrame: public wxFrame
{
public:
    marineNavigationSystemFrame(wxFrame *frame, const wxString& title);
    ~marineNavigationSystemFrame();


    wxPanel     *main_wxPanelPointer;
    mainPanel   *mainPanelPointer;

    wxBoxSizer  *hbox = new wxBoxSizer(wxHORIZONTAL);
private:
    void OnClose(wxCloseEvent& event);

    DECLARE_EVENT_TABLE()
};


#endif // MARINENAVIGATIONSYSTEMMAIN_H
