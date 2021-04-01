// vector.cpp
#include <iostream> 
using namespace mycollection;

template <typename T>
vector<T>::vector(T value) {
	_value = value;
}


template <typename T>
vector<T>::~vector() {

}

template <typename T>
void vector<T>::debug() {
    std::cout << _value << std::endl;
}