#pragma once

#include <iostream>

class List {
private:
	typedef struct node {
		int data;
		node* next;
	}*nodePtr;

	nodePtr head;
	nodePtr current;
	nodePtr temp;

public: 
	List();

	void AddNode(int data);
	void DeleteNode(int data);
	void Print();
};