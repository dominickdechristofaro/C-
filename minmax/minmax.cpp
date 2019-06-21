/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/16/2019
** Title:       minmax.cpp
** Description: Determines the minimum and maximum numbers from a set of user
**              input integers.  The quantity of integers input should be
**              defined by the user.
******************************************************************************/
#include <iostream>

int main()
{
   // Declare variables.
   int numInt    = 0,           // The number of integers the user should input.
       inputNum  = 0,           // The current number that the user input.
       min       = 0,           // The minimum number the user inputs.
       max       = 0,           // The maximum number the user inputs.
       loopCount;               // Loop counter.

   // Promot the user for number of integers and read into numInt.
   std::cout << "How many integers would you like to enter?" << std::endl;
   std::cin >> numInt;
   
   // Instruct the user to input numInt number of integers.
   std::cout << "Please enter " << numInt << " integers." << std::endl;
   
   // Read the first user input and assign number to min and max.
   std::cin >> inputNum;
   min = inputNum;
   max = inputNum;

   // Loop for the numInt - 1 number of iterations to determine min & max values input.
   for (loopCount = (numInt - 2); loopCount >= 0; loopCount--)
   {
      std::cin >> inputNum;
      if (inputNum < min)
         min = inputNum;
      else if (inputNum > max)
         max = inputNum;
      
   }

   // Output the minimum and maximum values to the screen.
   std::cout << "min: " << min << std::endl;
   std::cout << "max: " << max << std::endl;
   return 0;
}
