#include <iostream>
using namespace std;

int main(){

   bool b1 = true;
   bool b2 = false;

   cout << "b1 && b2: " << (b1&&b2) << endl; //b1 && b2: 0
   cout << "b1 || b2: " << (b1||b2) << endl; //b1 || b2: 1
   cout << "!(b1 && b2): " << !(b1&&b2); //!(b1 && b2): 1

   return 0;
}