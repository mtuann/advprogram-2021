// vector.h
#ifndef BOUNDED_VECTOR_H // include guard
#define BOUNDED_VECTOR_H
#include <iostream>

namespace mycollection {
	template<typename T> 
	class vector {
	public:
		// Type aliases
        using value_type = T;

        // Special Member Functions
        vector(value_type value);
        ~vector();

        // For Debugging Only
        void debug();

	private:
		value_type _value;

	};

}

#include "vector.cpp"
#endif /* BOUNDED_VECTOR */