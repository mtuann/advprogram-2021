#include <iostream>
#include <string>

using namespace std;

// Struct and Type
struct  Student {
	string name; // ten
	string state; // dia chi
	int age;

	void print() {
		cout << "Name: " << name << " State: " << state << " Age: " << age << endl;

	}
};



int main() {
	cout << "Initialization and References" << endl;

	Student s;
	s.name = "Tuan";
	s.state = "Hanoi";
	s.age = 30;
	s.print();

	pair<bool, Student> query_result;
	
	query_result.first = true;

	query_result.second = s;
	
	cout << query_result.first << endl;
	query_result.second.print();

	auto a = 3;// (type deduction)
	auto b = 4.3;
	auto c = "String_C";
	cout << a << " " << b << " " << c << endl;
	
	auto d = make_pair(3, "Hello_D");
	int d_first = d.first;
	string d_second = d.second;
	cout << d_first << " " << d_second << endl;

	auto [da, db] = d;
	cout << da << " " << db << endl;
	
	// cout << d.first << " " << d.second << endl;

	return 0;
}