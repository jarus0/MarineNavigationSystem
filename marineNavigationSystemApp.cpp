/***************************************************************
 * Name:      marineNavigationSystemApp.cpp
 * Purpose:   Code for Application Class
 * Author:    jarus (techinnovation4u@gmail.com)
 * Created:   2019-06-07
 * Copyright: jarus (jarus.com)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "marineNavigationSystemApp.h"
#include "marineNavigationSystemMain.h"

IMPLEMENT_APP(marineNavigationSystemApp);

bool marineNavigationSystemApp::OnInit()
{
    marineNavigationSystemFrame* frame = new marineNavigationSystemFrame(0L, _("wxWidgets Application Template"));
    frame->Show();

    return true;
}
