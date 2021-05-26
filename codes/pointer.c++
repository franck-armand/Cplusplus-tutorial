#include <iostream>
using namespace std;

int main(){

   //Pointer declaration
   int *p, var=23;

   //Assignment
   p = &var;

   cout << "Address of var: " << &var <<endl;
   cout<< "Address of var: " << p << endl;
   cout << "Address of p: " << &p << endl;
   cout << "Value of var: " << *p;

   /* Output:
   * Address of var: 0x7fff5dfffc0c
   * Address of var: 0x7fff5dfffc0c
   * Address of p: 0x7fff5dfffc10
   * Value of var: 23
   */

   return 0;
}