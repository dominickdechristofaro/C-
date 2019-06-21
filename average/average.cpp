/**********************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/10/2019
** Title:       average.cpp
** Description: Program that prints the average of 5 numbers input by the user.
**********************************************************************************/
#include <iostream>

int main()
{
   double num1,        // The first number entered by the user.
          num2,        // The second number entered by the user.
          num3,        // The third number entered by the user.
          num4,        // The fourth number entered by the user.
          num5,        // The fifth number entered by the user.
          average;     // The computed average of numbers entered by the user.

   // Prompt the user for five numbers.
   std::cout << "Please enter five numbers." << std::endl;

   // Obtain five numbers from the user.
   std::cin >> num1;
   std::cin >> num2;
   std::cin >> num3;
   std::cin >> num4;
   std::cin >> num5;

   // Compute the average of the five numbers and display it to the screen.
   average = (num1 + num2 + num3 + num4 + num5) / 5;
   std::cout << "The average of those numbers is:" << std::endl;
   std::cout << average << std::endl;
   return 0;
}
