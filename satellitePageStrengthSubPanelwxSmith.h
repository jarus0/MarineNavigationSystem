#ifndef SATELLITEPAGESTRENGTHSUBPANELWXSMITH_H
#define SATELLITEPAGESTRENGTHSUBPANELWXSMITH_H

#ifndef WX_PRECOMP
//(*HeadersPCH(satellitePageStrengthSubPanelwxSmith)
#include <wx/panel.h>
//*)
#endif
//(*Headers(satellitePageStrengthSubPanelwxSmith)
//*)

class satellitePageStrengthSubPanelwxSmith: public wxPanel
{
public:

    satellitePageStrengthSubPanelwxSmith(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~satellitePageStrengthSubPanelwxSmith();

    //(*Declarations(satellitePageStrengthSubPanelwxSmith)
    //*)
    void paintNow();
    void render(wxDC& dc);

    wxSize panelSize;
    int w;
    int h;
    float margin  ;
    float barWidth ;
    float barGap   ;
    float startPotion ;

    float *sizeOfBar;
    int *pBarID;
    bool fillUnfill[12];
    void setNewBarSize(float abc[12]);
    void setNewBarID(int barID[12]);
protected:

    //(*Identifiers(satellitePageStrengthSubPanelwxSmith)
    //*)

private:

    //(*Handlers(satellitePageStrengthSubPanelwxSmith)
    void OnPaint(wxPaintEvent& event);
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
