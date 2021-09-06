#include "wx_pch.h"
#include "satellitePageStrengthSubPanelwxSmith.h"

#ifndef WX_PRECOMP
//(*InternalHeadersPCH(satellitePageStrengthSubPanelwxSmith)
#include <wx/intl.h>
#include <wx/string.h>
//*)
#endif
//(*InternalHeaders(satellitePageStrengthSubPanelwxSmith)
//*)

//(*IdInit(satellitePageStrengthSubPanelwxSmith)
//*)

BEGIN_EVENT_TABLE(satellitePageStrengthSubPanelwxSmith,wxPanel)
    //(*EventTable(satellitePageStrengthSubPanelwxSmith)
    //*)
END_EVENT_TABLE()

satellitePageStrengthSubPanelwxSmith::satellitePageStrengthSubPanelwxSmith(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(satellitePageStrengthSubPanelwxSmith)
    Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));

    Connect(wxEVT_PAINT,(wxObjectEventFunction)&satellitePageStrengthSubPanelwxSmith::OnPaint);
    //*)
}

satellitePageStrengthSubPanelwxSmith::~satellitePageStrengthSubPanelwxSmith()
{
    //(*Destroy(satellitePageStrengthSubPanelwxSmith)
    //*)
}


void satellitePageStrengthSubPanelwxSmith::OnPaint(wxPaintEvent& event)
{
    wxPaintDC dc(this);
    sizeOfBar = new float[12];
    pBarID = new int[12];

    for (int myLoop = 1; myLoop < 13; myLoop++)
    {
        sizeOfBar[myLoop-1] = 0;
        pBarID[myLoop-1] = -1;
    }

    render(dc);
}


void satellitePageStrengthSubPanelwxSmith::paintNow()
{
    wxClientDC dc(this);
    render(dc);
}
void satellitePageStrengthSubPanelwxSmith::render(wxDC&  dc)
{
    dc.Clear();

    panelSize = this->GetClientSize();
    w = panelSize.GetWidth();
    h = panelSize.GetHeight();

    margin        = w*0.02;
    barWidth      = w*0.07;
    barGap        = w*0.01;
    startPotion   = margin;

    dc.SetBrush(*wxBLUE_BRUSH);
    dc.SetPen( wxPen( wxColor(255,255,0), 1) );


    wxFont mpNameFont(15,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    //dc.SetFont(mpNameFont);

    for (int myLoop = 0; myLoop < 12; myLoop++)
    {
        /*if(fillUnfill[myLoop])
            dc.SetBrush(*wxWHITE_BRUSH);
        else
            dc.SetBrush(*wxBLUE_BRUSH);*/
        dc.DrawRectangle(   startPotion, (h*   (80 - (sizeOfBar[myLoop] *(0.8)))   )/100,
                            barWidth, h - ( (h* (80 - (sizeOfBar[myLoop] *(0.8)))   )/100 + h*0.2  )   );
        dc.DrawRotatedText(wxString::Format(wxT("%i"), pBarID[myLoop]),startPotion, h*0.9, 45);

        startPotion = startPotion + barGap + barWidth;
    }


    dc.SetPen( wxPen( wxColor(*wxRED), 1) );
    dc.DrawLine((int)w*0.01, (int)h*0.8, (int)w*0.98, (int)h*0.8);
    dc.DrawLine((int)w*0.01, (int)h*0.6, (int)w*0.98, (int)h*0.6);
    dc.DrawLine((int)w*0.01, (int)h*0.4, (int)w*0.98, (int)h*0.4);
    dc.DrawLine((int)w*0.01, (int)h*0.2, (int)w*0.98, (int)h*0.2);

}

void satellitePageStrengthSubPanelwxSmith::setNewBarSize(float barSize[12])
{
    sizeOfBar = barSize;
}

void satellitePageStrengthSubPanelwxSmith::setNewBarID(int barID[12])
{
    pBarID = barID;
}
