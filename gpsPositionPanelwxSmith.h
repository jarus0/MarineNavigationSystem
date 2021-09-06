#ifndef GPSPOSITIONPANELWXSMITH_H
#define GPSPOSITIONPANELWXSMITH_H

#ifndef WX_PRECOMP
//(*HeadersPCH(gpsPositionPanelwxSmith)
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)
#endif
//(*Headers(gpsPositionPanelwxSmith)
#include <wx/statline.h>
//*)
#include "jarus.h"
#include "../EnterStringDataDialog.h"
#include "../EnterSymbolDialog.h"

#include "gpsThread.h"

class gpsPositionPanelwxSmith: public wxPanel
{
public:

    gpsPositionPanelwxSmith(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~gpsPositionPanelwxSmith();

    EnterStringDataDialog *myDialog;
    EnterSymbolDialog *symbolDialog;
    wxString temporaryString;


    int sizeofArray;
    wxStaticText* currentStatixText;
    int cursorSelected = 0;
    int currentRouteNumber=0;
    int wpCountNum = 0;

    buttonThread    *buttonThreadPointer;
    void buttonEventHappend(int buttonEnum);
    void setButtonThreadPointer(buttonThread * thread);
    void saveWptoFile();
    long currentNum, maxNum;
int symbol = 0;
bool doRouteAlsoSave = false;
    void getNewWpName();
    void addNewWptoRoute(int lineNumberToRead, int wpNum);

    jarus::fileRelatedOperationAvariable file;

    //(*Declarations(gpsPositionPanelwxSmith)
    wxPanel* Panel1;
    wxStaticBitmap* StaticBitmap1;
    wxStaticLine* StaticLine1;
    wxStaticLine* StaticLine2;
    wxStaticLine* StaticLine3;
    wxStaticText* addToRouteName;
    wxStaticText* avarageName;
    wxStaticText* fomName;
    wxStaticText* fomValue;
    wxStaticText* gpsPositiontitleName;
    wxStaticText* latitudeValue;
    wxStaticText* longitudeValue;
    wxStaticText* numberName;
    wxStaticText* routeNumValue;
    wxStaticText* saveName;
    wxStaticText* waypointName;
    wxStaticText* wpComment;
    wxStaticText* wpValue;
    //*)



    //(*Identifiers(gpsPositionPanelwxSmith)
    static const long ID_STATICTEXT1;
    static const long ID_STATICLINE1;
    static const long ID_STATICTEXT2;
    static const long ID_wpValue;
    static const long ID_STATICBITMAP1;
    static const long ID_symbol;
    static const long ID_latitudeValue;
    static const long ID_longitudeValue;
    static const long ID_wpComment;
    static const long ID_STATICLINE2;
    static const long ID_STATICTEXT6;
    static const long ID_STATICTEXT7;
    static const long ID_routeNumValue;
    static const long ID_STATICLINE3;
    static const long ID_avarageName;
    static const long ID_saveName;
    static const long ID_STATICTEXT8;
    static const long ID_STATICTEXT13;
    //*)
protected:
private:

    //(*Handlers(gpsPositionPanelwxSmith)
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
