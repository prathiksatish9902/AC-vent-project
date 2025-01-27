#include "wire.h"
#include<iostream>
WIRE::WIRE(std::string name,std::string colour,std::string material,float size,bool coated) {
    coated=false;
    m_name=name;
    m_colour=colour;
    m_material=material;
    m_size=size;
    m_coated=coated;
}


void WIRE::wireCoated(){
    m_coated = true;
}
void WIRE::wireNotCoated(){
    m_coated = false;
}

void WIRE::wireDescription(){
    std::cout<<"name:"<<m_name<<std::endl;
    std::cout<<"colour:"<<m_colour<<std::endl;
    std::cout<<"material:"<<m_material<<std::endl;
    std::cout<<"size:"<<m_size<<std::endl;
    if(m_coated==true){
        std::cout<<"wire is coated"<<std::endl;

    }
    if(m_coated==false){
        std::cout<<"wire is not coated"<<std::endl;

    }
}
