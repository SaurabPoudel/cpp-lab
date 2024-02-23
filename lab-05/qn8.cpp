// WAP to scan details of 48 students and write it to a file student.txt. Also
// scan the details of students from the file and display to the console.
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream fout;
  fout.open("student.txt");
  if (!fout) {
    cout << "Error: File not found" << endl;
    return 1;
  }
  string name;
  int roll;
  float marks;
  for (int i = 0; i < 2; i++) {
    cout << "Enter name, roll and marks: ";
    cin >> name >> roll >> marks;
    fout << name << " " << roll << " " << marks << endl;
  }
  fout.close();
  ifstream fin;
  fin.open("student.txt");
  if (!fin) {
    cout << "Error: File not found" << endl;
    return 1;
  }
  for (int i = 0; i < 2; i++) {
    fin >> name >> roll >> marks;
    cout << "Name: " << name << " Roll: " << roll << " Marks: " << marks
         << endl;
  }
  fin.close();
  return 0;
}
