#ifndef MYTHREAD_H
#define MYTHREAD_H

#include "jarus.h"

BEGIN_DECLARE_EVENT_TYPES()
DECLARE_EVENT_TYPE(wxEVT_MYTHREAD, -1)
END_DECLARE_EVENT_TYPES()

class buttonThread : public wxThread
{
public:
    buttonThread(wxEvtHandler* pParent, int param);
    wxEvtHandler* m_pParent;
    int countVar;
private:
    int m_param;
    void* Entry();
protected:

};
#endif
