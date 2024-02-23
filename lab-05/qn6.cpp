// WAP to catching all exception.

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  try {
    if (b == 0) {
      throw "Division by zero";
    }

    cout << "Division: " << a / b << endl;
  } catch (const char *msg) {
    cout << "Error: " << msg << endl;
  } catch (...) {
    cout << "Error: Unknown" << endl;
  }
  return 0;
}
