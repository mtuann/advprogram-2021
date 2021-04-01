// Test.h
#ifndef TEST_H
#define TEST_H
#include <iostream>

class Test{

  public:
  	template <typename T>
    void function (T data) {
    	std::cout << "Call Test.h: " << data << std::endl;
    }

};

// template <>
// void Test::function <char> (char data);

#endif // TEST_H