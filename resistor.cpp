#include "resistor.hpp"

Resistor::Resistor(int ID, int AMOUNT, int OHMS) : Component(ID, AMOUNT)
{
    this->ohms = OHMS;
}
 
Resistor::Resistor()
{
    this->ohms = 0;
}

int Resistor::get_ohms() { return this->ohms; }

void Resistor::set_ohms(int OHMS) { this->ohms = OHMS; }

void Resistor::serialize(std::ostream& ostr) const
{
    Component::serialize(ostr);
    ostr << ", Ohms: " << this->ohms << "Ω";
}

Resistor::~Resistor()
{

}
