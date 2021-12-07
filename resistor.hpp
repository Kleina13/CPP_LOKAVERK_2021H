#pragma once

#include "component.hpp"

class Resistor : public Component
{
    protected:
        int ohms;
        
    public:
        Resistor(int ID, int AMOUNT, int OHMS);
        Resistor();

        int get_ohms();
        
        void set_ohms(int OHMS);

        void serialize(std::ostream& ostr) const;

        ~Resistor();
};