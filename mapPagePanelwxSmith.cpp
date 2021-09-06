#include "wx_pch.h"
#include "mapPagePanelwxSmith.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(mapPagePanelwxSmith)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(mapPagePanelwxSmith)
//*)

//(*IdInit(mapPagePanelwxSmith)
//*)

BEGIN_EVENT_TABLE(mapPagePanelwxSmith,wxPanel)
	//(*EventTable(mapPagePanelwxSmith)
	//*)
END_EVENT_TABLE()

mapPagePanelwxSmith::mapPagePanelwxSmith(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(mapPagePanelwxSmith)
	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));

	Connect(wxEVT_PAINT,(wxObjectEventFunction)&mapPagePanelwxSmith::OnPaint);
	//*)
}

mapPagePanelwxSmith::~mapPagePanelwxSmith()
{
	//(*Destroy(mapPagePanelwxSmith)
	//*)
}


void mapPagePanelwxSmith::OnPaint(wxPaintEvent& event)
{/*
    jarus *myClass = new jarus();
    wxPaintDC dc(this);
    double width, height;
    double x1 ,y1;
    double x2 ,y2;
    double lati, longi;
    lati = 21.149;
    longi = 40.821;

    wxString show = "";
    double difference;
double dLati[6], dLong[6];
    dLati[0] = 21.14915;
	dLati[1] = 21.14957;
	dLati[2] = 21.14910;
	dLati[3] = 21.15077;
	dLati[4] = 21.14817;

	dLong[0] = 72.82442;
	dLong[1] = 72.82571;
	dLong[2] = 72.82190;
	dLong[3] = 72.82470;
	dLong[4] = 72.82396;

    wxGraphicsContext *gc = wxGraphicsContext::Create( dc );
    if (gc)
    {
        // make a path that contains a circle and some lines
        gc->SetPen( *wxRED_PEN );
        gc->GetSize(&width, &height);
        wxFont warningNameFont(15, wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
        gc->SetFont(warningNameFont, wxColor(*wxBLUE));
        wxGraphicsPath path = gc->CreatePath();



        float slopeYbyX = tan(azimuthArray[myLoop] * (M_PI/180));
        double xCor = sqrt( pow(circleRadius *   ((float)elevationArray[myLoop]/90), 2)/(1+pow(slopeYbyX, 2)) );
        double yCor = xCor * slopeYbyX;



        myClass->getCordinateFromLatiLongi(&x1,&y1, dLati[0], dLong[0]);

        for(int myLoop = 0; myLoop < 5; myLoop++)
        {
            myClass->getCordinateFromLatiLongi(&x2,&y2, dLati[myLoop], dLong[myLoop]);
            difference = sqrt(pow((y2-y1), 2) + pow ((x2-x1), 2));
            show = wxString::Format("%f", difference);
            gc->DrawText(show, 10,myLoop*20);

            show = wxString::Format("%f",myClass->distanceEarth(dLati[0], dLong[0], dLati[myLoop], dLong[myLoop]));
            gc->DrawText(show, 130,myLoop*20);

        }





        path.AddCircle( width/2, height/2, 5);

        path.AddCircle( 50.0, 50.0, 50.0 );
        path.MoveToPoint(0.0, 50.0);
        path.AddLineToPoint(100.0, 50.0);
        path.MoveToPoint(50.0, 0.0);
        path.AddLineToPoint(50.0, 100.0 );
        path.CloseSubpath();
        //path.AddRectangle(25.0, 25.0, 50.0, 50.0);
        gc->StrokePath(path);
        delete gc;
    }

    */
}
