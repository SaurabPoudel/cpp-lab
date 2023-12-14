#include <bits/stdc++.h>
using namespace std;
class Circle {
private:
  float r;

public:
  Circle(int r1) { r = r1; }
  void area() { cout << "Area " << r * r * 3.14 << endl; }
  void perimeter() { cout << "Perimeter" << 2 * 3.14 * r; }
};
int main() {
  Circle c(1);
  c.area();
  c.perimeter();
  return 0;
}
