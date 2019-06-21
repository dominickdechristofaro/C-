/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/14/2019
** Title:       stdDev.cpp
** Description: This function calculates the standard deviation of an array
                of Person objects.  A Person object has 2 data members (name, age).
******************************************************************************/
#include <iostream>
#include <cmath>
#include "Person.hpp"

// Function prototype
double stdDev(Person people[], int size);

// Variable declarations
double age_sum;
double average;
double variance;
double variance_sum;
double stdev;
int i; 

// stdDev(array[Person(name, age)] Objects, size of array)
// stdDev will calculate the standard deviation of ages of people in an array
double stdDev(Person people[], int size)
{
    // Initialize summation variables
    age_sum = 0;
    variance_sum = 0;

    // Sum the ages in the people array
    for(i = 0; i < size; i++)
    {
        age_sum = age_sum + people[i].getAge();
    }

    // Compute the avarage of the ages in the people array
    average = age_sum / size;

    // Sum the variances in the people array
    for(i = 0; i < size; i++)
    {
        variance_sum = variance_sum + ((people[i].getAge() - average) * (people[i].getAge() - average));
    }

    // Compute the standard deviation of the ages in the people array
    stdev = sqrt((variance_sum/size));
    return stdev;
}