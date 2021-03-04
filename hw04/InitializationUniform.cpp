#include <iostream>
#include <vector>
using namespace std;

void printVector(std::vector<int> v, string vectorName="v") {
	cout << "vector: " << vectorName << " with size: " << v.size() <<  endl;

	// for (int i = 0; i < (int)v.size(); ++i) {
	// 	cout << v[i] << " ";
	// }
	// cout << endl;
	for (size_t i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	// cout << v.size() - 1 << endl;
	// for (size_t i = 0; i <= v.size() - 1; ++i) {
	// 	cout << v[i] << " ";
	// }
	cout << endl;
}

struct Student {
	string name; // ten
	string state; // dia chi
	int age;

	void printStudent() {
		cout << "Name: " << name << " State: " << state << " age: " << age << endl;
	}
};

int main(){
	cout << "Initialization Uniform" << endl;
	// khoi tao dong nhat cacs loai bien khac nhau 
	// gia tri duoc dat trong dau {}

	int a{3};
	double c{5.5};
	pair<int, string> b{2, "Variable_b"};
	cout << a << " " << c << endl;
	cout << b.first << " " << b.second << endl;
	// vector; //int a[1000]
	
	std::vector<int> v;
	printVector(v);	
	int n = 5;
	int k = 10;
	std::vector<int> v2(n);
	printVector(v2, "v2");
	
	std::vector<int> v3(n, k);
	printVector(v3, "v3");

	std::vector<int> v4{n, k};
	printVector(v4, "v4");
	// std::vector<int> v{};
	// printVector(v, "v");

	Student s0{"Tuan", "Hanoi", 30};
	s0.printStudent();
	
	return 0;
}