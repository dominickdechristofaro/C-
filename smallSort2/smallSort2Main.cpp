#include <iostream>

using std::cout;
using std::endl;

// function prototype
void smallSort2(int *x, int *y, int *z);

int main()
{
   int first  = 100,
       second = 2,
       third  = 42;

   smallSort2(&first, &second, &third);
   cout << first << ", " << second << ", " << third << endl;
   return 0;
}
