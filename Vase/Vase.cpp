/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/06/2019
** Title:       Vase.cpp
** Description: Vase has 2 data members, HalfOpenCylinder (class) & 
                costPerSquareInch (double). The class has 2 methods, 
                totalCost(), which returns the total cost of the Vase, and 
                costMoreThan(vase), which passes a vase object as a parameter 
                and returns false if it cost more than the vase object it is 
                called upon.
******************************************************************************/
#include <iostream>
#include "Vase.hpp"
#include "HalfOpenCylinder.hpp"

// Default 2-Parameter Constructor:
// Takes in 2 parameters, HalfOpenCylinder (class), and costPerSquareInch (double)
// HalfOpenCylinder can be left unspecified, or you may declaire it using the following
// format HalfOpenCylinder(double height, double radius). Please see HalfOpenCylinder
// for further documentation.  costPerSquareInch is the cost per square inch for
// the material used to make the vase.
Vase::Vase(HalfOpenCylinder hocIn, double costPerSquareInchIn)
{
   hoc = hocIn;
   costPerSquareInch = costPerSquareInchIn;
}

// totalCost: returns the total calculated cost of the Vase (Surface Area * Cost Per Square Inch)
double Vase::totalCost()
{
   return (hoc.surfaceArea() * costPerSquareInch);
}

// costsMoreThan: returns true if (Vase1 > Vase2) where Vase1.costsMoreThan(Vase1)
bool Vase::costsMoreThan(Vase otherVase)
{
    if(totalCost() > otherVase.totalCost())
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
// Prints the info for the Vase
void Vase::printInfo()
{
   std::cout << "Vase height is:       " << hoc.getHeight() << std::endl;
   std::cout << "Vase radius is:       " << hoc.getRadius() << std::endl;
   std::cout << "PI is:                " << hoc.getPi() << std::endl;
   std::cout << "Vase surfaceArea is:  " << hoc.surfaceArea() << std::endl;
   std::cout << "Vase total cost is:   " << totalCost() << std::endl;
}