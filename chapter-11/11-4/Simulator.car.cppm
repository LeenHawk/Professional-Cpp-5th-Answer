export module Simulator:car;

import <iostream>;
import <format>;
import :internals;

export namespace Simulator {
class CarSimulator {
  public:
    CarSimulator() { std::cout << "It's a car simulator.\n"; };
    void setOdometer(double miles){
      std::cout<<std::format("The Odometer is {} km.\n",convertMilesToKm(miles));
    };
  };
} // namespace Simulator
