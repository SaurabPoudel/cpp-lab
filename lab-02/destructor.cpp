#include <iostream>
using namespace std;

class Test {
public:
  Test() { cout << " Instantiating the class Test()" << endl; }
  ~Test() { cout << " Calling Destructor ~Test() " << endl; }
};

int main() {
  Test t1;
  Test t2;
  return 0;
}
