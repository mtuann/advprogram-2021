#include <iostream>
#include <vector>

using namespace std;

bool is_even(int i) {
	return (i % 2) == 0;
}

template <typename InputIt, typename funType>
int count_occurrences(InputIt begin, InputIt end, funType fun) {

	int count = 0;
	for (auto iter = begin; iter != end; ++iter) {
		if (fun(*iter)) count += 1;
	}

	return count;
}


int main(int argc, char const *argv[]){
	vector<int> v = {1, 2, 3, 4, 5, 6, 8, 12, 14};

	// cout << count_occurrences(v.begin(), v.end(), is_even) << endl;
	
	// Lambda function
	// []: lambda capture
	auto print_int = [](int x) {
		cout << "int value: " << x << endl;
	};

	// print_int(56);
	// print_int(78);

	int limit = 100;
	auto is_greater_than = [limit](int x) {
		return (x > limit);
	};

	cout << is_greater_than(102) << endl;

	cout << is_greater_than(96) << endl;

	int count_4 = count_if(v.begin(), v.end(), [](int a){
		return (a >= 4);
	});

	cout << "Number of element greater or equal 4 is: " << count_4 << endl;

	for_each(v.begin(), v.end(), [](int i){
		cout << i << " ";
	}); 
	cout << endl;

	sort(v.begin(), v.end(), [](const int& a, const int& b){
		return a > b;
	});

	for_each(v.begin(), v.end(), [](int i){
		cout << i << " ";
	}); 
	cout << endl;



	return 0;
}
