#include <iostream>
using namespace std;

class Vector {
private:
  int x;
  int y;
  int z;

public:
  Vector() {
    x = 0;
    y = 0;
    z = 0;
  }
  Vector(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
  }
  Vector add(Vector v1) {
    Vector temp;
    temp.x = x + v1.x;
    temp.y = y + v1.y;
    temp.z = z + v1.z;
    return temp;
  }
  void display() {
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
  }
};

int main() {
  Vector v1(10, 5, 2);
  Vector v2(5, 10, 8);
  Vector v3;
  v3 = v1.add(v2);
  v3.display();
  return 0;
}
