#include <iostream>
using namespace std;

void calculator(int *p);

int main()
{
    int x = 10;
    calculator(&x);     // passing address of x as argument
    printf("%d", x);
    return 0;
}

void calculator(int *p)
{
    *p = *p + 10;
}
                     // The Program output: 20