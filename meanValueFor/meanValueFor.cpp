/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/23/2019
** Title:       meanValueFor.cpp
** Description: This function takes in a vector of object pointers of class
                type, Quadratic, and a x value.  It returns the mean of all 
                the quadratics contained within the vector utilizing the x
                value also passed.  The quadratic function is Ax^2 + Bx + C.
******************************************************************************/
#include <iostream>
#include <vector>
#include "Quadratic.hpp"

// meanValueFor takes in two parameters: A vector of object pointers of class 
// type Quadratic & a value for x. It computes the quadratic for all the objects 
// utilizing the x value with the following equation, Ax^2 + Bx + C.  It then 
// returns the mean value of all the quadratics.
double meanValueFor(std::vector<Quadratic*> quadraticVectorPtr, double xIn)
{
    // Initialialize the summation variable
    double sum = 0.0;

    // Loop to compute the quadratic value for every object within the vector
    for(int count = 0; count < quadraticVectorPtr.capacity(); count++)
    {
        // Assigning a Quadratic Object to perform work on a single element of the vector
        Quadratic currentObject = *quadraticVectorPtr[count];
        // Computing the value of the quadratic currently accessed within the vector
        sum += currentObject.valueFor(xIn);
    }
    // Returning the mean value of all the quadratics of the vector utilizing the size
    // of the original vector.
    return (sum / quadraticVectorPtr.capacity());
}