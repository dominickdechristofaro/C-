/******************************************************************************
** Author:      Dominick DeChristofaro
** Date:        05/14/2019
** Title:       Person.hpp
** Description: The Person Class has 2 data members:
                string - name & double - age
                The class has a default constructor and a 2-parameter constructor.
                The class has getter and setter methods provided for it.
******************************************************************************/
#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

class Person
{
/*************************** PRIVATE ATTRIBUTES ******************************/
private: 
    std::string name;              // The name of a Person
    double age;                    // The age of a Person

/*************************** PUBLIC ATTRIBUTES *******************************/
public:
Person();                          // Default Constructor
Person(std::string, double);       // 2-Parameter Constructor

// Getters:
std::string getName();             // Gets the name of the Person
double getAge();                   // Gets the age of the Person

// Print Values:
void printInfo();                  // A method to print the values of Person
};
#endif