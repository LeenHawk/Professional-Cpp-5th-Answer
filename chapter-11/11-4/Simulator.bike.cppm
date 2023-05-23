export module Simulator:bike;

import std;
import :internals;

export namespace Simulator {
  class BikeSimulator {
    public:
      BikeSimulator() { std::cout << "It's a bike simulator.\n"; }
      void setOdometer(double miles){
        std::cout<<std::format("The Odometer is {} km.\n",convertMilesToKm(miles));
      };
  };
} // namespace Simulator