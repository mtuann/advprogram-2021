#include <iostream>
#include <vector>
using namespace std;

int doubleValue(int& x) { // clone (copy) cua x (myValue)
	// khi truyen tham chieu &
	// thi x trong ham se la mot (alias - ten goi khac cua myValue)
	x = x * 2;
	cout << "myValue in function DoubleValue: " << x << endl;
	return x;
}

void printVector(std::vector<int> v) {
	cout << "Size of v: " << (int)v.size() << endl;
	for (int i = 0; i < (int)v.size(); ++i) {
		cout << v[i] << " "; 
	}
	cout << endl;
}


int main() {

	int myValue = 5;
	int result = doubleValue(myValue);

	cout << "myValue: " << myValue << " result: " << result << endl;

	int a = 2;
	int&b = a;
	cout << "b = " << b << " a = " << a << endl;

	b = 5;
	cout << "b = " << b << " a = " << a << endl;

	a = 7;
	cout << "b = " << b << " a = " << a << endl;

	std::vector<int> original{1, 2}; // [1, 2]

	std::vector<int> copy = original;

	std::vector<int>& ref = original; // gan con tro

	original.push_back(3); // [1, 2, 3]

	copy.push_back(4); // [1, 2, 4]


	ref.push_back(5); // [1, 2, 3, 5]
	// original, ref, copy
	printVector(original);
	printVector(copy);
	printVector(ref);

	ref = copy; // ref value = [1, 2, 4] // gan gia tri

	ref.push_back(6);
	cout << "Print after push_back 6 to ref" << endl;
	printVector(original);
	printVector(copy);
	printVector(ref);

	// ref, copy, original 

	// int& thisWontWork = a;

	// Const vector
	cout << "Demo using const vector" << endl;
	std::vector<int> vec{1, 2 , 3};
	const std::vector<int> c_vec{7, 8};

	std::vector<int>& ref_vec = vec;


	auto copy_ref = ref_vec;
	cout << "copy_ref value:" << endl;
	printVector(copy_ref);
	copy_ref.push_back(12);
	printVector(copy_ref);
	printVector(ref_vec);
	

	
	return 0;

	const std::vector<int>& ref_c_vec = vec;
	vec.push_back(4);
	ref_vec.push_back(5);

	// ref_c_vec.push_back(6);
	
	printVector(ref_vec);
	printVector(ref_c_vec);

	// printVector(vec);
	// printVector(c_vec);
	// printVector(ref_vec);
	// printVector(ref_c_vec);
	


	return 0;
}