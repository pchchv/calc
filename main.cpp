#include <iostream>
#include <iomanip>
#include "calculator.hpp"
#include "scientific.hpp"

using namespace std;

int main()
{
    Calculator calc;
    Scientific sci;

    Calculator *calcPtr = &calc; // Assigning a calculator pointer to a calculator object

    bool sciActive = false; // Switch to flip scientific calculator on and off

    cout << "The calculator has 2 modes, normal and scientific. You can switch them with the keyword <switch>." << endl
         << "The <result> keyword stores the result of the previous calculation." << endl
         << "The <mem> keyword stores and accesses a number." << endl
         << "The keywords can be used instead of numbers during calculations. They are local to the mode used." << endl;

    calcPtr->welcome(); // Welcome message for simple calc

    /// Set precision for all uses of cout
    /// Shows up to 15 places
    cout << setprecision(15);

    /// Take in input and loop
    string input;
    while (cin >> input && input != "exit")
    {
        /// Input to switch mode
        if (input == "switch")
        {
            if (sciActive)
            {
                /// Set pointer to the simple calc object
                calcPtr = &calc;
                sciActive = false;
                cout << "\nSimple Calculator Activated";
            }
            else
            {
                /// Set pointer to scientific calc object
                calcPtr = &sci;
                sciActive = true;
                cout << "\nScientific Calculator Activated";
            }
        }

        /// Call virtual functions from base class pointer to get polymorphic
        calcPtr->parseOperation(input);
        calcPtr->welcome();
    }

    return 0;
}