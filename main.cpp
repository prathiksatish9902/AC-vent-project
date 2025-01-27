#include <iostream>
#include "acsystem.h"
#include "switches.h".h"
#include "wire.h"
using namespace std;

int main()
{
    std::cout<<"-----------AC Vents-----------"<<std::endl;
    std::cout<<"----------------"<<std::endl;

    ACSYSTEM ac1("voltas",1500,"white");
    ac1.m_acDetails();
    std::cout<<"----------------"<<std::endl;
    ACSYSTEM ac2("voltas",1500,"white");
    ac2.m_acDetails();
    std::cout<<"----------------"<<std::endl;

    ACSYSTEM ac3("voltas",1500,"white");
    ac3.m_acDetails();
    std::cout<<"----------------"<<std::endl;

    ACSYSTEM ac4("voltas",1500,"white");
    ac4.m_acDetails();
    std::cout<<"----------------"<<std::endl;

    ACSYSTEM ac5("voltas",1500,"white");
    ac5.m_acDetails();
    std::cout<<"----------------"<<std::endl;

    ACSYSTEM ac6("voltas",1500,"white");
    ac6.m_acDetails();
    std::cout<<"----------------"<<std::endl;

    ACSYSTEM ac7("voltas",1500,"white");
    ac7.m_acDetails();

    std::cout<<"----------------"<<std::endl;
    std::cout<<"----------SWITCH----------"<<std::endl;
    std::cout<<"----------------"<<std::endl;

    SWITCH switchName1("light",true);
    switchName1.m_on();
    switchName1.m_switchState();
    std::cout<<"----------------"<<std::endl;

    SWITCH switchName2("fan",false);
    switchName2.m_off();
    switchName2.m_switchState();
    std::cout<<"----------------"<<std::endl;

    SWITCH switchName3("TV",true);
    switchName3.m_on();
    switchName3.m_switchState();
    std::cout<<"----------------"<<std::endl;

    SWITCH switchName4("socket",false);
    switchName4.m_off();
    switchName4.m_switchState();
    std::cout<<"----------------"<<std::endl;

    SWITCH switchName5("light2",true);
    switchName5.m_on();
    switchName5.m_switchState();
    std::cout<<"----------------"<<std::endl;

    SWITCH switchName6("light3",false);
    switchName6.m_off();
    switchName6.m_switchState();
    std::cout<<"----------------"<<std::endl;

    SWITCH switchName7("AC",true);
    switchName7.m_on();
    switchName7.m_switchState();
    std::cout<<"----------------"<<std::endl;

    std::cout<<"-----------wires-----------"<<std::endl;
    std::cout<<"----------------"<<std::endl;

    WIRE wire1("polycab","red","copper",2.5f,true);
    wire1.wireCoated();
    wire1.wireDescription();
    std::cout<<"----------------"<<std::endl;

    WIRE wire2("havells","blue","iron",7.5f,false);
    wire2.wireNotCoated();
    wire2.wireDescription();
    std::cout<<"----------------"<<std::endl;

    WIRE wire3("polycab","black","copper",2.5f,false);
    wire3.wireNotCoated();
    wire3.wireDescription();
    std::cout<<"----------------"<<std::endl;

    WIRE wire4("havells","red","copper",15.5f,true);
    wire4.wireCoated();
    wire4.wireDescription();
    std::cout<<"----------------"<<std::endl;

    WIRE wire5("polycab","blue","iron",2.5f,true);
    wire5.wireCoated();
    wire5.wireDescription();
    std::cout<<"----------------"<<std::endl;

    WIRE wire6("havells","red","iron",25.5f,false);
    wire6.wireNotCoated();
    wire6.wireDescription();
    std::cout<<"----------------"<<std::endl;

    WIRE wire7("polycab","black","copper",9.5f,true);
    wire7.wireCoated();
    wire7.wireDescription();
    std::cout<<"----------------"<<std::endl;

    return 0;
}
