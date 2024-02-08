// Ambuigity in Multiple Inheritance

#include <iostream>
using namespace std;

class A {
  void display() { cout << "Class A" << endl; }
};

class B {
  void display() { cout << "Class B" << endl; }
};

class C : public A, public B {};

int main() {
  C c1;
  c1.display();
  return 0;
}
