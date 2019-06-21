/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        06/04/2019
** Title:       FBoardMain.cpp
** Description: 
******************************************************************************/
#include <iostream>
#include "FBoard.hpp"

int main()
{
    //
    FBoard test1;
    std::cout << std::endl;

    // Test 1: 
    test1.moveX(1,2);
    test1.moveO(7,4,6,3);
    test1.moveO(6,3,7,4);
    test1.moveX(0,1);
    test1.moveX(1,2);
    test1.moveX(2,3);
    test1.moveX(3,4);
    test1.moveX(4,5);
    test1.moveX(5,6);
    test1.moveX(6,5);

    test1.moveO(7,0,6,1);
    test1.moveO(6,1,5,2);
    test1.moveO(5,2,4,3);

    test1.moveO(6,3,5,4);
    test1.moveO(5,4,4,5);

    test1.moveO(7,2,6,3);

    test1.moveX(5,4);

    test1.moveO(7,6,6,5);
    test1.moveO(6,5,5,6);

    test1.moveX(6,5);

    test1.printBoardState();

    return 0;
}