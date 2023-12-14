#include <iostream>
using namespace std;
class Length {
  float feet;
  int inch;

public:
  Length(float feet1, int inch1) {
    feet = feet1;
    inch = inch1;
  }
  Length addLength(Length l) {
    Length temp(0, 0);
    temp.inch = inch + l.inch;
    temp.feet = feet + l.feet + temp.inch / 12;
    return temp;
  }
  void print() { cout << "Feet: " << feet << " inch: " << inch; }
};
int main() {
  Length len(2, 3);
  Length len1(4, 5);
  Length sum = len.addLength(len1);
  sum.print();
  return 0;
}
