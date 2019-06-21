/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/06/2019
** Title:       Vase.hpp
** Description: Vase has 2 data members, HalfOpenCylinder (class) & 
                costPerSquareInch (double). The class has 2 methods, 
                totalCost(), which returns the total cost of the Vase, and 
                costMoreThan(vase), which passes a vase object as a parameter 
                and returns false if it cost more than the vase object it is 
                called upon.
******************************************************************************/
#ifndef VASE_HPP
#define VASE_HPP
#include "HalfOpenCylinder.hpp"

class Vase
{
private:                           
   HalfOpenCylinder hoc;           // A HalfOpenCylinder object with a height, radius, and surface area
   double costPerSquareInch;       // The cost per square inch of the Vase

public:
Vase(HalfOpenCylinder, double);    // 2-Parameter Constructor

// Sets the cost per square inch of the vase
void setcostPerSquareInch(double);

// Calculates the total cost of the vase
double totalCost();

// Compares a Vase argument to the object it is called upon and
// returns true if the Vase (object) is greater than the Vase (argument)
bool   costsMoreThan(Vase);

// Prints the values of Vase
void printInfo();
};
#endif