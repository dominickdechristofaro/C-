/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/06/2019
** Title:       HalfOpenCylinder.hpp
** Description: HalfOpenCylinder has 2 parameters (height and radius),
                and uses the parameters within its single method, surfaceArea.
                surfaceArea calculates the surface area of the halfOpenCylinder.
                This header file defines the structure of the .cpp function for
                halfOpenCylinder.
******************************************************************************/
#ifndef HALFOPENCYLINDER_HPP
#define HALFOPENCYLINDER_HPP

class HalfOpenCylinder
{
// Public Attributes:
private:
    double  height,                // The height of the half open cylinder
            radius,                // The radius of the half open cylinder
            pi;                    // The value of pi

public:
HalfOpenCylinder();                // Default Constructor
HalfOpenCylinder(double, double);  // 2-Parameter Constructor

// Setters:
void setHeight(double);            // Sets the height of the half open cylinder
void setRadius(double);            // Sets the radius of the half open cylinder

// Getters:
double getHeight();                // Gets the height of the half open cylinder
double getRadius();                // Gets the radius of the half open cylinder
double getPi();                    // Gets the value of pi reported in half open cylinder

// Methods:
double surfaceArea();              // A method to calculate the surface area of the half open cylinder

// Print Values:
void printInfo();                  // A method to print the values of HalfOpenCylinder
};
#endif