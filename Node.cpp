#include "Node.h"

int Node::getData() const {
	return data;
}

void Node::setLeftChild(Node *ptr) {
	left = ptr;
}

void Node::setRightChild(Node *ptr) {
	right = ptr;
}

Node* Node::getLeftChild() const {
	return left;
}

Node* Node::getRightChild() const {
	return right;
}

void Node::setData(int value) {
	data = value;
}