// By default, if you don’t define any constructor, the compiler automatically
// provides a default constructor for you.
// BUT…
// If you define any other constructor(like a copy constructor or
// C++ stops giving you the default
// constructor automatically.
// so we must define it ourself

// BUT…
#include <iostream>

using namespace std;

class Vehicle {
public:
  int wheels;
  Vehicle() {};

  Vehicle(Vehicle &obj) {
    wheels = obj.wheels;
    cout << "This is called copy "
            "constructro\n";
  }
};

int main() {
  Vehicle bike;
  bike.wheels = 2;
  cout << "Bike has " << bike.wheels << "wheels\n";

  Vehicle cycle(bike);
  cout << "cycle has" << cycle.wheels << "wheels\n";

  return 0;
}
