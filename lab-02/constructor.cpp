#include <iostream>
using namespace std;

class Test {
  int a, b;

public:
  // Default constructor
  Test() {
    a = 0;
    b = 0;
  }
  // Parameterized constructor
  Test(int x, int y) {
    a = x;
    b = y;
  }
  // Copy constructor
  Test(Test &t) {
    a = t.a;
    b = t.b;
  }
  void display() { cout << "a = " << a << " b = " << b << endl; }
};

int main() {
  Test t1, t2(10, 20), t3(t2);
  t1.display();
  t2.display();
  t3.display();
  return 0;
}
