#include <iostream>
using namespace std;

int main(){

   int var;

   for (var=20; var>=10; var --) {
      cout << "var: "<< var << endl;
      if (var == 18) {
         break;
      }
   }
   cout << "I'm out of the loop";

    /*
     * In this example we have a for loop
     * running from 20 to 10 but since we
     * have a break statement when the
     * variable is equal to 18, which
     * terminates the program.
     * Program Output is :
     * var:20
     * var:19
     * var:18
     * I'm out of the loop
     */

   return 0;
}