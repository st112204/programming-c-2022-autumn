#pragma once
#include <iostream>

struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int data, Node* left = nullptr, Node* right = nullptr) : data(data), left(left), right(right) {}
};

class BTree {
private:
	Node* root;

	void Insert(Node*& root, Node* node);

	void Print(std::ostream& stream, Node*& root, int depth = 0);

	Node*& GetNode(Node*& root, int element);

	Node* Extract(Node*& root);

public:
	BTree() : root(nullptr) {}

	void Add(int data);

	void Remove(int data);

	bool Contains(int data);

	friend std::ostream& operator << (std::ostream& stream, BTree& tree);
};