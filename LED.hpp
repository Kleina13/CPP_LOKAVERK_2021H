#pragma once

#include <string>
#include <map>

#include "component.hpp"

class LED : public Component
{
    protected:
        std::string color;
        
    public:
        LED(int ID, int AMOUNT, std::string COLOR);
        LED();

        std::string get_color();
        
        void set_color(int COLOR);

        void serialize(std::ostream& ostr) const;

        ~LED();
};