#include <iostream>
#include "Test.h"


int main () {

	Test t = Test();
	t.function(15);
	t.function('a');
	t.function(std::string("CDEF"));
	
	return 0;
}
