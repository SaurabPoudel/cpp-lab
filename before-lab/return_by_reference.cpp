#include <iostream>
using namespace std;

int &greater1(int &a, int &b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  cout << "Enter two numbers: ";
  int a, b;
  cin >> a >> b;
  int &greater_number = greater1(a, b);
  cout << "Greater number is " << greater_number << endl;
}
