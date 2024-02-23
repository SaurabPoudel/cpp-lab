// WAP to implement the concept of function template overloading.

#include <stdio.h>

template <class T> T area(T l, T b) { return l * b; }
template <class T> T area(T l) { return l * l; }

int main() {
  printf("Area of rectangle with sides 5 and 10 is %d\n", area(5, 10));
  printf("Area of rectangle with sides 5.5 and 10.5 is %f\n", area(5.5, 10.5));
  printf("Area of square with side 5 is %d\n", area(5));
  return 0;
}
