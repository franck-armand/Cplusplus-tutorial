#include <iostream>
using namespace std;

int sum(int num1, int num2) // The sum function that add 2 values
{
    int num3;
    num3 = num1 + num2;
    return num3;
}

int main()
{
    int result;
    // calling the function with the function name 'sum'
    result = sum (2, 3);
    cout << " The result is " << result;

   /* Output: The Program
    *  add 2+3 and return the result: 5
    */
   
    return 0;
}
