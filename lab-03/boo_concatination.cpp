#include <iostream>
using namespace std;

class Word {
private:
  string word;

public:
  Word(string w) : word(w) {}
  void display() { cout << "Word: " << word << endl; }
  friend void operator+(Word &w1, Word &w2);
};

void operator+(Word &w1, Word &w2) { w1.word += w2.word; }

int main() {
  Word w1("C++");
  Word w2("Programming");
  w1.display();
  w2.display();
  w1 + w2;
  w1.display();
  return 0;
}
