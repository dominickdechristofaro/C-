#include <iostream>

// Function prototype
double findMedian(int nums[], int size); 

int main()
{
    int test0[] = {1, 2, 3};
    int test1[] = {1, 2, 3, 4};
    int test2[] = {-10, 4, 100, 6, 18};
    int test3[] = {-10, -67, 44, 999, 46, 47};
    std::cout << findMedian(test0, 3) << std::endl;
    std::cout << findMedian(test1, 4) << std::endl;
    std::cout << findMedian(test2, 5) << std::endl;
    std::cout << findMedian(test3, 6) << std::endl;
    return 0;
}