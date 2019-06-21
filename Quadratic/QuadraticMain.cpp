/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/23/2019
** Title:       QuadraticMain.cpp
** Description: The Class Quadratic, given inputs for coefficients A, B, & C, 
                and a variable input for x will solve the total value of the
                quadratic (Ax^2 + Bx + C) and find the discriminant (B^2 - 4AC).
******************************************************************************/
#include <iostream>
#include "Quadratic.hpp"

int main()
{
    // Construct Quadratic Objects
    Quadratic test1;
    Quadratic test2(2.0, 2.0, 2.0);
    std::cout << std::endl;

    /*
    // Test 1: Default Contructor (True)
    // Expected Values
    std::cout << "Expected Values: " << std::endl;
    std::cout << "A = 1.0" << std::endl;
    std::cout << "B = 1.0" << std::endl;
    std::cout << "C = 1.0" << std::endl;
    std::cout << "x = 3.0" << std::endl;
    std::cout << "quadratic = 13.0" << std::endl;
    std::cout << "discriminant = -3.0" << std:: endl;
    std::cout << std::endl;
    // Computed Values
    test1.valueFor(3.0);
    test1.printInfo();
    std::cout << std::endl;
    */

    /*
    // Test 2: 3-Parameter Constructor
    // Expected Values
    std::cout << "Expected Values: " << std::endl;
    std::cout << "A = 2.0" << std::endl;
    std::cout << "B = 2.0" << std::endl;
    std::cout << "C = 2.0" << std::endl;
    std::cout << "x = 4.2" << std::endl;
    std::cout << "quadratic = 45.68" << std::endl;
    std::cout << "discriminant = -12.0" << std:: endl;
    std::cout << std::endl;
    // Computed Values
    test2.valueFor(4.2);
    test2.printInfo();
    std::cout << std::endl;
    */

return 0;
}