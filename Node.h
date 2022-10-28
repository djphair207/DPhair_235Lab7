#ifndef NODE_H_
#define NODE_H_

#include "NodeInterface.h"		// Include the interface file

using namespace std;		// Use the standard namespace

class Node : public NodeInterface {
private:						// Each Node will contain...
	int data;					// the data specific to the node
	Node *prev;				// a pointer to the node before this one
	Node *left;				// a pointer to the node down to the left
	Node *right;			// a pointer to the node down to the right

public:
	Node(const int& the_data, Node* parent = NULL, Node* leftChild = NULL, Node* rightChild = NULL):	// Base Constructor
		data(the_data) {prev = parent; left = leftChild; right = rightChild;};			// Constructor overloaded for given values
	~Node() {};		
	int getData() const;
	Node *getLeftChild() const;
	Node *getRightChild() const;
	Node *getParent();
	// Node*& getLeftChildRef();
	// Node*& getRightChildRef();
	// Node*& getParentRef();
	void setData(int value);
	void setLeftChild(Node *ptr);
	void setRightChild(Node *ptr);
	void setParent(Node *ptr);
};

#endif