/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/14/2019
** Title:       findMedian.cpp
** Description: This function will find and return the median of an array.
******************************************************************************/
#include <iostream>
#include <algorithm>

// Function prototype
double findMedian(int nums[], int size);  

// findMedian(array of numbers, size of array)
// findMedain will find the return the median of an array
double findMedian(int nums[], int size)
{
    // This code will execute if the array is odd in size
    if(size % 2 != 0)
    {
        // Sorts the array from smallest to largest
        std::sort(nums, nums + size);
        return(nums[(size/2)]);
    }
    // This code will execute if the array is even in size
    else
    {
        // Sorts the array from smallest to largest
        std::sort(nums, nums + size);
        return(((nums[(size/2-1)]) + (nums[(size/2)]))/2.0);
    }
}