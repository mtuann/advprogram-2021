// Num.h
#ifndef NUM_H
#define NUM_H

#include <iostream>
namespace mynum {
	template<typename T> 
	class Num {
	public:
		// Type aliases
		using value_type = T;

		// Special Member function: constructor + destructor
		Num(value_type value);
		~Num();

		// For debugging only

		void debug();
	private:
		value_type _value;
	};

}
#include "Num.cpp"
#endif /* NUM_H */