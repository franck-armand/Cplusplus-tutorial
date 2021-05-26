#include <iostream>
using namespace std;

void calculator(int x);

int main()
{
    int x = 10;
    calculator(x);
    printf("%d", x);
    return 0;
}

void calculator(int x)
{
    x = x + 10 ;
}