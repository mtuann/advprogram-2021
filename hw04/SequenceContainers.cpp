#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void printVector(std::vector<int> v, string vectorName="v") {
	cout << "vector: " << vectorName << " with size: " << v.size() <<  endl;

	for (size_t i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void printDeque(std::deque<int> v, string dequeName="v") {
	cout << "deque: " << dequeName << " with size: " << v.size() <<  endl;

	for (size_t i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[]){

	// Sequence containers
	// std::vector and std::deque

	// Container adaptors 
	// std::stack and std::queue  
	
	// Associative containers 
	// std::map and std::set

	// sequence container (vector, deque)
	std::vector<int> v={1, 10, 20};
	v.push_back(50);
	// v[3] = 50; undefined behavior
	printVector(v, "v");
	cout << v.empty() << endl;
	v.clear();
	printVector(v, "v");
	cout << v.empty() << endl;
	// lay phan tu thu i cua vector: v[i]
	// thay doi gia tri phan tu thu i: v[i] = new_value

	std::vector<int> v2={1, 10, 20};
	v2.push_back(50);

	v2.insert(v2.begin(), 7);
	printVector(v2, "v2");

	v2.insert(v2.begin() + 3, 37);
	printVector(v2, "v2");

	v2.erase(v2.begin() + 2);
	// vector.begin(): phan tu dau tien
	// vector.end(): dau hieu ket thuc vector
	printVector(v2, "v2");


	// container 02: deque
	std:deque<int> deque{5, 6};
	
	deque.push_front(3);
	deque.pop_back();
	printDeque(deque);
	
	deque.push_front(1);
	deque.push_back(20);
	printDeque(deque);
	
	deque.pop_front();
	deque.pop_back();
	printDeque(deque);

	return 0;	
}