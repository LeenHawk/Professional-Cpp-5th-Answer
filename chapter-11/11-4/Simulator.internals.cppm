export module Simulator:internals;

import std;

export namespace Simulator {
  double convertMilesToKm(double miles){
    return 1.6*miles;
  }
} // namespace Simulator