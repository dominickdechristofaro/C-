#include <iostream>
#include <algorithm>

int main()
{
    int array[] = {23, 5, -10, 0, 0, 321, 1, 2, 99, 30};
    int size = 10;
    std::sort(array, array + size);
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}