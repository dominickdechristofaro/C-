#include <iostream>

using std::cout;
using std::endl;

// function prototype
void smallSort(int&, int&, int&);

int main()
{
   int first  = 42,
       second = 42,
       third  = 42;

   smallSort(first, second, third);
   cout << first << ", " << second << ", " << third << endl;
   return 0;
}
