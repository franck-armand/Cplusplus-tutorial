#include <iostream>
using namespace std;

int main(){

   int num1 = 240;
   int num2 =40;

   if (num1==num2) {
      cout<<"num1 and num2 are equal"<<endl;
   }
   else{
      cout<<"num1 and num2 are not equal"<<endl;
   }
   if( num1 != num2 ){
      cout<<"num1 and num2 are not equal"<<endl;
   }
   else{
      cout<<"num1 and num2 are equal"<<endl;
   }
   if( num1 > num2 ){
      cout<<"num1 is greater than num2"<<endl;
   }
   else{
      cout<<"num1 is not greater than num2"<<endl;
   }
   if( num1 >= num2 ){ 
      cout<<"num1 is greater than or equal to num2"<<endl;
   }
   else{
      cout<<"num1 is less than num2"<<endl;
   }
   if( num1 < num2 ){
      cout<<"num1 is less than num2"<<endl;
   }
   else{
      cout<<"num1 is not less than num2"<<endl;
   }
   if( num1 <= num2){
      cout<<"num1 is less than or equal to num2"<<endl;
   }
   else{
      cout<<"num1 is greater than num2"<<endl;
   }
   return 0;
}