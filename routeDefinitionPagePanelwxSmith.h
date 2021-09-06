#ifndef ROUTEDEFINITIONPAGEPANELWXSMITH_H
#define ROUTEDEFINITIONPAGEPANELWXSMITH_H

#ifndef WX_PRECOMP
//(*HeadersPCH(routeDefinitionPagePanelwxSmith)
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)
#endif
//(*Headers(routeDefinitionPagePanelwxSmith)
#include <wx/statline.h>
//*)


#include "jarus.h"
#include "../EnterStringDataDialog.h"
#include "gpsThread.h"

class routeDefinitionPagePanelwxSmith: public wxPanel
{
public:

    routeDefinitionPagePanelwxSmith(wxWindow* parent);
    virtual ~routeDefinitionPagePanelwxSmith();
    //(*Declarations(routeDefinitionPagePanelwxSmith)
    wxPanel* Panel1;
    wxPanel* Panel2;
    wxStaticLine* StaticLine1;
    wxStaticLine* StaticLine2;
    wxStaticLine* StaticLine3;
    wxStaticLine* StaticLine4;
    wxStaticText* CopyToValue;
    wxStaticText* actName;
    wxStaticText* clrName;
    wxStaticText* commentValue;
    wxStaticText* copyToName;
    wxStaticText* dstValue1;
    wxStaticText* dstValue2;
    wxStaticText* dstValue3;
    wxStaticText* dstValue4;
    wxStaticText* dstValue5;
    wxStaticText* dstValue6;
    wxStaticText* dstValue7;
    wxStaticText* dtkName;
    wxStaticText* dtkValue1;
    wxStaticText* dtkValue2;
    wxStaticText* dtkValue3;
    wxStaticText* dtkValue4;
    wxStaticText* dtkValue5;
    wxStaticText* dtkValue6;
    wxStaticText* invName;
    wxStaticText* num1;
    wxStaticText* num2;
    wxStaticText* num3;
    wxStaticText* num4;
    wxStaticText* num5;
    wxStaticText* num6;
    wxStaticText* routeName;
    wxStaticText* routeValue;
    wxStaticText* totalDSTName;
    wxStaticText* totalDstValue;
    wxStaticText* wpNumberName;
    wxStaticText* wpValue1;
    wxStaticText* wpValue2;
    wxStaticText* wpValue3;
    wxStaticText* wpValue4;
    wxStaticText* wpValue5;
    wxStaticText* wpValue6;
    wxStaticText* wpnmHeading;
    //*)



    //(*Identifiers(routeDefinitionPagePanelwxSmith)
    static const long ID_STATICTEXT1;
    static const long ID_RouteValue;
    static const long ID_STATICLINE1;
    static const long ID_commentValue;
    static const long ID_STATICLINE2;
    static const long ID_STATICTEXT4;
    static const long ID_STATICTEXT3;
    static const long ID_dst1;
    static const long ID_STATICTEXT14;
    static const long ID_up;
    static const long ID_STATICTEXT11;
    static const long ID_STATICTEXT10;
    static const long ID_STATICTEXT19;
    static const long ID_STATICTEXT20;
    static const long ID_STATICTEXT21;
    static const long ID_STATICTEXT22;
    static const long ID_wpValue1;
    static const long ID_wpValue2;
    static const long ID_wpValue3;
    static const long ID_wpValue4;
    static const long ID_wpValue5;
    static const long ID_wpValue6;
    static const long ID_dst2;
    static const long ID_dst3;
    static const long ID_dst4;
    static const long ID_dst5;
    static const long ID_dst6;
    static const long ID_dst7;
    static const long ID_dtk1;
    static const long ID_dtk2;
    static const long ID_dtk3;
    static const long ID_dtk4;
    static const long ID_dtk5;
    static const long ID_dtk6;
    static const long ID_down;
    static const long ID_STATICLINE3;
    static const long ID_STATICTEXT8;
    static const long ID_STATICTEXT9;
    static const long ID_STATICLINE4;
    static const long ID_copyToName;
    static const long ID_copyToValue;
    static const long ID_clr;
    static const long ID_inv;
    static const long ID_act;
    //*)


        int selectedOption = 0;

    EnterStringDataDialog *myDialog;
    wxString temporaryString;

    buttonThread    *buttonThreadPointer;
    void buttonEventHappend(int buttonEnum);
    void setButtonThreadPointer(buttonThread * thread);
    int sizeofArray;

    wxPanel *currentPanel;
    wxStaticText *currentText;
    int currentRouteNumber=1;
    wxColor thisPanelColor;
    jarus::fileRelatedVariables fileRelatedVariablesInstance;

    wxString routeComment;
    wxString routeWpNum;
    int nextPrint,
        wpNum[30],
        myLoop;
wxStaticText *listNum[6];
void ReadLineAstore(int lineNum);
void calculateAADisplay(int lineDisplay);
protected:
private:

    //(*Handlers(routeDefinitionPagePanelwxSmith)
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
