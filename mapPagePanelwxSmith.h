#ifndef MAPPAGEPANELWXSMITH_H
#define MAPPAGEPANELWXSMITH_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(mapPagePanelwxSmith)
	#include <wx/panel.h>
	//*)
#endif
//(*Headers(mapPagePanelwxSmith)
//*)
#include <wx/graphics.h>
#include "cmath"
#include "jarus.h"
//#include "math.h"
class mapPagePanelwxSmith: public wxPanel
{
	public:

		mapPagePanelwxSmith(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~mapPagePanelwxSmith();

		//(*Declarations(mapPagePanelwxSmith)
		//*)

	protected:

		//(*Identifiers(mapPagePanelwxSmith)
		//*)

	private:

		//(*Handlers(mapPagePanelwxSmith)
		void OnPaint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
