#include "capacitor.hpp"

Capacitor::Capacitor(int ID, int AMOUNT, float FARAD) : Component(ID, AMOUNT)
{
    this->farad = FARAD;
}

Capacitor::Capacitor()
{
    this->farad = .0;
}

float Capacitor::get_farad() { return this->farad; }

void Capacitor::set_farad(float FARAD) { this->farad = FARAD; }

void Capacitor::serialize(std::ostream& ostr) const
{  
    // Ég kann ekki stærðfræði og er ekki alveg að grípa þetta enn redda þessu á morgun
    std::string unit = "F";
    double num = 1;
    if (this->farad < .000000001000) { unit = "pF"; num = 1000000000000; } else
    if (this->farad < .000001000000) { unit = "nF"; num = 1000000000;  } else
    if (this->farad < .001000000000) { unit = "µF"; num = 1000000;  } else
    if (this->farad < 1.00000000000) { unit = "mF"; num = 1000;  }

    Component::serialize(ostr);
    ostr << ", Capacity: " << this->farad * num << unit;
}

Capacitor::~Capacitor()
{

}
