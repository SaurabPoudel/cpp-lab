#include <iostream>
using namespace std;

class Length {
private:
  int feet;
  int inches;

public:
  Length() {
    feet = 0;
    inches = 0;
  }
  Length(int f, int i) {
    feet = f;
    inches = i;
  }
  Length add(Length l1) {
    Length temp;
    // please note that this also generates carry over to feet if inches > 12
    temp.inches = inches + l1.inches;
    temp.feet = feet + l1.feet + (temp.inches / 12);
    temp.inches = temp.inches % 12;
    return temp;
  }
  void display() {
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
  }
};

int main() {
  Length l1(10, 5);
  Length l2(5, 10);
  Length l3;
  l3 = l1.add(l2);
  l3.display();
  return 0;
}
