/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/21/2019
** Title:       fallDistance.cpp
** Description: Computes the fall distance of an object as a function of time.
**              The function fallDistance is called with the argument of time,
**              and the distance the object has fallen in the input time is
**              computed.
******************************************************************************/

// Computes the distance an object has fallen as a function of the input
// argument of time
double fallDistance(double time)
{
   const double GRAVITY = 9.8;  // The gravational constant (m/s^2)
   double distance = 0;         // Initialize the distance variable

   // Compute the distance fallen and return to the answer
   distance = (GRAVITY * time * time) / 2.0;
   return distance;
}
