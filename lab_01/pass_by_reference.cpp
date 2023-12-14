#include <iostream>
using namespace std;

void TSA(float r, float h, float &result) { result = 2 * 3.1415 * r * (r + h); }

int main() {
  float r = 5;
  float h = 10;
  float result;
  TSA(r, h, result);
  cout << "TSA of cylinder with radius " << r << " and height " << h << " is "
       << result << endl;
}
