/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/23/2019
** Title:       meanValueForMain.cpp
** Description: 
******************************************************************************/
#include <iostream>
#include <vector>
#include "Quadratic.hpp"

// Function Prototype
double meanValueFor(std::vector<Quadratic*>, double);

int main()
{
    // Define Quadratic Objects
    Quadratic q1;
    Quadratic q2(2.0, 2.0, 2.0);
    std::cout << std::endl;

    // Test 1: Default Contructor (True)
    // Expected Values
    std::cout << "Expected Values: " << std::endl;
    std::cout << "A = 1.0" << std::endl;
    std::cout << "B = 1.0" << std::endl;
    std::cout << "C = 1.0" << std::endl;
    std::cout << "x = 1.0" << std::endl;
    std::cout << "quadratic = 3.0" << std::endl;
    std::cout << "discriminant = -3.0" << std:: endl;
    std::cout << std::endl;
    // Computed Values
    q1.valueFor(1.0);
    q1.printInfo();
    std::cout << std::endl;

    // Test 2: 3-Parameter Constructor
    // Expected Values
    std::cout << "Expected Values: " << std::endl;
    std::cout << "A = 2.0" << std::endl;
    std::cout << "B = 2.0" << std::endl;
    std::cout << "C = 2.0" << std::endl;
    std::cout << "x = 1.0" << std::endl;
    std::cout << "quadratic = 6.0" << std::endl;
    std::cout << "discriminant = -12.0" << std:: endl;
    std::cout << std::endl;
    // Computed Values
    q2.valueFor(1.0);
    q2.printInfo();
    std::cout << std::endl;

    // Vector Creation
    std::vector<Quadratic*> quadraticVector;
    quadraticVector.push_back(&q1);
    quadraticVector.push_back(&q2);
    double xIn = 2.0;
    double result = meanValueFor(quadraticVector, xIn);
    std::cout << "The mean of all vectors with a x of " << xIn << " is: " << std::endl;
    std::cout << result << std::endl;
return 0;
}