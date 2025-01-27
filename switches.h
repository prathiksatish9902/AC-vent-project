#ifndef SWITCHES_H
#define SWITCHES_H
#include<iostream>
class SWITCH
{
public:
    std::string m_name;
    bool m_state;
    SWITCH(std::string name,bool state);
    void m_on();
    void m_off();
    void m_switchState();
};

#endif // SWITCHES_H
