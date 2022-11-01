#ifndef NODE_H_
#define NODE_H_

#include "NodeInterface.h"		// Include the interface file

using namespace std;		// Use the standard namespace

class Node : public NodeInterface {
public:						
// Each Node will contain...
	int data;					// the data specific to the node
	Node *parent;				// a pointer to the node before this one
	Node *left;				// a pointer to the node down to the left
	Node *right;			// a pointer to the node down to the right
// Member Functions
	Node(const int& the_data, Node* parent_ptr = NULL, Node* leftChild = NULL, Node* rightChild = NULL){	// Base Constructor
		data = the_data;
		parent = parent_ptr;
		left = leftChild;
		right = rightChild;
	};
	~Node() {};		
	int getData() const;
	Node *getLeftChild() const;
	Node *getRightChild() const;
	
};

#endif