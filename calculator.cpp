#include <iostream>
#include "calculator.hpp"

using namespace std;

Calculator::Calculator() : result(0.0), mem(0.0) {} // Initilize data members to 0 doubles

void Calculator::add()
{
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) + parseInput(b);
    cout << "The result is " << result;
}
void Calculator::subtract()
{
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) - parseInput(b);
    cout << "The result is " << result;
}
void Calculator::multiply()
{
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) * parseInput(b);
    cout << "The result is " << result;
}
void Calculator::divide()
{
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) / parseInput(b);
    cout << "The result is " << result;
}
void Calculator::square()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    double parsedA = parseInput(a);
    result = parsedA * parsedA;
    cout << "The result is " << result;
}
void Calculator::sqrt()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::sqrt(parseInput(a)); // Error without explicit definition std
    cout << "The result is " << result;
}
void Calculator::setMem()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    mem = parseInput(a);
    cout << "The mem is " << mem;
}
void Calculator::printMem() const
{
    cout << "The mem is " << mem;
}
// subs in number value when strings result or mem are entered
double Calculator::parseInput(const string &input) const
{
    if (input == "result")
    {
        return result;
    }
    else if (input == "mem")
    {
        return mem;
    }
    else
    {
        return stod(input);
    }
}
void Calculator::welcome() const
{
    cout << "\n\nEnter an operation (+, -, /, *, sqrt, square, change, setmem, printmem) or exit\n";
}

void Calculator::parseOperation(const string &input)
{
    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        add();
    }
    else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        subtract();
    }
    else if (input == "/" || input == "divide" || input == "div")
    {
        divide();
    }
    else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        multiply();
    }
    else if (input == "sqrt")
    {
        sqrt();
    }
    else if (input == "square")
    {
        square();
    }
    else if (input == "setmem")
    {
        setMem();
    }
    else if (input == "printmem")
    {
        printMem();
    }
}