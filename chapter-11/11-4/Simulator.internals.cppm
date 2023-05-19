export module Simulator:internals;

import <iostream>;

export namespace Simulator {
  double convertMilesToKm(double miles){
    return 1.6*miles;
  }
} // namespace Simulator