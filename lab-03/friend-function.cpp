#include <iostream>
using namespace std;

class second;

class first {
private:
  int a;

public:
  first(int val1) { a = val1; }
  friend void add(first, second);
};

class second {
private:
  int b;

public:
  second(int val2) { b = val2; }
  friend void add(first, second);
};

void add(first obj1, second obj2) {
  cout << "Sum of a and b is: " << obj1.a + obj2.b << endl;
}

int main() {
  first obj1(10);
  second obj2(20);
  add(obj1, obj2);
  return 0;
}
