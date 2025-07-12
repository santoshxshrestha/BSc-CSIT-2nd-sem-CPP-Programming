#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream file("example.txt");
  string line;

  file >> line;
  cout << line << endl;

  file.close();
  cout << "word read successfully." << endl;

  return 0;
}
