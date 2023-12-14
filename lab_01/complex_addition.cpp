#include <iostream>
using namespace std;

class Complex {
private:
  int real;
  int imag;

public:
  Complex(int r, int i) {
    real = r;
    imag = i;
  }

  Complex sum(Complex c) {
    Complex temp(0, 0);
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
  }
  void print() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
  Complex C(1, 2);
  Complex D(3, 4);
  Complex E = C.sum(D);
  E.print();
}
