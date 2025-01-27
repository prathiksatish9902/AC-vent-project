#ifndef WIRE_H
#define WIRE_H
#include<iostream>
class WIRE
{
public:
    std::string m_name;
    std::string m_colour;
    std::string m_material;
    float m_size;
    bool m_coated;
    WIRE(std::string name,std::string colour,std::string material,float size,bool coated);
    void wireDescription();
    void wireCoated();
    void wireNotCoated();

};

#endif // WIRE_H
