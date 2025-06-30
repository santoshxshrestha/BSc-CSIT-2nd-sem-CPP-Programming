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
  EnergySource *basePtr;
  MotorCycle motor_cycle;
  basePtr = &motor_cycle;
  basePtr->energy_source();
  motor_cycle.motor_cycle();

  cout << "-------------------------------------------\n";
  CableCar cable_car;
  basePtr = &cable_car;
  basePtr->energy_source();
  cable_car.energy_source();

  return 0;
}
