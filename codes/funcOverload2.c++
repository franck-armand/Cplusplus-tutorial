#include <iostream>
using namespace std;

// first definition which returns an integer
int sum(int x, int y)
{
    cout << x + y;
}

// second overloaded defintion which returns a double
double sum(double x, double y)
{
    cout << x + y;
}

int main()
{
    sum(5, 2);
    sum(5.5, 2.5);

    /* Program Output:
    * 7
    * 8.0
    */

    return 0;
}