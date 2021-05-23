#include <iostream>
using namespace std;

int main(){

   int num=80;

   /* Nested if: An if statement
    * inside another if body
    */

   if( num < 90 ){
      cout<<"number is less than 90"<<endl;

      if(num > 50){
         cout<<"number is greater than 50";
      }
   }

   /* Output:
    * number is less than 90
    * number is greater than 50
    */

   return 0;
}