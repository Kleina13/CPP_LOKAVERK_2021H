#pragma once

#include <iostream>

class Component
{
    protected:
        int id;
        int amount;
        
    public:
        Component(int ID, int AMOUNT);
        Component();

        int get_id();
        int get_amount();
        
        void set_id(int ID);
        void set_amount(int AMOUNT);

        virtual void serialize(std::ostream& os) const;

        ~Component();
};

std::ostream& operator<<(std::ostream& ostr, Component& c);
