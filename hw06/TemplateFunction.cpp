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

// Ham tong quat (generic function)
template <typename T, typename D> 
auto my_min(const T& a, const D& b) {
	return a < b ? a : b;
}


// template<typename DataType>
// int count_occurences(const vector<DataType>& vec, const DataType& val) {

// 	int count = 0;
// 	for (size_t i = 0; i < vec.size(); ++i) {
// 		if (vec[i] == val) count += 1;
// 	}
// 	return count;
// }

template <typename InputIt, typename DataType>
int count_occurrences(InputIt begin, InputIt end, const DataType& val) {

	int count = 0;
	for (auto iter = begin; iter != end; ++iter) {
		if (*iter == val) count += 1;
	}

	return count;
}




int main() {

	cout << my_min(4, 6) << endl;
	string a = "hanoi";
	string b = "hcm";
	cout << my_min(a, b) << endl;
	// cout << my_min("hanoi", "hcm") << endl;
	cout << my_min<string>("abde", "acef") << endl;
	// cout << my_min(string("abde"), string("acef")) << endl; 
	// char* (C-string)
	// string
	cout << my_min(4, 2.5) << endl;

	vector<string> v = {"test1", "test", "test", "test02"};

	// cout << count_occurences(v, string("test"));
	cout << count_occurrences(v.begin(), v.end(), string("test"));
	return 0;
}