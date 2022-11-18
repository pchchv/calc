#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <array>
#include <cmath>

class Calculator
{
public:
    Calculator();                    // Constructor
    virtual ~Calculator() = default; // Virtual destructor to prevent delete errors

    // User input and operation
    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();

    void setMem();
    void printMem() const;

    // Parse input subs in number value when strings result or mem are entered
    double parseInput(const std::string &) const;

    // Providing data on user options, will be overloaded
    virtual void welcome() const;

    // Parse input and decide which member func to call
    virtual void parseOperation(const std::string &);

protected:         // Providing access to a derived class
    double result; // Data member to store result
    double mem;    // Data member to store mem
};

#endif