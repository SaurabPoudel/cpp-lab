#include <iostream>
using namespace std;

class counter {
private:
  int count;

public:
  counter() : count(0) {}
  void operator--() { --count; }
  void operator--(int) { count--; }
  void display() { cout << "Count: " << count << endl; }
};

int main() {
  counter c1, c2;
  c1.display();
  c2.display();
  --c1;
  c2--;
  c1.display();
  c2.display();
  return 0;
}
