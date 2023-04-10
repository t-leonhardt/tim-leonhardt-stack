#pragma once
#include "tim-leonhardt-stack-node.h"

using namespace std;

class Stack {
private:
	Node* top;
	int size; 

public:
	Stack() {
		top = nullptr;
		size = 0;
	}

	~Stack() {
		while (top != NULL)
		{
			Node* temp = new Node();
			temp = top;
			top = top->prev;
			delete temp;
		}
	}

	void pop() {
		if (top == nullptr)
			cout << "Element cannot be removed. The stack is empty" << endl;
		else
		{
			Node* temp = new Node();
			int topValue = top->data;
			temp = top;
			top = top->prev;
			delete temp;

			size--;
			cout << topValue << " has been removed" << endl;
		}
	}

	void push(int value) {
		Node* temp = new Node();
		temp->data = value;
		temp->prev = top;
		top = temp;
		size++;
		
		cout << value << " has been added" << endl;
	}

	void peek() {
		cout << "The top value is: " << top->data << endl;
	}

	void getSize() {
		cout << size;
		if (size > 1)
			cout << " elements are in the stack" << endl;
		else
			cout << " element is in the stack" << endl;
	}
};