#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
  int id;
  string subject;

  void setData(int id, string subject) {
    this->id = id;
    this->subject = subject;
  }

  void display() {
    cout << "the id of the teacher is " << id << endl;
    cout << "the subject that the teacher teaches is " << subject << endl;
  }
};
int main() {
  Teacher santosh;
  santosh.setData(44, "rust");
  santosh.display();
  return 0;
}
