#include <iostream>
using namespace std;
#define MAX 200
template <class T> class Stack1 {
  T arr[MAX];
  int top;

public:
  Stack1() { top = -1; }
  void push(T x) { arr[++top] = x; }
  T pop() { return arr[top--]; }
  int size() { return top + 1; }
};

int main() {
  Stack1<int> s1;
  s1.push(10);
  s1.push(20);
  s1.push(30);
  cout << s1.size() << " Size of stack\n";
  cout << s1.pop() << " Popped from stack\n";
  cout << s1.pop() << " Popped from stack\n";
  cout << s1.pop() << " Popped from stack\n";
  cout << s1.size() << " Size of stack\n";
  Stack1<char> s2;
  s2.push('a');
  s2.push('b');
  s2.push('c');
  cout << s2.size() << " Size of stack\n";
  cout << s2.pop() << " Popped from stack\n";
  cout << s2.pop() << " Popped from stack\n";
  cout << s2.pop() << " Popped from stack\n";
  cout << s2.size() << " Size of stack\n";
  return 0;
}
