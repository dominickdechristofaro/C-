/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/16/2019
** Title:       fileAdder.cpp
** Description: Opens a separate document and sums the numbers contained within.
**              Outputs the result to a new file "sum.txt" and alerts the ueer
**              that the operations have been completed.
******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>

int main()
{
   // Define variables
   int inputNum,           // The current input number.
       sum;                // The summation of the input numbers.    
   
   std::string fileName;        // The name of the file input by the user.
   
   std::ifstream inputFile;

   std::ofstream outputFile;

   // Prompt the user to input a filename to open.
   std::cout << "Please enter your filename." << std::endl;
   std::cin >> fileName;

   // Attempt to open the input file
   inputFile.open(fileName);

   // If the file successfully opened, process it
   if (inputFile)
   {
      // Loop until the End of File (EOF) is reached
      while (inputFile >> inputNum)
      {  // sum every number in the input file into the variable sum.
         sum += inputNum;
      }
      // Close the input file
      inputFile.close();
      // Alert the user that the result was written to sum.txt
      std::cout << "result written to sum.txt" << std::endl;
   }
   // If the file coud not be found or opened, report error message
   else
   {
      std::cout << "could not access file" << std::endl;
   }
   // Output the sum to sum.txt
   outputFile.open("sum.txt");
   outputFile << sum << std::endl;
   outputFile.close();
   return 0;
}
