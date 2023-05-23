export module Simulator;

import std;

export namespace Simulator{
    class CarSimulator{
        public:
            CarSimulator(){
                std::cout<<"It's a car simulator.\n";
            }
    };
    class BikeSimulator{
        public:
            BikeSimulator(){
                std::cout<<"It's a bike simulator.\n";
            }
    };
}