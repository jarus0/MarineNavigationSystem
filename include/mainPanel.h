#ifndef MAINPANEL_H
#define MAINPANEL_H


#define panelClassName markPositionPanelwxSmith

#include "jarus.h"
#include "firstStartLogoPanel.h"

//wxSmithPanel Headers
#include "../markPositionSubPanelwxSmith.h"

#include "../gpsPositionPanelwxSmith.h"
#include "../markPositionPanelwxSmith.h"    //same as above panel

#include "../routeDefinitionPagePanelwxSmith.h"

#include "../satellitePagePanelwxSmith.h"
#include "../satellitePageStrengthSubPanelwxSmith.h"
#include "../satellitePageSkyviewSubPanelwxSmith.h"

#include "../EnterStringDataDialog.h"
#include "../EnterSymbolDialog.h"

#include "../mapPagePanelwxSmith.h"
#include "../mapPageSubPanelwxSmith.h"

/*
    wxBLACK wxBLUE  wxCYAN  wxGREEN wxYELLOW    wxLIGHT_GREY    wxRED   wxWHITE
    sprintf(str, "%d %d", countVar, jarus::MOB);char str[10];
    wxString::Format(wxT("%i"), temp)
*/



class mainPanel : public wxPanel
{
public:
    mainPanel(wxPanel *parent);
    virtual ~mainPanel();

    panelClassName *subPanelPointer;

    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer *hbox1 = new wxBoxSizer(wxHORIZONTAL);
    buttonThread    *buttonThreadPointer;
    void buttonThreadEventFun   (wxCommandEvent& event);

protected:
    void OnTimer1Trigger(wxTimerEvent& event);
    static const long ID_TIMER1;
    wxTimer Timer1;

private:

    //DECLARE_EVENT_TABLE()
};

#endif // MAINPANEL_H
