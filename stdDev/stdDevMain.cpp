#include <iostream>
#include "Person.hpp"

// Function prototype
double stdDev(Person people[], int size);

// Create Person Objects
Person test01("Test 01", 9.0);
Person test02("Test 02", 2.0);
Person test03("Test 03", 5.0);
Person test04("Test 04", 4.0);
Person test05("Test 05", 12.0);
Person test06("Test 06", 7.0);
Person test07("Test 07", 8.0);
Person test08("Test 08", 11.0);
Person test09("Test 09", 9.0);
Person test10("Test 10", 3.0);
Person test11("Test 11", 7.0);
Person test12("Test 12", 4.0);
Person test13("Test 13", 12.0);
Person test14("Test 14", 5.0);
Person test15("Test 15", 4.0);
Person test16("Test 16", 10.0);
Person test17("Test 17", 9.0);
Person test18("Test 18", 6.0);
Person test19("Test 19", 9.0);
Person test20("Test 20", 4.0);


// Create people array
Person people[] = { test01, test02, test03, test04, test05,
                    test06, test07, test08, test09, test10,
                    test11, test12, test13, test14, test15,
                    test16, test17, test18, test19, test20};

int main()
{
    std::cout << stdDev(people, 20) << std::endl;
    return 0;
}