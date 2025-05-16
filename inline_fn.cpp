#include <iostream>
using namespace std;
inline int square(int x) { return x * x; }

int main() {
  cout << "The square of 4 is " << square(4) << ".\n";
  cout << "The square of 7 is " << square(7) << ".\n";
  return 0;
}
