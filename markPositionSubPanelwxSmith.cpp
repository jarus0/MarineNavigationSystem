#include "wx_pch.h"
#include "markPositionSubPanelwxSmith.h"

#ifndef WX_PRECOMP
//(*InternalHeadersPCH(markPositionSubPanelwxSmith)
#include <wx/intl.h>
#include <wx/string.h>
//*)
#endif
//(*InternalHeaders(markPositionSubPanelwxSmith)
//*)

//(*IdInit(markPositionSubPanelwxSmith)
//*)

BEGIN_EVENT_TABLE(markPositionSubPanelwxSmith,wxPanel)
    //(*EventTable(markPositionSubPanelwxSmith)
    //*)
END_EVENT_TABLE()

markPositionSubPanelwxSmith::markPositionSubPanelwxSmith(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(markPositionSubPanelwxSmith)
    wxBoxSizer* BoxSizer1;

    Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(wxEVT_PAINT,(wxObjectEventFunction)&markPositionSubPanelwxSmith::OnPaint);
    //*)

    showBearing = 18;
}


markPositionSubPanelwxSmith::~markPositionSubPanelwxSmith()
{
    //(*Destroy(markPositionSubPanelwxSmith)
    //*)
}


void markPositionSubPanelwxSmith::setBearing(int bea)
{
    showBearing = bea;
}
void markPositionSubPanelwxSmith::OnPaint(wxPaintEvent& event)
{



}


void markPositionSubPanelwxSmith::paintNow()
{
    wxClientDC dc(this);
    wxBitmap scale1;
    wxBitmap scale2;

    scale1.LoadFile(wxGetCwd()+"/ProgramFiles/image/postionPage/newLinerScale1.png");
    scale2.LoadFile(wxGetCwd()+"/ProgramFiles/image/postionPage/newLinerScale2.png");

    double bitmapW = scale1.GetWidth();
    double bitmapH = scale1.GetHeight();

    wxRect subSizeOfBitmap;
    double wPanel, hPanel;

    wxGraphicsContext *gc = wxGraphicsContext::Create( dc );
    if (gc)
    {
        gc->SetPen( *wxRED_PEN );
        gc->GetSize(&wPanel, &hPanel);
    showBearing /= 10;
        showBearing -= 1.83;
        if(12 < showBearing && showBearing  < 24)
        {
            showBearing /= 36;
            subSizeOfBitmap = wxRect(bitmapW*showBearing, 0 , bitmapW*0.1, bitmapH);
            gc->DrawBitmap(scale1.GetSubBitmap(subSizeOfBitmap),
                           0, 0, wPanel, hPanel);
        }
        else
        {
            if(12 < showBearing)
                showBearing -= 18;
            else if(12 > showBearing)
                showBearing += 18;

            showBearing /= 36;
            subSizeOfBitmap = wxRect(bitmapW*showBearing, 0 , bitmapW*0.1, bitmapH);
            gc->DrawBitmap(scale2.GetSubBitmap(subSizeOfBitmap),
                           0, 0, wPanel, hPanel);

        }
        gc->StrokeLine(wPanel/2, 0, wPanel/2,hPanel);
        delete gc;
    }
}
