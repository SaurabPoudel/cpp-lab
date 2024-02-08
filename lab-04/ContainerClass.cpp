#include <bits/stdc++.h>
using namespace std;
class Container {
private:
  vector<int> elements;

public:
  void addElement(int element) { elements.push_back(element); }

  void removeElement(int index) {
    if (index >= 0 && index < elements.size()) {
      elements.erase(elements.begin() + index);
    } else {
      std::cout << "Index out of range." << std::endl;
    }
  }

  void displayElements() {
    std::cout << "Elements in the container:" << std::endl;
    for (int element : elements) {
      std::cout << element << " ";
    }
    std::cout << std::endl;
  }
};

int main() {
  Container container;

  container.addElement(10);
  container.addElement(20);
  container.addElement(30);

  container.displayElements();

  container.removeElement(1);

  container.displayElements();

  return 0;
}
