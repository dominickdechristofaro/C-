/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/06/2019
** Title:       HalfOpenCylinder.cpp
** Description: HalfOpenCylinder has 2 parameters (height and radius),
                and uses the parameters within its single method, surfaceArea.
                surfaceArea calculates the surface area of the halfOpenCylinder.
******************************************************************************/
#include <iostream>
#include "HalfOpenCylinder.hpp"

// Default 0-Parameter Constructor:
// Takes in no parameters and sets the height to 10.0 and the radius to 2.0
// for the object of the HalfOpenCylinder Class type.
HalfOpenCylinder::HalfOpenCylinder()
{
   setHeight(10.0);
   setRadius(2.0);
   pi = 3.14159;
}

// Default 2-Parameter Constructor:
// Takes in 2 parameters, height and radius, both doubles and then 
// sets the height and width depending on the numbers input.
HalfOpenCylinder::HalfOpenCylinder(double heightIn, double radiusIn)
{
   setHeight(heightIn);
   setRadius(radiusIn);
   pi = 3.14159;
}

// setHeight: This method will set the height of the HalfOpenCylinder
void HalfOpenCylinder::setHeight(double heightIn)
{
   height = heightIn;
}

// setRadius: This method will set the radius of the HalfOpenCylinder
void HalfOpenCylinder::setRadius(double radiusIn)
{
   radius = radiusIn;
}

// getHeight(): This method will get the height of the instance of HalfOpenCylinder
double HalfOpenCylinder::getHeight()
{
   return height;
}

// getRadius(): This method will get the radius of the instance of HalfOpenCylinder
double HalfOpenCylinder::getRadius()
{
   return radius;
}

// getPi(): This method will get the value of pi of the instance of HalfOpenCylinder
double HalfOpenCylinder::getPi()
{
   return pi;
}

// surfaceArea: This method will calculate the surface area of the HalfOpenCylinder
double HalfOpenCylinder::surfaceArea()
{
   return (2*pi*radius*height)+(pi*radius*radius);
}

// printInfo: This method will print the info for the HalfOpenCylinder
void HalfOpenCylinder::printInfo()
{
   std::cout << "HalfOpenCylinder height is:       " << height << std::endl;
   std::cout << "HalfOpenCylinder radius is:       " << radius << std::endl;
   std::cout << "HalfOpenCylinder PI is:           " << pi << std::endl;
   std::cout << "HalfOpenCylinder surfaceArea is:  " << surfaceArea() << std::endl;
}