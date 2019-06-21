/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/06/2019
** Title:       VaseMain.cpp
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

int main()
{
    // Printed for whitespace while testing
    std::cout << std::endl;
    
    // Case #1: 2-Parameter Object for Vase
    HalfOpenCylinder hoc1;
    hoc1.surfaceArea();
    Vase vase1(hoc1, 5.0);
    vase1.totalCost();
    std::cout << "2-Parameter Vase (vase1) with total cost = 690.80" << std::endl;
    vase1.printInfo();
    std::cout << std::endl;

    // Case #2: 2-Parameter Object for Vase
    HalfOpenCylinder hoc2(4.2, 1.7);
    hoc2.surfaceArea();
    Vase vase2(hoc2, 8.7);
    vase2.totalCost();
    std::cout << "2-Parameter Vase (vase2) with total cost = 469.02" << std::endl;
    vase2.printInfo();
    std::cout << std::endl;
    
    // Case #3: Compare Vase1.costsMoreThan(Vase2) = True
    std::cout << "vase1 is the object & vase2 is the argument = True" << std::endl;
    std::cout << vase1.costsMoreThan(vase2) << std::endl;

    // Case #4: Compare Vase2.costsMoreThan(Vase1) = False
    std::cout << "vase2 is the object & vase 1 is the argument = False" << std::endl;
    std::cout << vase2.costsMoreThan(vase1) << std::endl;
    return 0;
}