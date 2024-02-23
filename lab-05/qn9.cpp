// WAP to scan details of 50 employees and write it to a file named
// employee.dat. Also scan the details of employee from the file and display the
// information of only those employees whose salary is between 25000 and 50000.

#include <fstream>
#include <iostream>
using namespace std;

class Employee {
public:
  char name[20];
  int age;
  float salary;
};

int main() {
  Employee emp[50];
  ofstream fout;
  fout.open("employee.txt");
  for (int i = 0; i < 2; i++) {
    cout << "Enter name: ";
    cin >> emp[i].name;
    cout << "Enter age: ";
    cin >> emp[i].age;
    cout << "Enter salary: ";
    cin >> emp[i].salary;
    fout.write((char *)&emp[i], sizeof(emp[i]));
  }
  fout.close();
  ifstream fin;
  fin.open("employee.txt");
  for (int i = 0; i < 2; i++) {
    fin.read((char *)&emp[i], sizeof(emp[i]));
    if (emp[i].salary >= 25000 && emp[i].salary <= 50000) {
      cout << "Name: " << emp[i].name << endl;
      cout << "Age: " << emp[i].age << endl;
      cout << "Salary: " << emp[i].salary << endl;
    }
  }
  fin.close();
  return 0;
}
