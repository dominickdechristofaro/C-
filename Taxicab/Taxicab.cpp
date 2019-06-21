/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/30/2019
** Title:       Taxicab.cpp
** Description: This file defines default constructs for the class Taxicab. It 
                also defines how the methods of taxicab should function.
******************************************************************************/
#include <iostream>
#include <cmath>
#include "Taxicab.hpp"

// Default 0-Parameter Constructor
Taxicab::Taxicab()
{
   setXCoord(0);
   setYCoord(0);
   setDistanceTraveled(0);
}

// Default 2-Parameter Constructor
Taxicab::Taxicab(int xCoordIn, int yCoordIn)
{
   xCoord = xCoordIn;
   yCoord = yCoordIn;
   distanceTraveled = 0;
}

// setXCoord Method Definition
// Assigns a value to xCoord
void Taxicab::setXCoord(int xCoordIn)
{
   xCoord = xCoordIn;
}

// setYCoord Method Definition
// Assigns a value to yCoord
void Taxicab::setYCoord(int yCoordIn)
{
   yCoord = yCoordIn;
}

// setDistanceTraveled Method Definition
// Assigns a value to distanceTraveled
void Taxicab::setDistanceTraveled(int distanceTraveledIn)
{
   distanceTraveled = distanceTraveledIn;
}

// getXCoord Method Definition
// Returns the value assigned to xCoord
int Taxicab::getXCoord()
{
   return xCoord;
}

// getYCoord Method Definition
// Returns the value assigned to yCoord
int Taxicab::getYCoord()
{
   return yCoord;
}

// getDistanceTraveled Method Definition
// Returns the value assigned to distanceTraveled
int Taxicab::getDistanceTraveled()
{
   return distanceTraveled;
}

// moveX Method Definition
// Moves the taxicab in the x-direction and adds the absolute value
// of the movement to the distanceTraveled variable
void Taxicab::moveX(int xIn)
{
   distanceTraveled += std::abs(xIn);
   xCoord += xIn;
}

// moveY Method Definition
// Moves the taxicab in the y-direction and add the absolute value
// of the movement to the distanceTraveled variable
void Taxicab::moveY(int yIn)
{
   distanceTraveled += std::abs(yIn);
   yCoord += yIn;
}

// printInfo Method Definition
// prints the information for the Taxicab variable
void Taxicab::printInfo()
{
   std::cout << "The x-coordinate is      " << xCoord << std::endl;
   std::cout << "The y-coordinate is      " << yCoord << std::endl;
   std::cout << "The distance traveled is " << distanceTraveled << std::endl;
}
