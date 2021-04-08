#include <iostream>

using namespace std;

struct Node {
	int value;
	Node* next;
	// Node *previous;
};

Node * newNode(int value) {
	Node* na = new Node();
	na -> value = value;
	na -> next = NULL;
	return na;
}

void printValue(Node* head) {
	for (Node *tmp = head; tmp != NULL; tmp = tmp->next) {
		cout << tmp->value << " ";
	}
	cout << endl;
}

void insertLastLinkedList(Node** head, int value) {
	Node *nn = newNode(value);
	if (*head == NULL) {
		*head = nn;
		return;
	}
	for (Node *tmp = *head; tmp != NULL; tmp = tmp->next) {
		if (tmp->next == NULL) {
			tmp -> next = nn;
			break;
		}
	}
}
int main() {
	
	Node *na = newNode(11);
	Node *nb = newNode(15);
	Node *nc = newNode(19);

	printValue(na);
	
	na -> next = nb;
	printValue(na);

	nb -> next = nc;
	printValue(na);

	printValue(nb);


	for (int i = 20; i < 50; i += 10) {
		insertLastLinkedList(&na, i);
		printValue(na);
	}

	return 0;
}