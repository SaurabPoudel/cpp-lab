// relational operator overloading of < operator
#include <iostream>
using namespace std;

class Distance {
private:
  int length;

public:
  Distance(int len1) { length = len1; }
  bool operator<(Distance d) {
    if (length < d.length) {
      return true;
    }
    return false;
  }
};

int main() {
  Distance d1(10), d2(20);
  if (d1 < d2) {
    cout << "d1 is less than d2" << endl;
  } else {
    cout << "d1 is not less than d2" << endl;
  }
  return 0;
}
