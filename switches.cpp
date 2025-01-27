#include "switches.h"
#include<iostream>
SWITCH::SWITCH(std::string name,bool state) {
    state = false;
    m_name = name;
    m_state = state;
}


void SWITCH:: m_on(){
    m_state = true;

}

void SWITCH:: m_off(){
    m_state = false;

}


void SWITCH::m_switchState(){
    std::cout<<"name:"<<m_name<<std::endl;
    if(m_state==true){
    std::cout<<"state:on"<<std::endl;
    }
    if(m_state==false){
    //else{
        std::cout<<"state:off"<<std::endl;
    }
}
