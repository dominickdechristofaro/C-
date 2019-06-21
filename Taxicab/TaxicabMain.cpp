/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/30/2019
** Title:       TaxicabMain.cpp
** Description: The main function for Taxicab.  Will be utilized for testing.
******************************************************************************/
#include <iostream>
#include "Taxicab.hpp"

int main()
{
   std::cout << std::endl;

   // Test for a default 0-parameter constructor
   Taxicab cab1;
   std::cout << "The default 0-Parameter Constructor when initialized" << std::endl;
   std::cout << "cab1 = {x = 0, y = 0, distanceTraveled = 0}" << std::endl;
   cab1.printInfo();
   std::cout << std::endl;
   
   // Test for a default 2-parameter constructor
   Taxicab cab2(6, 8);
   std::cout << "The default 2-Parameter Constructor when initialized" << std::endl;
   std::cout << "cab2 = {x = 6, y = 8, distanceTraveled = 0}" << std::endl;
   cab2.printInfo();
   std::cout << std::endl;

   // Test to move cab2 in the positive x-direction
   std::cout << "Move cab2 in the positive x-direction 2 units:" << std::endl;
   std::cout << "cab2 = {x = 8, y = 8, distanceTraveled = 2}" << std::endl;
   cab2.moveX(2);
   cab2.printInfo();
   std::cout << std::endl;

   // Test to move cab2 in the negative x-direction
   std::cout << "Move cab2 in the negative x-direction 3 units:" << std::endl;
   std::cout << "cab2 = {x = 5, y = 8, distanceTraveled = 5}" << std::endl;
   cab2.moveX(-3);
   cab2.printInfo();
   std::cout << std::endl;
   
   // Test to move cab2 in the positive y-direction
   std::cout << "Move cab2 in the positive y-direction 4 units:" << std::endl;
   std::cout << "cab2 = {x = 5, y = 12, distanceTraveled = 9}" << std::endl;
   cab2.moveY(4);
   cab2.printInfo();
   std::cout << std::endl;

   // Test to move cab2 in the negative y-direction
   std::cout << "Move cab2 in the negative y-direction 8 units:" << std::endl;
   std::cout << "cab2 = {x = 5, y = 4, distanceTraveled = 17}" << std::endl;
   cab2.moveY(-8);
   cab2.printInfo();
   std::cout << std::endl;

   // Test to create a new cab3 and move and calculate distance
   Taxicab cab3;
   std::cout << "cab3 is initialized with default parameters (x = 0, y = 0, distance = 0)" << std::endl;
   std::cout << "cab3 is moved x = +5, y = -12, x = -22, y = +9" << std::endl;
   std::cout << "cab3 = {x = -17, y = -3, distanceTraveled = 48}" << std::endl;
   cab3.moveX(5);
   cab3.moveY(-12);
   cab3.moveX(-22);
   cab3.moveY(9);
   cab3.printInfo();
   std::cout << std::endl;
   return 0;
}
