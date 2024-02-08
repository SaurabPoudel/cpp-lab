// Class to Class : WAP to convert polar coordinates to Cartesian (rectangular)
// coordinates using class to class conversion.

#include <cmath>
#include <iostream>
using namespace std;
class Polar;

class Cartesian {
  float x, y;

public:
  Cartesian() {
    x = 0;
    y = 0;
  }
  Cartesian(float x1, float y1) {
    x = x1;
    y = y1;
  };
  void display() { cout << "X = " << x << " Y = " << y << endl; };
};

class Polar {
  float r, theta;

public:
  Polar(float r1, float theta1) {
    r = r1;
    theta = theta1;
  }
  operator Cartesian() {
    float x = r * cos(theta);
    float y = r * sin(theta);
    return Cartesian(x, y);
  }
};

int main() {
  Polar p1(5, 30);
  Cartesian c1;
  p1 = Polar(5, 30);
  c1 = p1;
  c1.display();
  return 0;
}
