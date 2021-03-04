#include <iostream>
#include <vector>
using namespace std;

int doubleValue(int& v) { // copy (clone)
	// khi truyen vao tham chieu
	// thi se thao tac truc tiep tren bien do
	v = v * 2;
	return v;
}

void printVector(std::vector<int> v, string vectorName="v") {
	cout << "vector: " << vectorName << " with size: " << v.size() <<  endl;

	for (size_t i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	
	int myValue = 10;

	int result = doubleValue(myValue);

	cout << "myValue: " << myValue << " result: " << result << endl;
	
	int a = 10;
	int& b = a; // b (alias cua a): ten goi khac cua bien a
	cout << "a = " << a << " b = " << b << endl;

	b = 30;
	cout << "a = " << a << " b = " << b << endl;

	a = 40;	
	cout << "a = " << a << " b = " << b << endl;

	std::vector<int> original{1, 2};

	std::vector<int> copy = original;

	std::vector<int>& ref = original;

	original.push_back(5); // [1, 2, 5, 5]
	copy.push_back(4); // [1, 2, 4]
	ref.push_back(5); // [1, 2, 5, 5]

	printVector(original, "original");
	printVector(copy, "copy");
	printVector(ref, "ref");

	ref = copy; // [1, 2, 4] gan gia tri
	// chu ko thay doi tham chieu no tro den
	// tham chieu tro den van la original
	ref.push_back(6);
	printVector(original, "original");
	printVector(copy, "copy");
	printVector(ref, "ref");

	// const vector
	std::vector<int> vec {1, 2, 3};
	const std::vector<char> con_vec {9, 10};

	std::vector<int>& ref_vec = vec;
	const std::vector<int>& con_ref_vec = vec;

	printVector(vec, "vec");
	printVector(ref_vec, "ref_vec");
	printVector(con_ref_vec, "con_ref_vec");

	vec.push_back(5);
	// con_vec.push_back(11);
	printVector(vec, "vec");
	printVector(con_ref_vec, "con_ref_vec");
	// con_ref_vec = con_vec;
	// printVector(con_ref_vec, "con_ref_vec");
	// printVector(con_vec, "con_vec");
	return 0;
}