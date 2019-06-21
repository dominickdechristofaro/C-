#include <iostream>

void swap (int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int firstNum = 8;
    int secondNum = 19;
    swap(&firstNum, &secondNum);
    std::cout << "firstNum = " << firstNum << std::endl;
    std::cout << "secondNum = " << secondNum << std::endl;
    return 0;
}