#include <iostream>
using namespace std;
inline float simpleInterestCalc(float P, float t, float R = 15) {
  return (P * t * R) / 100;
}
int main() {
  cout << "The simple interest is " << simpleInterestCalc(1000.0, 2);
  return 0;
}
