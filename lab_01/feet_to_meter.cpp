#include <iostream>
using namespace std;

class Length {
  float feet;

public:
  Length(float feet1) { feet = feet1; }
  float feetToMeter() { return (1 / 3.28) * feet; }
};
int main() {

  Length l(6);
  cout << "Meter :" << l.feetToMeter();
  return 0;
}
