/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/16/2019
** Title:       numGuess.cpp
** Description: This program prompts the user for an integer that a player, 
                a second person, will try to guess.  The program alerts the 
                player if their guess was too high, or too low and continues
                until the player guesses the input integer correctly.  Then
                the program will output the number of tries the player took
                to correctly guess the integer.
******************************************************************************/
#include <iostream>

int main()
{
   int inputNumber = 0,   // The number input that the player will try to guess.
       guessNumber = 0,   // The number guessed by the player of the program.
       tries       = 0;   // The number of tries the player takes  to guess correctly.

   // Prompt the user for the inputNumber.
   std::cout << "Enter the number for the player to guess." << std::endl;
   std::cin >> inputNumber;

   // Prompt the user for their first guess.
   std::cout << "Enter your guess." << std::endl;
   std::cin >> guessNumber;
   tries++;

   // Loop until the player guesses the correct answer.
   while (inputNumber != guessNumber)
   {
      if (guessNumber > inputNumber)
      {
         std::cout << "Too high - try again." << std::endl;
         std::cin >> guessNumber;
         tries++;
      }
      else
      {
         std::cout << "Too low - try again." << std::endl;
         std::cin >> guessNumber;
         tries++;
      }
   }

   // Output the number of tries to guess correctly.
   std::cout << "You guessed it in " << tries << " tries." << std::endl;
   return 0;
}
