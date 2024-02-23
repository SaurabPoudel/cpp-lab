// multiple exception catch

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int index;
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << " Enter index : ";
  cin >> index;
  try {
    if (index < 0) {
      throw " index underflow";
    }
    if (index >= size) {
      throw index;
    }
    cout << "Value at " << index << " is " << arr[index] << endl;
  } catch (const char *msg) {
    cout << "Error: " << msg << endl;
  } catch (int index) {
    cout << "Error: " << index << " is out of range" << endl;
  } catch (...) {
    cout << "Error: Unknown" << endl;
  }
  return 0;
}
