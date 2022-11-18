#include <iostream>
#include "scientific.hpp"

using namespace std;

Scientific::Scientific() : Calculator() {}

// Override welcome message to show scientific options
void Scientific::welcome() const
{
    cout << endl
         << "Enter one of:"
         << "+, -, /, *, sqrt, square, change, setmem, printmem, sin, cos, log, tan, ln, abs, pow" << endl
         << "or exit" << endl;
}

// Override parse operation to call correct member function
void Scientific::parseOperation(const string &input)
{
    Calculator::parseOperation(input);

    if (input == "sin")
    {
        sin();
    }
    else if (input == "cos")
    {
        cos();
    }
    else if (input == "tan")
    {
        cos();
    }
    else if (input == "ln")
    {
        ln();
    }
    else if (input == "log")
    {
        log();
    }
    else if (input == "abs")
    {
        abs();
    }
    else if (input == "pow")
    {
        pow();
    }
}

void Scientific::sin()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::sin(parseInput(a));
    cout << "The result is " << result << endl;
}
void Scientific::cos()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::cos(parseInput(a));
    cout << "The result is " << result << endl;
}
void Scientific::tan()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::tan(parseInput(a));
    cout << "The result is " << result << endl;
}
void Scientific::ln()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::log(parseInput(a));
    cout << "The result is " << result << endl;
}
void Scientific::log()
{
    string a, b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    result = std::log(parseInput(b)) / std::log(parseInput(a));
    cout << "The result is " << result << endl;
}
void Scientific::abs()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::abs(parseInput(a));
    cout << "The result is " << result << endl;
}
void Scientific::pow()
{
    string a, b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the exponent: ";
    cin >> b;
    result = std::pow(parseInput(a), parseInput(b));
    cout << "The result is " << result << endl;
}