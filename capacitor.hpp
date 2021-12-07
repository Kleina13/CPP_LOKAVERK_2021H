#pragma once

#include <string>

#include "component.hpp"

class Capacitor : public Component
{
    protected:
        float farad;
        
    public:
        Capacitor(int ID, int AMOUNT, float FARAD);
        Capacitor();

        float get_farad();
        
        void set_farad(float FARAD);

        void serialize(std::ostream& ostr) const;

        ~Capacitor();
};