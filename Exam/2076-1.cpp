#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
  int tid;
  string subject;

  void setData(int id, string subject) {
    this->tid = id;
    this->subject = subject;
  }

  void display() {
    cout << "the id of the teacher is " << tid << endl;
    cout << "the subject that the teacher teaches is " << subject << endl;
  }
};

class Staff {
public:
  int sid;
  string position;

  void setData(int id, string position) {
    this->sid = id;
    this->position = position;
  }

  void display() {
    cout << "the id of the staff is " << sid << endl;
    cout << "the position that the staff has " << position << endl;
  }
};

class Coordinator : public Staff, public Teacher {
public:
  string department;

  void setData(string department) { this->department = department; }

  void display() {
    cout << "the department o fthe coordinator is " << department << endl;
  }
}

int main() {
  Coordinator Santosh;
  Santosh.setData(Science);
  Santosh.display();

  Coordinator Anish;
  Anish.setData(csit);
  Ansih.display();
  return 0;
}
