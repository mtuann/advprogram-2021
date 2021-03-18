#include <iostream>
#include <stack>
#include <queue>
using namespace std;


void StackExample() {
	// Stack: LIFO: last in first out

	stack<int> ss;

	// ss.empty(); : check stack co rong ko
	// ss.pop(): xoa bo phan tu top cua stack
	// ss.top(): lay gia tri phan tu o dinh cua stack
	// ss.push(): chen mot gia tri vao stack

	cout << ss.empty() << endl;

	for (int i = 10; i < 15; ++i) {
		ss.push(i);
	}

	cout << ss.top() << endl;
	ss.pop();

	cout << ss.top() << endl;
	ss.pop();

	while (!ss.empty()) {
		int v = ss.top();
		ss.pop();
		cout << "Top of Stack: " << v << endl;
	} 
}


void QueueExample() {
	// QUEUE: FIFO: first in first out
	queue<int> qq;

	// qq.pop(), qq.push(), qq.pop(), 
	// qq.front(): phan tu dinh cua queue

	for (int i = 1; i < 5; ++i) qq.push(i);

	cout << "Front queue: " << qq.front() << endl;
	qq.pop();


	cout << "Front queue: " << qq.front() << endl;
	qq.pop();

	qq.push(10);
	qq.push(25);
	qq.push(45);

	while (!qq.empty()) {
		cout << "Front queue: " << qq.front() << endl;
		qq.pop();
	}
	

}

int main() {
	// Container adaptors 
	// std::stack and std::queue  
	
	// StackExample();
	QueueExample();

	return 0;
}