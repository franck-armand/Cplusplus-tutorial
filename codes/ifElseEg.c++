#include <iostream>
using namespace std;

int main(){

   int num=10;

   if( num < 5 ){
      //This would be executed if above condition is true
      cout << "num is less than 5";
   }
   else {
      //This would run if above condition is false
      cout<<"num is greater than or equal 5";
   }
   // Program Output: num is greater than or equal 50
   /* This is because  num = 10 is greater than 10
      So the if condition does not get to be executed.
  */

   return 0;
}