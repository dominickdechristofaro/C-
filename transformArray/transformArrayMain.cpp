/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/22/2019
** Title:       transformArrayMain.cpp
** Description: 
******************************************************************************/
#include <iostream>

void transformArray(int*&, int);

int main()
{
    int const SIZE = 5;
    int* myArray = new int[SIZE];
    myArray[0] = -3;
    myArray[1] = 10;
    myArray[2] = 78;
    myArray[3] = 12;
    myArray[4] = 0;

    transformArray(myArray, SIZE);

    for(int i = 0; i < (SIZE*2); i++)
    {
        std::cout << myArray[i] << std::endl;
    }
    delete [] myArray;
    return 0;
}
