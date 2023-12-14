#include <iostream>
using namespace std;
int &greatest1(int &a, int &b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}
int main() {
  int a, b;
  cout << "Enter 2 numbers:" << endl;
  cin >> a >> b;
  int &greatest = greatest1(a, b);
  cout << "The greatest is " << greatest;
  return 0;
}
