#include <iostream>
using namespace std;

template <typename T> int sum(T a, T b) { return a + b; }
int main() {
  int a = 43;
  int b = 2;
  cout << "the sum of the two number is " << sum<int>(a, b) << endl;
  return 0;
}
