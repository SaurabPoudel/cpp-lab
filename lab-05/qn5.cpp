// WAP to implement rethrow exception
#include <iostream>
using namespace std;

void divide(int x, int y) {
  try {
    if (y != 0) {
      cout << "Result of division is " << x / y << endl;
    } else {
      throw y;
    }
  } catch (int i) {
    cout << "Caught exception in divide function" << endl;
    throw;
  }
}

int main() {
  try {
    divide(10, 0);
  } catch (int i) {
    cout << "Caught exception in main" << endl;
  }
  return 0;
}
