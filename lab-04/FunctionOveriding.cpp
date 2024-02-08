// example of function overiding

#include <iostream>
using namespace std;

class A {
public:
  void display() { cout << "Class A" << endl; }
};

class B : public A {
public:
  void display() { cout << "Class B" << endl; }
};

int main() {
  B b1;
  b1.display();
  b1.A::display();
  return 0;
}
