#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  try {
    if (num < 0) {
      throw num;
    }
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
  } catch (int num) {
    cout << "You have provided negative number and its square root is "
         << "j" << sqrt(-num) << endl;
  }
  return 0;
}
