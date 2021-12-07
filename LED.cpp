#include "led.hpp"

LED::LED(int ID, int AMOUNT, std::string COLOR) : Component(ID, AMOUNT)
{
    this->color = COLOR;
}

LED::LED()
{
    this->color = "NONE";
}

std::string LED::get_color() { return this->color; }

void LED::set_color(int COLOR) { this->color = COLOR; }

void LED::serialize(std::ostream& ostr) const
{
    std::string os_color = "";
    std::map<std::string, std::string> color_table = {
        { "Red", "\033[0;31m" },
        { "Green", "\033[0;32m" },
        { "Yellow", "\033[0;33m" },
        { "Blue", "\033[0;34m" },
        { "Magenta", "\033[0;35m" },
        { "Cyan", "\033[0;36m" },
        { "White", "\033[0;37m" }
    };
    
    for (auto const& x : color_table)
    {
        if (x.first == this->color)
            os_color = x.second;
    }

    Component::serialize(ostr);
    ostr << ", Color: " << os_color << this->color << "\033[0m";
}

LED::~LED()
{

}
