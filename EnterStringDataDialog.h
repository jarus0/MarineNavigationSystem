#ifndef ENTERSTRINGDATADIALOG_H
#define ENTERSTRINGDATADIALOG_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(EnterStringDataDialog)
	#include <wx/button.h>
	#include <wx/dialog.h>
	#include <wx/panel.h>
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(EnterStringDataDialog)
//*)

#include "jarus.h"
#include "../myFiles/include/buttonThread.h"
class EnterStringDataDialog: public wxDialog
{
	public:

		EnterStringDataDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize, wxString name = "noName");
		virtual ~EnterStringDataDialog();


        buttonThread    *buttonThreadPointer;
        void buttonThreadEventFun   (wxCommandEvent& event);
        wxString myStringInput;
        wxString defaultName;
        wxButton *currentButton;
		//(*Declarations(EnterStringDataDialog)
		wxButton* Button10;
		wxButton* Button11;
		wxButton* Button12;
		wxButton* Button13;
		wxButton* Button14;
		wxButton* Button15;
		wxButton* Button16;
		wxButton* Button17;
		wxButton* Button18;
		wxButton* Button19;
		wxButton* Button1;
		wxButton* Button20;
		wxButton* Button21;
		wxButton* Button22;
		wxButton* Button23;
		wxButton* Button24;
		wxButton* Button25;
		wxButton* Button26;
		wxButton* Button27;
		wxButton* Button28;
		wxButton* Button29;
		wxButton* Button2;
		wxButton* Button30;
		wxButton* Button31;
		wxButton* Button32;
		wxButton* Button33;
		wxButton* Button34;
		wxButton* Button35;
		wxButton* Button36;
		wxButton* Button37;
		wxButton* Button38;
		wxButton* Button39;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* Button6;
		wxButton* Button7;
		wxButton* Button8;
		wxButton* Button9;
		wxPanel* Panel1;
		wxStaticText* dataValue;
		wxStaticText* requireFieldValue;
		//*)



		//(*Identifiers(EnterStringDataDialog)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON8;
		static const long ID_BUTTON9;
		static const long ID_BUTTON10;
		static const long ID_BUTTON11;
		static const long ID_BUTTON12;
		static const long ID_BUTTON13;
		static const long ID_BUTTON14;
		static const long ID_BUTTON15;
		static const long ID_BUTTON16;
		static const long ID_BUTTON17;
		static const long ID_BUTTON18;
		static const long ID_BUTTON19;
		static const long ID_BUTTON20;
		static const long ID_BUTTON21;
		static const long ID_BUTTON22;
		static const long ID_BUTTON23;
		static const long ID_BUTTON24;
		static const long ID_BUTTON25;
		static const long ID_BUTTON26;
		static const long ID_BUTTON27;
		static const long ID_BUTTON28;
		static const long ID_BUTTON29;
		static const long ID_BUTTON39;
		static const long ID_BUTTON30;
		static const long ID_BUTTON31;
		static const long ID_BUTTON32;
		static const long ID_BUTTON33;
		static const long ID_BUTTON34;
		static const long ID_BUTTON35;
		static const long ID_BUTTON36;
		static const long ID_BUTTON37;
		static const long ID_BUTTON38;
		static const long ID_PANEL1;
		//*)

	protected:
	private:

		//(*Handlers(EnterStringDataDialog)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
