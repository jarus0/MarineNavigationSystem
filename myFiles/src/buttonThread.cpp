#include "../include/buttonThread.h"
#include "string"

int xButtonPressed = -1;

int headButton = 26;
int pin1 = 23;
int pin2 = 24;
int pin3 = 25;
int pin4 = 22;
int pin5 = 21;
int pin6 = 27;
int pin7 = 29;
int pin8 = 28;

DEFINE_EVENT_TYPE(wxEVT_MYTHREAD)
buttonThread::buttonThread(wxEvtHandler* pParent, int param) : wxThread(wxTHREAD_JOINABLE), m_pParent(pParent)
{
    m_param = param;
}
void* buttonThread::Entry()
{
    wxCommandEvent evt(wxEVT_MYTHREAD, GetId());    //can be used to set some identifier for the dataevt.SetInt(r);
    wiringPiSetup();
    pinMode(headButton, INPUT);

    pullUpDnControl(pin1, PUD_UP);
    pullUpDnControl(pin2, PUD_UP);
    pullUpDnControl(pin3, PUD_UP);
    pullUpDnControl(pin4, PUD_UP);
    pullUpDnControl(pin5, PUD_UP);
    pullUpDnControl(pin6, PUD_UP);
    pullUpDnControl(pin7, PUD_UP);
    pullUpDnControl(pin8, PUD_UP);

    pinMode(pin1, INPUT);
    pinMode(pin2, INPUT);
    pinMode(pin3, INPUT);
    pinMode(pin4, INPUT);
    pinMode(pin5, INPUT);
    pinMode(pin6, INPUT);
    pinMode(pin7, INPUT);
    pinMode(pin8, INPUT);

    bool newKeyEvent = false;
    for (;;)
    {
        if(TestDestroy())
            this->Exit();
        if(!digitalRead(pin1))
        {
            while(!digitalRead(pin1))
                delay(20);
            xButtonPressed = jarus::PAGE;
            newKeyEvent = true;
        }
        else if(!digitalRead(pin2))
        {
            while(!digitalRead(pin2))
                delay(20);
            xButtonPressed = jarus::QUIT;
            newKeyEvent = true;
        }
        else if(!digitalRead(pin3))
        {
            while(!digitalRead(pin3))
                delay(20);
            xButtonPressed = jarus::defaultNull;
            newKeyEvent = true;
        }
        else if(!digitalRead(pin4))
        {
            while(!digitalRead(pin4))
                delay(20);
            xButtonPressed = jarus::ENTER;
            newKeyEvent = true;
        }
        else if(!digitalRead(pin5))
        {
            while(!digitalRead(pin5))
                delay(20);
            xButtonPressed = jarus::UP_ARROW;
            newKeyEvent = true;
        }
        else if(!digitalRead(pin6))
        {
            while(!digitalRead(pin6))
                delay(20);
            xButtonPressed = jarus::DOWN_ARROW;
            newKeyEvent = true;
        }
        else if(!digitalRead(pin7))
        {
            while(!digitalRead(pin7))
                delay(20);
            xButtonPressed = jarus::LEFT_ARROW;
            newKeyEvent = true;
        }
        else if(!digitalRead(pin8))
        {
            while(!digitalRead(pin8))
                delay(20);
            xButtonPressed = jarus::RIGHT_ARROW;
            newKeyEvent = true;
        }
        if(newKeyEvent)
        {
            evt.SetInt(xButtonPressed);
            wxPostEvent(m_pParent, evt);
            newKeyEvent = false;
        }
        this->Sleep(30);
    }
}
