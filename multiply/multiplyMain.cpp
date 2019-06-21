/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/06/2019
** Title:       multiplyMain.cpp
** Description: 
******************************************************************************/
#include <iostream>

// function prototype
int multiply(int, int);

int main()
{
    // Added whitespace for readability
    std::cout << std::endl;
    
    /* Test cases for finding the smallest and largest numbers in multiply
    
    // Case #1: int1 < int2
    std::cout << "Test Case #1: int1 < int2" << std::endl;
    multiply(2, 4);
    std::cout << std::endl;

    // Case #2: int1 > int2
    std::cout << "Test Case #2: int1 > int2" << std::endl;
    multiply(10,6);
    std::cout << std::endl;

    // Case #3: int1 = int2
    std::cout << "Test Case #3: int1 = int2" << std::endl;
    multiply(5, 5);
    std::cout << std::endl;
    return 0;
    
    END OF COMMENT */

    // Test cases for the recursive multiply function
    std::cout << "This test should return 5: " << multiply(5,1) << std::endl;
    std::cout << "This test should return 10: " << multiply(5,2) << std::endl;
    std::cout << "This test should return 15: " << multiply(5,3) << std::endl;
    std::cout << "This test should return 1: " << multiply(1,1) << std::endl;
    std::cout << "This test should return 6: " << multiply(1,6) << std::endl;
    std::cout << "This test should return 6: " << multiply(6,1) << std::endl;
    std::cout << "This test should return 5: " << multiply(1,5) << std::endl;
    std::cout << "This test should return 10: " << multiply(2,5) << std::endl;
    std::cout << "This test should return 15: " << multiply(3,5) << std::endl;
    return 0;
}