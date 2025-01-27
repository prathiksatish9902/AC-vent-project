#ifndef ACSYSTEM_H
#define ACSYSTEM_H
#include<iostream>
class ACSYSTEM
{
public:
    std::string m_brand;
    int m_capacity;
    std::string m_colour;
    ACSYSTEM(std::string brand1,int capacity1,std::string colour1);
    void m_acDetails();
    };

#endif // ACSYSTEM_H
