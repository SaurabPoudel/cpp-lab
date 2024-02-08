// Meter to feet

#include <iostream>
using namespace std;

class Feet;

class Meter {
  float m;

public:
  Meter() { m = 0; }
  Meter(float m1) { m = m1; }
  void display() { cout << "Meter = " << m << endl; }
};

class Feet {
  float f;

public:
  Feet() { f = 0; }
  Feet(float f1) { f = f1; }
  operator Meter() {
    float m = f / 3.2808;
    return Meter(m);
  }
};

int main() {
  Feet f1(5);
  Meter m1;
  m1 = f1;
  m1.display();
  return 0;
}
