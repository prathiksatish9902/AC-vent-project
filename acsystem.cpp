#include "acsystem.h"
#include<iostream>
ACSYSTEM::ACSYSTEM(std::string brand1,int capacity1,std::string colour1) {
    m_brand = brand1;
    m_capacity = capacity1;
    m_colour = colour1;
}


void ACSYSTEM:: m_acDetails(){
    std::cout<<"brand:"<<m_brand<<std::endl;
    std::cout<<"capacity:"<<m_capacity<<std::endl;
    std::cout<<"colour:"<<m_colour<<std::endl;


}
