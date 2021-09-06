#ifndef MPU9250THREAD_H
#define MPU9250THREAD_H

#include "jarus.h"

#include "../mpuFiles/MPU9250.h"
#include "../mpuFiles/Util.h"
#include "../mpuFiles/AHRS.hpp"
#include <sys/time.h>

BEGIN_DECLARE_EVENT_TYPES()
DECLARE_EVENT_TYPE(wxEVT_MPU9250THREAD, -1)
END_DECLARE_EVENT_TYPES()


class mpu9250Thread : public wxThread
{
public:
    mpu9250Thread(wxEvtHandler* pParent1, int param1);
    wxEvtHandler* m_pParent1;

    int magneticNorth = -1;
protected:

private:
    int m_param1;
    void* Entry();

};

#endif // MPU9250THREAD_H
