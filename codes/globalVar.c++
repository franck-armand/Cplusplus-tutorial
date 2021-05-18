#include <iostream>
using namespace std;

int x;                // Global variable declared
int main()

{
    x=10;                 // Initialized once
    cout <<"first value of x = "<< x << endl;
    x=20;                 // Initialized again
    cout <<"Initialized again with value = "<< x << endl;
    return 0;
}