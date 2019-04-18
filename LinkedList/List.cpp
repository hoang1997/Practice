#include <iostream>

#include "List.h";

using namespace std;

List::List() {
	head = NULL;
	current = NULL;
	temp = NULL;
}

void List::AddNode(int data) {
	nodePtr n = new node;
	n->next = NULL;
	n->data = data;

	if (head != NULL) {
		current = head;

		while (current->next != NULL) {
			current = current->next;
		}
		current->next = n;
	} 
	else {
		head = n;
	}
}

void List::DeleteNode(int data) {
	nodePtr delPtr = NULL;
	temp = head;
	current = head;

	while (current != NULL && current->data != data) {
		temp = current;
		current = current->next;
	}

	if (current == NULL) {
		cout << data << " not found" << endl;
		delete delPtr;
	}
	else {
		delPtr = current;
		current = current->next;
		temp->next = current;
		if (delPtr == head) {
			head = head->next;
			temp = NULL;
		}

		delete delPtr;
		cout << "The value " << data << " was deleted" << endl;
	}
}

void List::Print() {
	current = head;
	while (current != NULL) {
		cout << current->data << endl;
		current = current->next;
	}
}