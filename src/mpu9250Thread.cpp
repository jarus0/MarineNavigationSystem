#include "mpu9250Thread.h"

DEFINE_EVENT_TYPE(wxEVT_MPU9250THREAD)
mpu9250Thread::mpu9250Thread(wxEvtHandler* pParent1, int param1) : wxThread(wxTHREAD_JOINABLE), m_pParent1(pParent1)
{
    m_param1 = param1;
}

void* mpu9250Thread::Entry()
{

    wxCommandEvent mpuEvt(wxEVT_MPU9250THREAD, GetId());


    auto imu = std::unique_ptr <InertialSensor>{ new MPU9250() };
    if (!imu)
    {
        //printf("Wrong sensor name. Select: mpu or lsm\n"); return EXIT_FAILURE;
    }

    if (!imu->probe())
    {
        //printf("Sensor not enable\n");    return EXIT_FAILURE;
    }

    AHRS *ahrs = new AHRS(move(imu));
    ahrs->setGyroOffset();

    float roll, pitch, yaw;
    struct timeval tv;
    float dt;
    // Timing data

    static float maxdt;
    static float mindt = 0.01;
    static float dtsumm = 0;
    static int isFirst = 1;
    static unsigned long previoustime, currenttime;


    for(;;)
    {
        delay(100);
        if(TestDestroy())   this->Exit();
        gettimeofday(&tv,NULL);
        previoustime = currenttime;
        currenttime = 1000000 * tv.tv_sec + tv.tv_usec;
        dt = (currenttime - previoustime) / 1000000.0;
        if(dt < 1/1300.0) usleep((1/1300.0-dt)*1000000);
            gettimeofday(&tv,NULL);
            currenttime = 1000000 * tv.tv_sec + tv.tv_usec;
        dt = (currenttime - previoustime) / 1000000.0;

        ahrs->update(dt);
        ahrs->getEuler(&roll, &pitch, &yaw);
        if (!isFirst)
        {
            if (dt > maxdt) maxdt = dt;
            if (dt < mindt) mindt = dt;
        }
        isFirst = 0;

        dtsumm += dt;
        if(dtsumm > 1)
        {
            //printf("[ROLL, PITCH, YAW, PERIOD] [%+05.2f  %+05.2f  %+05.2f]  %.4fs\n", roll, pitch, yaw * -1, dt);

            //mpuEvt.SetClientData(&yaw);
            magneticNorth = (int) yaw + 180;
            mpuEvt.SetInt(magneticNorth);
            wxPostEvent(m_pParent1, mpuEvt);

            dtsumm = 0;
        }
    }

}
