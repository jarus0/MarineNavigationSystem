#ifndef SATELLITEPAGESKYVIEWSUBPANELWXSMITH_H
#define SATELLITEPAGESKYVIEWSUBPANELWXSMITH_H

#ifndef WX_PRECOMP
//(*HeadersPCH(satellitePageSkyviewSubPanelwxSmith)
#include <wx/panel.h>
//*)
#endif
//(*Headers(satellitePageSkyviewSubPanelwxSmith)
//*)
#include <wx/graphics.h>
#include "cmath"
class satellitePageSkyviewSubPanelwxSmith: public wxPanel
{
public:

    satellitePageSkyviewSubPanelwxSmith(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~satellitePageSkyviewSubPanelwxSmith();
    void paintNow();
    void render(wxDC& dc);
    //(*Declarations(satellitePageSkyviewSubPanelwxSmith)
    //*)
    int *elevationArray;       //[12]    //0 to 90

    int *azimuthArray;       //[12]    // anyValue
    int *satlliteIDArray;
    bool fillUnfill[12] = {1, 1,1, 1,1, 1,1, 1,1, 1,1, 1};
    bool hilight[12] = {1, 0,1, 0,1, 0,1, 1,1, 1,1, 1};

    void setNewElevationArray(int *data);
    void setNewAzimuthArray(int *data);
    void satelliteID(int *data3);
protected:

    //(*Identifiers(satellitePageSkyviewSubPanelwxSmith)
    //*)

private:

    //(*Handlers(satellitePageSkyviewSubPanelwxSmith)
    void OnPaint(wxPaintEvent& event);
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
