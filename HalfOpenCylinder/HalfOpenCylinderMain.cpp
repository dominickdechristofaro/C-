/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/06/2019
** Title:       HalfOpenCylinderMain.cpp
** Description: HalfOpenCylinder has 2 parameters (height and radius),
                and uses the parameters within its single method, surfaceArea.
                surfaceArea calculates the surface area of the halfOpenCylinder.
                This is the main for HalfOpenCylinder and will include test cases
                to pass through the compiler.
******************************************************************************/
#include <iostream>
#include "HalfOpenCylinder.hpp"

int main()
{
    // Printed for whitespace while testing
    std::cout << std::endl;

    // Case #1: Default 0-Parameter Object for HalfOpenCylinder
    HalfOpenCylinder hoc1;
    hoc1.surfaceArea();
    std::cout << "0-Parameter HalfOpenCylinder (hoc1) with surface area = 138.16:" << std::endl;
    hoc1.printInfo();
    std::cout << std::endl;
    
    // Case #2: Default 2-Parameter Object for HalfOpenCylinder
    HalfOpenCylinder hoc2(4.2, 1.7);
    hoc2.surfaceArea();
    std::cout << "2-Parameter HalfOpenCylinder (hoc2) with surface area = 53.91" << std::endl;
    hoc2.printInfo();
    std::cout << std::endl;
    return 0;
}
