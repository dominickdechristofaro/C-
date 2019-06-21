/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/06/2019
** Title:       multiply.cpp
** Description: The function multiply takes two positive integer parameters
**              and returns the product of those two numbers.  The function
**              uses only addition and recursive function calls.
******************************************************************************/

int multiply (int, int);

// The multiply function takes two positive integer parameters and returns
// the product of those two numbers.  The function uses only addition and 
// recursive function calls
int multiply(int int1, int int2)
{
    int smallestInteger;    // a variable for the smallest of the 2 integers input
    int largestInteger;     // a variable for the largest of the 2 integers input

    // Determine the lowest integer input
    // Case #1: int1 < int2
    if(int1 < int2)
    {
         smallestInteger = int1;
         largestInteger = int2;
    }
    // Case #2: int2 < int1
    else if(int2 < int1)
    {
        smallestInteger = int2;
        largestInteger = int1;
    }
    // Case #3: int1 = int2
    else if(int1 == int2)
    {
        smallestInteger = int1;
        largestInteger = int2;
    }
    
    /* Test cases for determining the largest and smallest integers
    std::cout << "The first integer is: " << int1 << std::endl;
    std::cout << "The second integer is: " << int2 << std::endl;
    std::cout << "The largest integer is: " << largestInteger << std::endl;
    std::cout << "The smallest integer is: " << smallestInteger << std::endl;
    return 0; 
    
    END OF COMMENT */

    // returns the larger integer multiplied by the smaller integer 
    // but only uses addition and recursive function calls
    // Base Case: smallestInteger = 1
    if(smallestInteger == 1)
    {
        return largestInteger;
    }
    // Recursive function: smallestInteger > 1
    else
    {
        return largestInteger + multiply(largestInteger, smallestInteger - 1);
    }

}