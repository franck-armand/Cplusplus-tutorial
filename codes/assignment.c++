#include <iostream>
using namespace std;

int main(){

 int num1 = 240;
 int num2 = 40;

 num2 = num1;
 cout << "= Output: " << num2 << endl; // = Output: 240
 num2 += num1;
 cout << "+= Output: " << num2 << endl; // += Output: 480
 num2 -= num1;
 cout << "-= Output: " << num2 << endl; // -= Output: 240
 num2 *= num1;
 cout << "*= Output: " << num2 << endl; // *= Output: 57600
 num2 /= num1;
 cout << "/= Output: " << num2 << endl; // /= Output: 240
 num2 %= num1;
 cout << "%= Output: " << num2 << endl; // %= Output: 0

 return 0;
}