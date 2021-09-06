/***************************************************************
 * Name:      marineNavigationSystemMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    jarus (techinnovation4u@gmail.com)
 * Created:   2019-06-07
 * Copyright: jarus (jarus.com)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "marineNavigationSystemMain.h"

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

BEGIN_EVENT_TABLE(marineNavigationSystemFrame, wxFrame)
    EVT_CLOSE(marineNavigationSystemFrame::OnClose)
END_EVENT_TABLE()

marineNavigationSystemFrame::marineNavigationSystemFrame(wxFrame *frame, const wxString& title)
    : wxFrame(frame, -1, title)
{

    SetSize(400,650);     //Default size
    //SetSize(400,300);       //subPanel Size

    main_wxPanelPointer = new wxPanel(this, wxID_ANY, wxPoint(-1,-1), GetClientSize());
    main_wxPanelPointer->SetBackgroundColour(wxColour(* wxBLUE));

    mainPanelPointer = new mainPanel(main_wxPanelPointer);
    mainPanelPointer->SetBackgroundColour(wxColour(* wxCYAN));

    hbox->Add(mainPanelPointer, 1, wxEXPAND | wxALL, 10);
    main_wxPanelPointer->SetSizer(hbox);
}


marineNavigationSystemFrame::~marineNavigationSystemFrame()
{

}

void marineNavigationSystemFrame::OnClose(wxCloseEvent &event)
{
    delete(mainPanelPointer);
    Destroy();
}
