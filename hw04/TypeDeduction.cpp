#include <iostream>

using namespace std;

int main() {
	cout << "Type Deduction" << endl;

	auto a = 3;
	auto b = 4.3;
	auto c = "String_C_Variable";
	cout << a << " " << b << " " << c << endl;

	auto d = make_pair(3, "Hello");
	cout << d.first << " " << d.second << endl;

	auto [df, ds] = d;
	cout << "d.first: " << df << " d.second: " << ds << endl;
	
	return 0;
}