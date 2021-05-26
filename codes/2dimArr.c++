#include <iostream>
using namespace std;

int main(){

   int arr[2][3] = {{15, 18, 12}, {22, 80, 50}};

   for(int i = 0; i < 2; i++){
      for(int j = 0; j < 3; j++){
        cout << "arr["<< i << "][" << j << "]: " << arr[i][j] << endl;
      }
   }
   /* Output:
   * 15
   * 18
   * 12
   * 22
   * 80
   * 50
   */
   return 0;
}