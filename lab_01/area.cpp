#include <iostream>
using namespace std;

float area(int r) { return 3.14 * r * r; }
float area(float l) { return l * l; }
float area(float l, float b) { return l * b; }
int main() {
  float l1, l, b;
  int r;
  cout << "Enter radius of circle " << endl;
  cin >> r;
  cout << "Enter length of square" << endl;
  cin >> l1;
  cout << "Enter length and breadth of rectangle ";
  cin >> l >> b;
  cout << "Area of rectangle " << area(l, b) << endl;
  cout << "Area of circle " << area(r) << endl;
  cout << "Area of square " << area(l1) << endl;
  return 0;
}
