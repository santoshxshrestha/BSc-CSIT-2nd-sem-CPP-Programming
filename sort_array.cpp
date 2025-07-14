#include <iostream>
int main() {
  int arr[] = {1, 2, 12, 121, 21, 21};
  int length = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < length - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      std::swap(arr[i], arr[i + 1]);
      i = -1;
    }
  };

  for (int i = 0; i < length; i++) {
    std::cout << arr[i] << " ";
  }
  return 0;
}
