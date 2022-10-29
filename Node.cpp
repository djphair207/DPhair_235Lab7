#include "Node.h"

int Node::getData() const {
	return data;
}

Node* Node::getLeftChild() const {
	return left;
}

Node* Node::getRightChild() const {
	return right;
}

Node* Node::getParent() {
	return prev;
}

Node*& Node::getLeftChildRef() {
	return left;
}

Node*& Node::getRightChildRef() {
	return right;
}

Node*& Node::getParentRef() {
	return prev;
}

void Node::setData(int value) {
	data = value;
}

void Node::setLeftChild(Node *ptr) {
	left = ptr;
}

void Node::setRightChild(Node *ptr) {
	right = ptr;
}

void Node::setParent(Node *ptr) {
	prev = ptr;
}