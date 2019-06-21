/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/14/2019
** Title:       Person.cpp
** Description: The Person Class has 2 data members:
                string - name & double - age
                The class has a default constructor and a 2-parameter constructor.
                The class has getter and setter methods provided for it.
******************************************************************************/
#include <iostream>
#include <string>
#include "Person.hpp"

// Default 0-Parameter Constructor
Person::Person()
{
    name = "default";
    age = 0;
}      

// 2-Parameter Constructor
Person::Person(std::string stringIn, double ageIn)
{
    name = stringIn;
    age = ageIn;
}

// getName(): Gets the name of the Person
std::string Person::getName()
{
    return name;
}

// getAge(): Gets the age of the Person
double Person::getAge()
{
    return age;
}

// printInfo(): Print the name and age of a Person
void Person::printInfo()
{
    std::cout << "The person's name is: " << name << std::endl;
    std::cout << "The person's age is: " << age << std::endl;
}