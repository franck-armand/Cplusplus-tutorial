#include <iostream>
using namespace std;

class ParentClass {

  //data member
  public:
    int var1 =100;
};
class ChildClass: public ParentClass {
  public:
  int var2 = 500;
};
int main(void) {

  ChildClass obj;

}