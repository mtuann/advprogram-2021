// Test.cpp
#include "Test.h"

template <>
void Test::function <char> (char data) {
    std::cout << "Call from Test.cpp with char Z" << std::endl;
}

template <>
void Test::function <std::string> (std::string data) {
    std::cout << "Call from Test.cpp with string test" << std::endl;
}