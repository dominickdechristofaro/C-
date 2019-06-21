/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/30/2019
** Title:       Taxicab.hpp
** Description: Header file for the class Taxicab.  Includes structure for the
                variables and methods to be utilized by the class.
******************************************************************************/
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

// Defines the interface of the Taxicab class
class Taxicab
{
// Private variables of the class Taxicab
private:
   int xCoord,                // The x-coordinate of the taxicab
       yCoord,                // The y-coordiante of the taxicab
       distanceTraveled;      // The distance the taxicab has traveled

// Public methods of the class Taxicab
public:
   Taxicab();                      // Default 0-Parameter Constructor
   Taxicab(int, int);              // Default 2-Parameter Constructor

   void setXCoord(int);            // Assigns a x-coordiante for taxicab 
   void setYCoord(int);            // Assigns a y-coordiante for taxicab
   void setDistanceTraveled(int);  // Assigns a distance traveled for taxicab

   int getXCoord();                // Returns the x-coordinate of taxicab
   int getYCoord();                // Returns the y-coordiante of taxicab
   int getDistanceTraveled();      // Returns the distance traveled of taxicab

   void moveX(int);                // Moves the taxicab in the x-direction
   void moveY(int);                // Moves the taxicab in the y-direction

   void printInfo();               // Prints the info of taxicab
};
#endif
