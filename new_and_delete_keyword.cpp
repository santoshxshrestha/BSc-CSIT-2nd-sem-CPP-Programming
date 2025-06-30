#include <iostream>
using namespace std;

int main() {
  // Dynamically allocate memory for one integer
  int *ptr = new int;

  // Assign value
  *ptr = 42;

  // Use the value
  cout << "Value: " << *ptr << endl;

  // Free the memory
  delete ptr;

  return 0;
}
