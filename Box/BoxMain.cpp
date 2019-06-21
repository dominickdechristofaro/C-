/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/30/2019
** Title:       BoxMain.cpp
** Description: Main function for the Box class for testing and compling
******************************************************************************/
#include <iostream>
#include "Box.hpp"

int main()
{
   Box box1;
   box1.calcVolume();
   box1.calcSurfaceArea();
   std::cout << "0-Parameter Box - box1:" << std::endl;
   box1.printInfo();

   Box box2(2.4, 7.1, 5.0);
   box2.calcVolume();
   box2.calcSurfaceArea();
   std::cout << "3-Parameter Box - box2:" << std::endl;
   box2.printInfo();
   return 0;
}
