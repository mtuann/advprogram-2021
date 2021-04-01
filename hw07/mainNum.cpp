#include <iostream>
#include "Num.h"

using namespace mynum;

int main() {

	Num<int> test(100);
	test.debug();

	Num<std::string> ts("TEST");
	ts.debug();
	return 0;
}