module;

import std.core;
import std.io;

export module MyModule;

int hidden() {
    return 42;
}

export void printMessage() {
    std::cout << "The hidden value is " << hidden() << "\n";
}