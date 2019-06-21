/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/23/2019
** Title:       Quadratic.hpp
** Description: The Class Quadratic, given inputs for coefficients A, B, & C, 
                and a variable input for x will solve the total value of the
                quadratic (Ax^2 + Bx + C) and find the discriminant (B^2 - 4AC).
******************************************************************************/
#ifndef QUADRATIC_HPP
#define QUADRATIC_HPP

class Quadratic
{
/*************************** PRIVATE ATTRIBUTES ******************************/
private: 
    double A,                    // First coefficient of the quadratic function
           B,                    // Second coefficient of the quadratic function
           C,                    // Third coefficient of the quadratic function
           xValue,               // The value of x for the quadratic (variable)
           quadraticValue,       // The value of the quadratic (Ax^2 + Bx + C)
           discriminantValue;    // The value of the discriminant (B^2 - 4AC)

/*************************** PUBLIC ATTRIBUTES *******************************/
public:
// Constructors:
Quadratic();                          // Assigns A = B = C = 1.0
Quadratic(double, double, double);    // Assigns values to A, B, & C respectively

// Setters:
void setA(double);                    // Method to set the data member A
void setB(double);                    // Method to set the data member B
void setC(double);                    // Method to set the data member C

// Getters:
double getA();                        // Method to get the data member A
double getB();                        // Method to get the data member B
double getC();                        // Method to get the data member C

// Methods:
double valueFor(double);              // Takes in the value for x and returns the value of the quadratic (Ax^2 + Bx + C)
double calcDiscriminant();            // Returns the discriminant of the quadratic discriminant = (B^2 - 4AC)

// Print Values:
void printInfo();                     // A method to print the values of Quadratic
};
#endif