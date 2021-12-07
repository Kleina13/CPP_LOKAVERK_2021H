#include <iostream>

#include "LED.hpp"
#include "resistor.hpp"
#include "capacitor.hpp"

using namespace std;

int main()
{
    LED led1(1, 5, "Green");
    LED led2(2, 3, "Red");
    LED led3(3, 2, "Cyan");
    LED led4(4, 6, "Yellow");

    cout << led1 << endl 
         << led2 << endl
         << led3 << endl
         << led4 << endl;

    Resistor res1(5, 4, 220);
    Resistor res2(6, 8, 1000);
    Resistor res3(7, 1, 5000);
    Resistor res4(8, 6, 850);

    cout << res1 << endl 
         << res2 << endl
         << res3 << endl
         << res4 << endl;
    
    Capacitor cap1(9, 4, .000000000100);
    Capacitor cap2(10, 8, .000000100000);
    Capacitor cap3(11, 1, .000100000000);
    Capacitor cap4(12, 6, .100000000000);

    cout << cap1 << endl 
         << cap2 << endl
         << cap3 << endl
         << cap4 << endl;

    return 0;
}