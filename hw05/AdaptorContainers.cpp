#include <iostream>
#include <stack>
#include <queue>
using namespace std;


void StackExample() {
	// Stack: LIFO
	
	stack<int> ss;

	ss.push(1);
	ss.push(5);
	ss.push(100);

	while (!ss.empty()) {
		int v = ss.top();
		ss.pop();
		cout << "Top of Stack: " << v << endl;
	}

	ss.push(20);
	cout << ss.top() << endl;
	ss.pop();
	ss.push(25);
	cout << ss.top() << endl;

	// for (size_t i = 0; i < ss.size(); ++i) {
	// 	cout << ss[i] << " ";
	// }
	// cout << endl;
}

void QueueExample() {
	// Queue: FIFO
	queue<int> qq;

	for (int i = 0; i < 10; ++i) {
		qq.push(i);
	}

	// while (!qq.empty()) {
	// 	int v = qq.front();
	// 	qq.pop();
	// 	cout << "Front of queue: " << v << endl;
	// }

	qq.push(20);
	cout << qq.front() << endl;
	qq.pop();
	cout << qq.front() << endl;
	
}

int main() {
	
	// Sequence containers
	// std::vector and std::deque

	// Container adaptors 
	// std::stack and std::queue  
	
	// Associative containers 
	// std::map and std::set

	// StackExample();
	
	QueueExample();



	return 0;
}