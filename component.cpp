#include "component.hpp"

Component::Component(int ID, int AMOUNT)
{
    this->id = ID;
    this->amount = AMOUNT;
}

Component::Component()
{
    this->id = 0;
    this->amount = 0;
}

int Component::get_id() { return this->id; }
int Component::get_amount() { return this->amount; }

void Component::set_id(int ID) { this->id = ID; }
void Component::set_amount(int AMOUNT) { this->amount = AMOUNT; }

void Component::serialize(std::ostream& ostr) const
{
    ostr << "ID: " << this->id << ", Amount: " << this->amount;
}

Component::~Component()
{

}

std::ostream& operator<<(std::ostream& ostr, Component& c)
{
    c.serialize(ostr);
    return ostr;
}