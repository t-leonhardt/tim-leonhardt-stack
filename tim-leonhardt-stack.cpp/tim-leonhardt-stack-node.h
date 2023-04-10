#pragma once

class Node {
public:
	Node* prev;
	int data;

	Node() {
		prev = nullptr;
		data = 0;
	};
};