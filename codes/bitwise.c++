#include <iostream>
using namespace std;

int main(){

   int num1 = 11;  // 11 = 00001011
   int num2 = 22;  // 22 = 00010110
   int result = 0;

   result = num1 & num2;
   cout<<"num1 & num2: "<<result<<endl; //num1 & num2: 2

   result = num1 | num2;
   cout<<"num1 | num2: "<<result<<endl; //num1 | num2: 31

   result = num1 ^ num2;
   cout<<"num1 ^ num2: "<<result<<endl; //num1 ^ num2: 29

   result = ~num1;
   cout<<"~num1: "<<result<<endl; //~num1: -12

   result = num1 << 2;
   cout<<"num1 << 2: "<<result<<endl; //num1 << 2: 44 

   result = num1 >> 2;
   cout<<"num1 >> 2: "<<result; //num1 >> 2: 2

   return 0;
}