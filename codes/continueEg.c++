#include <iostream>
using namespace std;

int main(){

   for (int num=0; num<=6; num++) {

      /* This means that when the value of
       * num is equal to 4 this continue statement
       * would be encountered, which would make the
       * control to jump to the beginning of loop for
       * next iteration, skipping the current iteration
       */

      if (num == 4) {
          continue;
      }
      cout << num << " "; // Print result on a single line
   }

   return 0;
}