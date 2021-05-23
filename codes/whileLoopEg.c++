#include <iostream>
using namespace std;

int main(){

   int i = 1; // we initialize the variable

   /* The loop would continue to print
    * the value of i until the given condition
    * i<=6 returns false.
    */
   while(i <= 6){
      cout<<"Value of variable i is: "<< i <<endl;
      i++; // we increment i until the condition is not true and exit the loop
   }
   return 0;
}