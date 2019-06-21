/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/23/2019
** Title:       Quadratic.cpp
** Description: The Class Quadratic, given inputs for coefficients A, B, & C, 
                and a variable input for x will solve the total value of the
                quadratic (Ax^2 + Bx + C) and find the discriminant (B^2 - 4AC).
******************************************************************************/
#include <iostream>
#include "Quadratic.hpp"

// Default Constructor: Sets all data members (A = B = C = 1.0)
Quadratic::Quadratic()
{
    A = 1.0;
    B = 1.0;
    C = 1.0;
    discriminantValue = calcDiscriminant();
}      

// 3-Parameter Constructor: Sets data members A, B, & C respectively by passing arguments
Quadratic::Quadratic(double aIn, double bIn, double cIn)
{
    A = aIn;
    B = bIn;
    C = cIn;
    discriminantValue = calcDiscriminant();
}

// Set the data member A
void Quadratic::setA(double aIn)
{
    A = aIn;
}

// Set the data member B
void Quadratic::setB(double bIn)
{
    B = bIn;
}

// Set the data member C
void Quadratic::setC(double cIn)
{
    C = cIn;
}                   

// Get the data member A
double Quadratic::getA()
{
    return A;
}

// Get the data member B
double Quadratic::getB()
{
    return B;
}

// Get the data member C
double Quadratic::getC()
{
    return C;
}
// Takes in the value for x and returns the value of the quadratic (Ax^2 + Bx + C)
double Quadratic::valueFor(double xIn)
{
    xValue = xIn;
    quadraticValue = ((A * xIn * xIn) + (B * xIn) + C);
    return quadraticValue;
}

// Returns the discriminant of the quadratic discriminant (B^2 - 4AC)
double Quadratic::calcDiscriminant()
{
    discriminantValue = ((B * B) - (4 * A * C));
    return discriminantValue;
}

// printInfo(): Print values for Quadratic
void Quadratic::printInfo()
{
    std::cout << "Computed Values: " << std::endl;
    std::cout << "The value of A is: " << A << std::endl;
    std::cout << "The value of B is: " << B << std::endl;
    std::cout << "The value of C is: " << C << std::endl;
    std::cout << "The value of x is: " << xValue << std::endl;
    std::cout << "The value of the quadratic is: " << quadraticValue << std::endl;
    std::cout << "The value of the discriminant is: " << discriminantValue << std::endl;
}