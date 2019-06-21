/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/30/2019
** Title:       Box.cpp
** Description: Default constructors and method definitions for the class Box 
******************************************************************************/
#include <iostream>
#include "Box.hpp"

// Default 0-Parameter Constructor
Box::Box()
{
   setHeight(1.0);
   setWidth(1.0);
   setLength(1.0);
}

// Default 3-Parameter Constructor 
Box::Box(double heightIn, double widthIn, double lengthIn)
{
   setHeight(heightIn);
   setWidth(widthIn);
   setLength(lengthIn);
}

// setHeight Method Definition
// This method will set the height of the box
void Box::setHeight(double heightIn)
{
   height = 0;
   height = heightIn;
}

// setWidth Method Definition
// This method will set the width of the box
void Box::setWidth(double widthIn)
{
   width = 0;
   width = widthIn;
}

// setLength Method Definition
// This method will set the length of the box
void Box::setLength(double lengthIn)
{
   length = 0;
   length = lengthIn;
}

// calcVolume Method Definition
// This method will calculate the volume of the box
double Box::calcVolume()
{
   volume = 0;
   volume = height * width * length;
   return volume;
}

// calcSurfaceArea Method Definition
// This method to calculate the surface area of the box
double Box::calcSurfaceArea()
{
   surfaceArea = 0;
   surfaceArea = 2*(length*width+length*height+height*width);
   return surfaceArea;
}

// printInfo Method Definition
// This method will print the info for the box
void Box::printInfo()
{
   std::cout << "Box Height is:       " << height << std::endl;
   std::cout << "Box Width is:        " << width << std::endl;
   std::cout << "Box Length is:       " << length << std::endl;
   std::cout << "Box Volume is:       " << volume << std::endl;
   std::cout << "Box Surface Area is: " << surfaceArea << std::endl;
}
