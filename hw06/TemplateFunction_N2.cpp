#include <iostream>
#include <vector>
using namespace std;


// int my_min(int a, int b) {
// 	// if (a < b) return a;
// 	// else return b;
// 	return a < b ? a : b;
// }

// string my_min(string a, string b) {
// 	return a < b ? a : b; 
// }

// Generic function (ham tong quat)
template <typename T, typename D>
auto my_min(const T& a, const D& b) {
	return a < b ? a : b;
} 

// template <typename DataType>
// int count_occurrences(const vector<DataType>& vec, DataType val) {

// 	int count = 0;
// 	for (size_t i = 0; i < vec.size(); ++i) {
// 		if (vec[i] == val) count += 1;
// 	}

// 	return count;
// }

template <typename InputIt, typename DataType>
int count_occurrences(InputIt begin, InputIt end, DataType val) {

	int count = 0;
	for (auto iter = begin; iter != end; ++iter) {
		if (*iter == val) count += 1;
	}

	return count;
}


int main(int argc, char const *argv[]){
	
	// cout << my_min(10, 20) << endl;
	// cout << my_min(20, 20) << endl;
	// cout << my_min(30, 20) << endl;
	// cout << my_min(40, 30) << endl;

	// cout << my_min(4, 3.2) << endl;

	// string a = "hanoi";
	// string b = "hcm";

	// cout << my_min(a, b) << endl;
	
	// cout << my_min<string>("dan", "dbmc") << endl;

	// cout << my_min("dan", "dbmc") << endl; // char* (C string)
	
	vector<string> v = {"test1", "test", "test", "test02"};
	
	// vector<string> v;
	// cout << count_occurrences(v, string("test"));
	cout << count_occurrences(v.begin(), v.end(), string("test") );
	return 0;
}