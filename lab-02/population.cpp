#include <iostream>
using namespace std;

class Human {
private:
  int age;
  int weight;
  static int population;

public:
  Human(int age, int weight) {
    this->age = age;
    this->weight = weight;
    population++;
  }

  void display() {
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
  }
  void displayPopulation() { cout << "Population: " << population << endl; }
};
int Human::population = 0;

int main() {
  Human h1(10, 20);
  Human h2(20, 30);
  Human h3(30, 40);
  h1.display();
  h2.display();
  h3.display();
  h3.displayPopulation();
  return 0;
}
