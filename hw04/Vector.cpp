#include <iostream>
#include <vector>
using namespace std;


void printVector(std::vector<int> v) {
	cout << "Size of v: " << (int)v.size() << endl;
	for (int i = 0; i < (int)v.size(); ++i) {
		cout << v[i] << " "; 
	}
	cout << endl;
}

// Struct and Type
struct  Student {
	string name; // ten
	string state; // dia chi
	int age;

	void print() {
		cout << "Name: " << name << " State: " << state << " Age: " << age << endl;

	}
};


// int a[101001];
// vector <int> a;

int main(){



	cout << "Initialization with vector\n";
	Student s {"Tuan", "Hanoi", 30};
	s.print();

	return 0;
	std::vector<int> v;
	printVector(v);
	// cout << "Size of v: " << (int)v.size() << endl;
	const int n = 5;
	const int k = 10;

	vector<int> v2(n);
	printVector(v2);

	std::vector<int> v3(n, k); // [10, 10 10, 10, 10]
	printVector(v3);
	// uniform Initialization
	std::vector<int> v4{n, k}; // [5, 10] - not the same v3 (v4 != v3)
	printVector(v4);

	int a{5};
	string c{"TEST_C"};
	std::vector<int> v5{2, 3, 4, 5};
	cout << a << " " << "string_c: " << c << endl;
	printVector(v5);

	return 0;
}