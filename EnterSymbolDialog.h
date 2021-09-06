#ifndef ENTERSYMBOLDIALOG_H
#define ENTERSYMBOLDIALOG_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(EnterSymbolDialog)
	#include <wx/dialog.h>
	#include <wx/panel.h>
	#include <wx/sizer.h>
	#include <wx/statbmp.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(EnterSymbolDialog)
//*)
#include <wx/graphics.h>
#include "jarus.h"
#include "../myFiles/include/buttonThread.h"
class EnterSymbolDialog: public wxDialog
{
	public:

		EnterSymbolDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~EnterSymbolDialog();

        wxPanel *myPanel;
        wxBitmap myImage;
        wxGraphicsContext *gc;
        wxString imageFileName;
        int imageNum=-1;
        int cursorSelected = 0;
        buttonThread    *buttonThreadPointer1;
        void buttonThreadEventFun   (wxCommandEvent& event);
        wxStaticText *currentSelectedText;
        int sizeofArray123;
        int sizeofArray;
        int returnValue = 0;
        int selectionX, selectionY;

        bool enterPressed;


		//(*Declarations(EnterSymbolDialog)
		wxPanel* Panel1;
		wxPanel* symbolPanel10;
		wxPanel* symbolPanel11;
		wxPanel* symbolPanel12;
		wxPanel* symbolPanel13;
		wxPanel* symbolPanel14;
		wxPanel* symbolPanel15;
		wxPanel* symbolPanel16;
		wxPanel* symbolPanel17;
		wxPanel* symbolPanel2;
		wxPanel* symbolPanel3;
		wxPanel* symbolPanel4;
		wxPanel* symbolPanel5;
		wxPanel* symbolPanel6;
		wxPanel* symbolPanel7;
		wxPanel* symbolPanel8;
		wxPanel* symbolPanel9;
		wxStaticBitmap* StaticBitmap10;
		wxStaticBitmap* StaticBitmap11;
		wxStaticBitmap* StaticBitmap12;
		wxStaticBitmap* StaticBitmap13;
		wxStaticBitmap* StaticBitmap14;
		wxStaticBitmap* StaticBitmap15;
		wxStaticBitmap* StaticBitmap16;
		wxStaticBitmap* StaticBitmap1;
		wxStaticBitmap* StaticBitmap2;
		wxStaticBitmap* StaticBitmap3;
		wxStaticBitmap* StaticBitmap4;
		wxStaticBitmap* StaticBitmap5;
		wxStaticBitmap* StaticBitmap6;
		wxStaticBitmap* StaticBitmap7;
		wxStaticBitmap* StaticBitmap8;
		wxStaticBitmap* StaticBitmap9;
		wxStaticText* displayName;
		wxStaticText* nameWithSymbolName;
		wxStaticText* variCommentWithSymbol;
		wxStaticText* variSymbolOnly;
		//*)



		//(*Identifiers(EnterSymbolDialog)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT5;
		static const long ID_STATICBITMAP1;
		static const long ID_PANEL2;
		static const long ID_STATICBITMAP2;
		static const long ID_PANEL3;
		static const long ID_STATICBITMAP3;
		static const long ID_PANEL4;
		static const long ID_STATICBITMAP4;
		static const long ID_PANEL5;
		static const long ID_STATICBITMAP5;
		static const long ID_PANEL6;
		static const long ID_STATICBITMAP6;
		static const long ID_PANEL7;
		static const long ID_STATICBITMAP7;
		static const long ID_PANEL8;
		static const long ID_STATICBITMAP8;
		static const long ID_PANEL9;
		static const long ID_STATICBITMAP9;
		static const long ID_PANEL10;
		static const long ID_STATICBITMAP10;
		static const long ID_PANEL11;
		static const long ID_STATICBITMAP11;
		static const long ID_PANEL12;
		static const long ID_STATICBITMAP12;
		static const long ID_PANEL13;
		static const long ID_STATICBITMAP13;
		static const long ID_PANEL14;
		static const long ID_STATICBITMAP14;
		static const long ID_PANEL15;
		static const long ID_STATICBITMAP15;
		static const long ID_PANEL16;
		static const long ID_STATICBITMAP17;
		static const long ID_PANEL17;
		static const long ID_PANEL1;
		//*)
protected:
	private:

		//(*Handlers(EnterSymbolDialog)
		void OnPanel1Paint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
