#include <iostream>
using namespace std;

class EnergySource {
public:
  virtual void energy_source() { cout << "This vehicle takes gas" << endl; }
};

class MotorCycle : public EnergySource {
public:
  void motor_cycle() { cout << "This is a MotorCycle" << endl; }
};

class CableCar : public EnergySource {
public:
  void energy_source() { cout << "This vehicle takes electricity" << endl; }
  void cable_car() { cout << "This is a cable car" << endl; }
};

int main() {
  MotorCycle motor_cycle;
  motor_cycle.motor_cycle();
  motor_cycle.energy_source();

  cout << "-------------------------------------------\n";

  CableCar cable_car;
  cable_car.cable_car();
  cable_car.energy_source();

  return 0;
}
