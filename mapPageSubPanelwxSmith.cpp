#include "wx_pch.h"
#include "mapPageSubPanelwxSmith.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(mapPageSubPanelwxSmith)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(mapPageSubPanelwxSmith)
//*)

//(*IdInit(mapPageSubPanelwxSmith)
//*)

BEGIN_EVENT_TABLE(mapPageSubPanelwxSmith,wxPanel)
	//(*EventTable(mapPageSubPanelwxSmith)
	//*)
END_EVENT_TABLE()

mapPageSubPanelwxSmith::mapPageSubPanelwxSmith(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(mapPageSubPanelwxSmith)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(wxEVT_PAINT,(wxObjectEventFunction)&mapPageSubPanelwxSmith::OnPaint);
	//*)

}

mapPageSubPanelwxSmith::~mapPageSubPanelwxSmith()
{
	//(*Destroy(mapPageSubPanelwxSmith)
	//*)
}
const int loopingLimit = 4;
double widthEqualkm[5] = {0.5, 1, 10, 100, 500};   //in km
gpsCalculation::cordinates myCurrentPostion;
gpsCalculation::cordinates finalCordinates;
gpsCalculation::cordinates cor[loopingLimit];
gpsCalculation::DisABearStruct disBearCor[loopingLimit];

void mapPageSubPanelwxSmith::OnPaint(wxPaintEvent& event)
{
/*
21.14915,72.82442,mamiShop
21.14920,72.82499 laft
21.14918,72.82372 right
21.14956,72.82440 top
21.14876,72.82444 below
21.14975,72.82459 suraj elctronis
*/
    double panelWidth, panelHeight;
    double xCor[loopingLimit], yCor[loopingLimit];

    wxFont myFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    wxPaintDC dc(this);
    wxGraphicsContext *gc = wxGraphicsContext::Create( dc );
    if (gc)
    {
        gc->GetSize(&panelWidth, &panelHeight);
        gc->SetPen( *wxRED_PEN );
        gc->SetFont(myFont, wxColor(*wxRED));

        gpsClass.setLocation(&myCurrentPostion, 21.14915,72.82442);
        gpsClass.setLocation(&cor[0], 21.14920,72.82499);
        gpsClass.setLocation(&cor[1], 21.14918,72.82372);
        gpsClass.setLocation(&cor[2], 21.14956,72.82440);
        gpsClass.setLocation(&cor[3], 21.14876,72.82444);

/*
        for(int myLoop = 0; myLoop< loopingLimit; myLoop++)
        {
            disBearCor[myLoop].distance = myLoop*9;
            disBearCor[myLoop].bearing = 10;
            disBearCor[myLoop].bearing = fmod(disBearCor[myLoop].bearing, 360);

        }
*/
        // only distance & bearing require for displaying cordinates
        double xx, yy, Xpanning, Ypanning;
        Xpanning = 100;
        Ypanning = 0;
        for(int myLoop = 0; myLoop< loopingLimit; myLoop++)
        {
            gpsClass.getBearinAdistance(myCurrentPostion, cor[myLoop], &disBearCor[myLoop]);

            wxString myS = wxString::Format("%f,%f", disBearCor[myLoop].bearing, disBearCor[myLoop].distance);
            gc->DrawText(myS, 10,myLoop*30 );
            gpsClass.getXYcordinate(disBearCor[myLoop], &xCor[myLoop], &yCor[myLoop]);

            //zoom in/Out
            xx = (xCor[myLoop] * panelWidth) / widthEqualkm[0];
            yy = (yCor[myLoop] * panelWidth) / widthEqualkm[0];

            //panning
            xx += Xpanning + panelWidth/2;
            yy += Ypanning + panelHeight/2;
            gc->DrawText(wxString::Format("%i",myLoop), xx, yy);

        }
        wxGraphicsPath path = gc->CreatePath();
        path.AddCircle(panelWidth/2, panelHeight/2, 10);
        path.CloseSubpath();
        gc->StrokePath(path);
        delete gc;
    }
}
