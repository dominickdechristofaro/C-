/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/22/2019
** Title:       transformArray.cpp
** Description: transfromArray passes in two arguments: a pointer by reference
                and the size of the array and will assign a new array to the
                old array that consists of the original array values followed
                by double the array values. 
******************************************************************************/
#include <iostream>

// transformArray takes in an array by reference and returns a new array
// consisting of the same values directly followed by double all the array
// values.
void transformArray(int*& ptrArray, int arraySIZE)
{
    // assigning null to the new pointer array
    int *newArray = NULL;

    // setting the size of the new array (which is double the size of the old array)
    int newArraySize = arraySIZE * 2;

    // dynamically allocating space for the new array of double the size of the old array
    newArray = new int[newArraySize];

    // Assign the original values of the old array to newArray, directly followed by
    // double the original values of the old array to new Array 
    for(int countPtrArray = 0; countPtrArray < arraySIZE; countPtrArray++)
    {
        newArray[countPtrArray] = ptrArray[countPtrArray];
        newArray[((newArraySize/2) + countPtrArray)] = (ptrArray[countPtrArray] * 2);
    }

    // free up dynamically allocated memory with ptrArray
    delete [] ptrArray;

    // assign the newArray to the ptrArray which was passed by reference
    ptrArray = newArray;
}
