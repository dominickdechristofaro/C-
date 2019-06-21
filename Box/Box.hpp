/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/30/2019
** Title:       Box.hpp
** Description: Header file for Box class. This file defines the interface of the Box class. 
******************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

// defines the interface of the Box class
class Box
{
private:                           // Box Private Attributes:
   double height,                  // The height of the box
          width,                   // The width of the box
          length,                  // The length of the box
          volume,                  // The volume of the box
          surfaceArea;             // The surface area of the box

public:                            // Box Public Attributes:
Box();                             // Default Constructor
Box(double, double, double);       // 3-Parameter Constructor

void setHeight(double);            // A method to set the height of the box, uses a double parameter
void setWidth(double);             // A method to set the width of the box, uses a double parameter
void setLength(double);            // A method to set the length of the box, uses a double parameter

double calcVolume();               // A method to calculate the volume of the box
double calcSurfaceArea();          // A method to calculate the surface area of the box

void printInfo();                  // A method to print the values of box for testing
};
#endif
