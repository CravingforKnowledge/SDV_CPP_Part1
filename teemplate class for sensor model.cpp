#include <iostream>
#include <string>
void dummy_calibrate(void *input, void *output, void *pmin, void *pmax)
{
  *(float *)output = (*(float *)input - *(float *)pmin) / ((*(float *)pmax - *(float *)pmin) / 100);
}

template <typename T1 = float, int InitValue = 0>
class sensor
{
  std::string name;
  std::string unit;
  T1 value, min, max;
  void (*calibrate)(void *, void *, void *, void *);
  bool status;
  T1 calibrated_value;

public:
  sensor() {}
  sensor(std::string pname, std::string punit, void (*calibrate_fun)(void *, void *, void *, void *), T1 pmin, T1 pmax) : name(pname), unit(punit), value(InitValue), min(pmin), max(pmax), calibrate(calibrate_fun), status(false), calibrated_value(InitValue) {}
  void read()
  {
    int adc_count;
    std::cout << "adc_count:";
    std::cin >> adc_count;
    value = adc_count * 0.0048; // voltage
    calibrate(&value, &calibrated_value, &min, &max);
    status = value >= min && value <= max;
  }
  void display()
  {
    // calibrate(&value, &calibrated_value, &min, &max);
    std::cout << "\nName:" << name << "\nvalue:" << value << "(" << min << "-" << max << ")" << "\nstatus:" << (status ? "valid" : "invalid") << "\ncalibrated value:" << calibrated_value << unit << std ::endl;
  }
};

int main()
{
  sensor<float, 0> pedal_sensor("pedal_sensor", "%", dummy_calibrate, 1.0f, 4.0f);
  pedal_sensor.read();
  pedal_sensor.display();
}
