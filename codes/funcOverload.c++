#include <iostream>
using namespace std;

// first definition
int sum (int x, int y)
{
    cout << x + y;
}

// second overloaded defintion
int sum(int x, int y, int z)
{
    cout << x + y + z;
}

int main()
{
    // sum() with 2 parameter will be called
    sum (10, 20);

    //sum() with 3 parameter will be called
    sum(10, 20, 30);

   /* Program Output:
    * 30
    * 60
    */
    return 0;
}