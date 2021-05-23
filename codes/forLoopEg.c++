#include <iostream>
using namespace std;

int main(){

   for(int i = 1; i <= 6; i++){

      /* This statement would be executed
       * repeatedly until the condition
       * i<=6 returns false.
       */
      cout<<"Value of variable i is: "<<i<<endl;
   }

     /* Output:
    Value of variable i is: 1
    Value of variable i is: 2
    Value of variable i is: 3
    Value of variable i is: 4
    Value of variable i is: 5
    Value of variable i is: 6*/

   return 0;
}