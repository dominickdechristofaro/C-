#include <iostream>
#include <string>
#include "Person.hpp"

int main()
{
    Person test1;
    Person test2("Dominick", 29.0);
    test1.printInfo();
    std::cout << std::endl;
    test2.printInfo();
    std::cout << std::endl;
return 0;
}