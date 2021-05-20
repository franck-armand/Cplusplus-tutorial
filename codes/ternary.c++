#include <iostream>
using namespace std;

int main(){

  int num1, num2; num1 = 99;
  /* num1 is not equal to 10 that's why
   * the second value after colon is assigned
   * to the variable num2
   */
  num2 = (num1 == 10) ? 100: 200; //num2: 200

  cout << "num2: " << num2 << endl;
  /* num1 is equal to 99 that's why
   * the first value is assigned
   * to the variable num2
   */
  num2 = (num1 == 99) ? 100: 200;
  cout << "num2: "<<num2; //num2: 100

  return 0;
}