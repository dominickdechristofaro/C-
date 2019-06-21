/*****************************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/10/2019
** Title:       change.cpp
** Description: Prompts a user for an amount of change (integer number between 0 and 99)
                and displays to the screen the least amount of coins possible make up
                that number in Quarters (Q), Dimes (D), Nickels (N), and Pennies (P).
*****************************************************************************************/
#include <iostream>

int main()
{
   const int QUARTER = 25,  // The monetary value of a quarter.
             DIME    = 10,  // The monetary value of a dime.
             NICKEL  =  5,  // The monetary value of a nickel.
             PENNY   =  1;  // The monetary value of a penny.

   int userInputCent,       // The amount of cents the user inputs.
       numQuarter,          // The least number of quarters from the amount of cents the user inputs.
       numDime,             // The least number of dimes from the amount of cents the user inputs.
       numNickel,           // The least number of nickels from the amount of cents the user inputs.
       numPenny;            // The least number of pennies from the amount of cents the user inputs.
 
   // Prompt the user to input an amount of cents less than a dollar and input to userInputCent.
   std::cout << "Please enter an amount in cents less than a dollar." << std::endl;
   std::cin >> userInputCent;   

   // Calculate the least number of quarters present in the amount entered by the user.
   // Then recalculate the remaining change left in userInputCent by subtracting quarter value.
   numQuarter = userInputCent / QUARTER;
   userInputCent %= QUARTER;

   //Repeat process for dimes.
   numDime = userInputCent / DIME;
   userInputCent %= DIME;

   // Repeat process for nickels.
   numNickel = userInputCent / NICKEL;
   userInputCent %= NICKEL;

   // Repeat process for pennies.
   numPenny = userInputCent / PENNY;
   
   // Display the results of the least number of coins possible from userInputCent.
   std::cout << "Your change will be:" << std::endl;
   std::cout << "Q: " << numQuarter << std::endl;
   std::cout << "D: " << numDime << std::endl;
   std::cout << "N: " << numNickel << std::endl;
   std::cout << "P: " << numPenny << std::endl;
   return 0;
}
