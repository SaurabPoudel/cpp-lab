#include <iostream>
using namespace std;

class second;

class first {
private:
  int a;

public:
  first(int val1) { a = val1; }
  void show(second);
};

class second {
private:
  int b;

public:
  second(int val2) { b = val2; }
  friend class first;
};

void first::show(second obj2) { cout << "Obj2 b is " << obj2.b << endl; }

int main() {
  first obj1(10);
  second obj2(20);
  obj1.show(obj2);
  return 0;
}
