#include <iostream>
using namespace std;

int main()
{
    int i=10;
    if(i<20)        // if condition scope starts
    {
        int n=100;   // Local variable declared and initialized
    }              // if condition scope ends
    //cout << n;      // Compile time error, n not available here
}