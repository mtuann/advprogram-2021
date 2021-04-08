#include <iostream>


using namespace std;

struct Node {
	int value;
	Node* next;
	// Node* prev;
};

void printLinkList(Node* head) {
	// cout << "printLinkList" << endl;
	for (Node* p = head; p != NULL; p = p->next) {
		cout << p -> value << " ";
	}
	cout << endl;
}

void appendNode(Node** head, int newValue) {
	// chen vao cuoi danh sach lien ket gia tri Node(newValue)
	Node *newNode = new Node();
	newNode -> value = newValue;
	newNode -> next = NULL;

	if (*head == NULL) {
		*head = newNode;
		// cout << "Set new head: " << newValue << endl;
		return;
	}
	// cout << "Append new Node: " << newValue << endl;
	// Node *previousNode = head;
	for (Node* p = *head; p != NULL; p = p->next) {
		if (p->next == NULL) {
			// vi tri can them vao
			p->next = newNode;
			break;
		}
		// cout << p->value << endl;
	}

}


int main() {

	// Node *head = new Node();
	// head -> value = 
	Node *head = NULL;

	Node *previousNode = NULL;

	for (int i = 0; i < 10; ++i) {
		Node *newNode = new Node();
		newNode -> value = i;
		newNode -> next = NULL;

		if (head == NULL) {
			head = newNode;
		} else {
			previousNode->next = newNode;	
		}
		previousNode = newNode;
	}
	// printLinkList(head);

	head = NULL;
	for (int i = 20; i < 25; ++i) {
		appendNode(&head, i);
		printLinkList(head);
	}
	// printLinkList(head);
	// printLinkList(head);




	return 0;
}