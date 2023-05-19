export module Simulator:bike;

import <iostream>;

export namespace Simulator {
  class BikeSimulator {
    public:
      BikeSimulator() { std::cout << "It's a bike simulator.\n"; }
  };
} // namespace Simulator