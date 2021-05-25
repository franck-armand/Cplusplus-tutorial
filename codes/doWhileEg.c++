#include <iostream>
using namespace std;

int main(){

   int num = 1; // initialize variable

   do{
      cout << "Value of num: " << num << endl; 
      num++;
   }while(num <= 6);

   /* Output:
    * Value of num: 1
    * Value of num: 2
    * Value of num: 3
    * Value of num: 4
    * Value of num: 5
    * Value of num: 6
    */

   return 0;
}