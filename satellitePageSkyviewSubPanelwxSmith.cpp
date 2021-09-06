#include "wx_pch.h"
#include "satellitePageSkyviewSubPanelwxSmith.h"

#ifndef WX_PRECOMP
//(*InternalHeadersPCH(satellitePageSkyviewSubPanelwxSmith)
#include <wx/intl.h>
#include <wx/string.h>
//*)
#endif
//(*InternalHeaders(satellitePageSkyviewSubPanelwxSmith)
//*)

//(*IdInit(satellitePageSkyviewSubPanelwxSmith)
//*)

BEGIN_EVENT_TABLE(satellitePageSkyviewSubPanelwxSmith,wxPanel)
    //(*EventTable(satellitePageSkyviewSubPanelwxSmith)
    //*)
END_EVENT_TABLE()

satellitePageSkyviewSubPanelwxSmith::satellitePageSkyviewSubPanelwxSmith(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(satellitePageSkyviewSubPanelwxSmith)
    Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));

    Connect(wxEVT_PAINT,(wxObjectEventFunction)&satellitePageSkyviewSubPanelwxSmith::OnPaint);
    //*)
}

satellitePageSkyviewSubPanelwxSmith::~satellitePageSkyviewSubPanelwxSmith()
{
    //(*Destroy(satellitePageSkyviewSubPanelwxSmith)
    //*)
}


void satellitePageSkyviewSubPanelwxSmith::OnPaint(wxPaintEvent& event)
{
    wxPaintDC dc(this);

    elevationArray  = new int[12];
    azimuthArray    = new int[12];
    satlliteIDArray = new int[12];
    for (int myLoop = 0; myLoop < 12; myLoop++)
    {
        elevationArray[myLoop] = myLoop*6;
        azimuthArray[myLoop] = myLoop*30;
        satlliteIDArray[myLoop] = myLoop;
    }
    render(dc);
}


void satellitePageSkyviewSubPanelwxSmith::paintNow()
{
    wxClientDC dc(this);
    render(dc);
}


void satellitePageSkyviewSubPanelwxSmith::render(wxDC&  dc)
{
    /*important infor
        https://docs.wxwidgets.org/3.0/classwx_d_c.html
        46 74
        azimuth = (north, south, east, west)
        elevation = (inclination from horizon)
        1Rad × 180/π = 57.296Deg
    */
//    wxGraphicsContext *gc = wxGraphicsContext::Create( dc );
    dc.Clear();
    wxSize panelSize = this->GetClientSize();
    int w = panelSize.GetWidth();
    int h = panelSize.GetHeight();
    wxPoint centerPoint  = wxPoint(w/2,h/2);
    int lineOffset = (w/2)*(0.1);

    int circleRadius;
    if(centerPoint.x < centerPoint.y)
        circleRadius = (centerPoint.x)*(0.8);
    else
        circleRadius = (centerPoint.y)*(0.8);

    dc.SetBrush(*wxLIGHT_GREY);
    dc.SetPen( wxPen( wxColor(0,0,255), 1) );
    dc.DrawCircle(centerPoint, circleRadius);
    dc.DrawCircle(centerPoint, circleRadius*0.65);
    dc.DrawCircle(centerPoint, circleRadius*0.35);

    wxPoint lineXstartPoint = wxPoint(centerPoint.x - circleRadius - lineOffset, centerPoint.y);
    wxPoint lineXstopPoint = wxPoint(centerPoint.x + circleRadius + lineOffset, centerPoint.y);

    wxPoint lineYstartPoint = wxPoint(centerPoint.x, centerPoint.y - circleRadius - lineOffset);
    wxPoint lineYstopPoint = wxPoint(centerPoint.x, centerPoint.y + circleRadius + lineOffset);

    dc.SetBrush(*wxBLUE_BRUSH);
    dc.SetPen( wxPen( wxColor(*wxRED), 1) );
    dc.DrawLine(lineXstartPoint, lineXstopPoint);
    dc.DrawLine(lineYstartPoint, lineYstopPoint);

    wxFont mpNameFont2(8,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    wxFont mpNameFont1(8,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);

    for (int myLoop = 0; myLoop < 12 ; myLoop++)
    {
        if(fillUnfill[myLoop])
        {
            if(satlliteIDArray[myLoop] > -1)
            {

                azimuthArray[myLoop]  %=  360;

                float slopeYbyX = tan(azimuthArray[myLoop] * (M_PI/180));
                double xCor = sqrt( pow(circleRadius*((float)elevationArray[myLoop]/90), 2)/(1+pow(slopeYbyX, 2)) );
                double yCor = xCor * slopeYbyX;

                if(azimuthArray[myLoop] > 90 && azimuthArray[myLoop] <= 270)
                {
                    xCor *= -1;
                    yCor *= -1;
                }
                xCor += centerPoint.x;
                yCor += centerPoint.y;

                if(hilight[myLoop])
                    dc.SetFont(mpNameFont1);
                else
                    dc.SetFont(mpNameFont2);
                wxString number= wxString::Format(wxT("%i"), satlliteIDArray[myLoop]);
                dc.DrawText(number, xCor, yCor);
            }
        }
    }
}

void satellitePageSkyviewSubPanelwxSmith::setNewElevationArray(int *data1)
{
    elevationArray = data1;
}
void satellitePageSkyviewSubPanelwxSmith::setNewAzimuthArray(int *data2)
{
    azimuthArray = data2;
}

void satellitePageSkyviewSubPanelwxSmith::satelliteID(int *data3)
{
    satlliteIDArray = data3;
}
