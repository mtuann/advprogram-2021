// Num.cpp
#include <iostream>

using namespace mynum;

// ham constructor
template <typename T>
Num<T>::Num(T value) {
	_value = value;
}

// ham deconstructor
template <typename T>
Num<T>::~Num() {
}

// ham in ra gia tri
template <typename T>
void Num<T>::debug() {
	std::cout << _value << std::endl;
}
