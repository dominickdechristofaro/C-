/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/23/2019
** Title:       hailstone.cpp
** Description: hailstone takes a single positive integer as an argument and 
                either, divides the number by 2 if it is even, or multplies it
                by 3 and adds 1 if it is not even.  This process repetes until
                the number is 1.  In the background, a count variable keeps 
                track of how many steps it takes until the program reaches 1.
                Then the program returns the count, it has no output.
******************************************************************************/
#include <iostream>

// hailstone function, see description in head of file
int hailstone(int startingInt)
{
   // initialize starting variables
   int count = 0;              // counts the number of steps the program performs
   int input = startingInt;    // the parameter input to the program

   // Case 1: The input number is 1
   if(input == 1)
   {
      // return 1 as the number of steps performed
      count = 1;
      return count;
   }

   // Case 2: The input number is not 2
   // perform the following steps until the input number is == 1
   while(input != 1)
   {
      // if the input number is even, then divide the number by 2
      // and increase the count by 1
      if(input % 2 == 0)
      {
         input /= 2;
         count++;
      }
      // if the input number is not even, then multiple the number by 3 and add 1
      // then increase the count by 1
      else
      {
         input = (input * 3) + 1;
         count++;
      }
   }
   
   // return the count, do not output any numbers
   return count;   
}
