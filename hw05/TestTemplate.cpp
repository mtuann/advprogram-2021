#include <iostream>

using namespace std;

template <typename T, typename U>
T my_min(const T& a, const U& b) {
	return a < b ? a : b;
}

int main() {
	string a = "Nim";
	string b = "Nam";
	// cout << my_min("Nikhil", "Ethan") << endl; // char* C-string, compare pointer
	// cout << my_min(5, 6) << endl;
	// cout << my_min(a, b) << endl;
	// cout << my_min('a', 'b') << endl;
	cout << my_min(4, 3.2) << endl;
	return 0;
}