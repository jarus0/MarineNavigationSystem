#ifndef MAPPAGESUBPANELWXSMITH_H
#define MAPPAGESUBPANELWXSMITH_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(mapPageSubPanelwxSmith)
	#include <wx/panel.h>
	#include <wx/sizer.h>
	//*)
#endif
//(*Headers(mapPageSubPanelwxSmith)
//*)
#include <wx/graphics.h>
#include "gpsCalculation.h"
#include <cmath>

class mapPageSubPanelwxSmith: public wxPanel
{
	public:

		mapPageSubPanelwxSmith(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~mapPageSubPanelwxSmith();

		//(*Declarations(mapPageSubPanelwxSmith)
		//*)
gpsCalculation gpsClass;
	protected:

		//(*Identifiers(mapPageSubPanelwxSmith)
		//*)

	private:

		//(*Handlers(mapPageSubPanelwxSmith)
		void OnPaint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
