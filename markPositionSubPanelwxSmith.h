#ifndef MARKPOSITIONSUBPANELWXSMITH_H
#define MARKPOSITIONSUBPANELWXSMITH_H

#ifndef WX_PRECOMP
//(*HeadersPCH(markPositionSubPanelwxSmith)
#include <wx/panel.h>
#include <wx/sizer.h>
//*)
#endif
//(*Headers(markPositionSubPanelwxSmith)
//*)


#include <wx/graphics.h>
#include <wx/bitmap.h>

class markPositionSubPanelwxSmith: public wxPanel
{
public:

    markPositionSubPanelwxSmith(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~markPositionSubPanelwxSmith();

    //(*Declarations(markPositionSubPanelwxSmith)
    //*)
    double showBearing;
    void setBearing(int bea);
    void paintNow();
protected:

    //(*Identifiers(markPositionSubPanelwxSmith)
    //*)

private:

    //(*Handlers(markPositionSubPanelwxSmith)
    void OnPaint(wxPaintEvent& event);
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
