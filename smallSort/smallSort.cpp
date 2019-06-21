/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        04/23/2019
** Title:       smallSort.cpp
** Description: The smallSort function takes in 3 arguments by reference and
                sorts the numbers from smallest to largest
******************************************************************************/

// Takes in 3 parameters by reference and sorts the numbers from smallest to
// largest
void smallSort(int& refNum1, int& refNum2, int& refNum3)
{  
   // 3 temporary variables used for reassigning values
   int smallest = 0,    // the smallest reference number
       middle   = 0,    // the middle reference number
       largest  = 0;    // the largest refernce number
   
   // Case #1: All integers are different
   if(refNum1 > refNum2)
   {
      if(refNum1 > refNum3)
      {
         if(refNum2 > refNum3) // Case 1.1: refNum1>refNum2>refNum3
         {
            largest = refNum1;
            middle = refNum2;
            smallest = refNum3;
            refNum1 = smallest;
            refNum2 = middle;  
            refNum3 = largest;
         }
         else if(refNum2 < refNum3) // Case 1.2: refNum1>refNum3>refNum2
         {
            largest = refNum1;
            middle = refNum3;
            smallest = refNum2;
            refNum1 = smallest;
            refNum2 = middle;
            refNum3 = largest;
         }
      }
      else if(refNum1 < refNum3) // Case 1.3: refNum3>refNum1>refNum2
      {
         largest = refNum3;
         middle = refNum1;
         smallest = refNum2;
         refNum1 = smallest;
         refNum2 = middle;
         refNum3 = largest;
      }
   }
   else if(refNum1 < refNum2)
   {
      if(refNum1 > refNum3) // Case 1.4: refNum2>refNum1>refNum3
      {
         largest = refNum2;
         middle = refNum1;
         smallest = refNum3;
         refNum1 = smallest;
         refNum2 = middle;
         refNum3 = largest;
      }
      else if(refNum1 < refNum3)
      {
         if(refNum2 > refNum3) // Case 1.5: refNum2>refNum3>refNum1
         {
            largest = refNum2;
            middle = refNum3;
            smallest = refNum1;
            refNum1 = smallest;
            refNum2 = middle;
            refNum3 = largest;
         }
         else if(refNum2 < refNum3) // Case 1.6: refNum3>refNum2>refNum1
         {
            largest = refNum3;
            middle = refNum2;
            smallest = refNum1;
            refNum1 = smallest;
            refNum2 = middle;
            refNum3 = largest;
         }
      }
   }

   // Case#2: 2 integers are the same
   if(refNum1 == refNum2)
   {
      if(refNum1 > refNum3) // Case 2.1: (A=B)>C
      {
         largest = refNum1;
         middle = refNum2;
         smallest = refNum3;
         refNum1 = smallest;
         refNum2 = middle;
         refNum3 = largest;
      }
      else if(refNum1 < refNum3) // Case 2.2: (A=B)<C
      {
         largest = refNum3;
         middle = refNum2;
         smallest = refNum1;
         refNum1 = smallest;
         refNum2 = middle;
         refNum3 = largest;
      }
   }
   else if(refNum1 == refNum3)
   {
      if(refNum1 > refNum2) // Case 2.3: (A=C)>B
      {
         largest = refNum1;
         middle = refNum3;
         smallest = refNum2;
         refNum1 = smallest;
         refNum2 = middle;
         refNum3 = largest;
      }
      else if(refNum1 < refNum2) // Case 2.4: (A=C)<B
      {
         largest = refNum2;
         middle = refNum1;
         smallest = refNum3;
         refNum1 = smallest;
         refNum2 = middle;
         refNum3 = largest;
      }
   }
   else if(refNum2 == refNum3)
   {
      if(refNum2 > refNum1) // Case 2.5: (B=C)>A
      {
         largest = refNum2;
         middle = refNum3;
         smallest = refNum1;
         refNum1 = smallest;
         refNum2 = middle;
         refNum3 = largest;
      }
      else if(refNum2 < refNum1) // Case 2.6: (B=C)<A
      {
         largest = refNum1;
         middle = refNum2;
         smallest = refNum3;
         refNum1 = smallest;
         refNum2 = middle;
         refNum3 = largest;
      }
   }

   // Case #3: All integers are the same
   if(refNum1 == refNum2 && refNum1 == refNum3 && refNum2 == refNum3)
   {
      largest = refNum1;
      middle = refNum2;
      smallest = refNum3;
      refNum1 = smallest;
      refNum2 = middle;
      refNum3 = largest;
   }
}
