#include "BST.h"

Node* BST::getRootNode() const {
	return root;		// return the pointer to the root node
}

bool BST::add(int data) {
	Node *ptr = root;						// Create a ptr to walk through the BST
	bool duplicate = false;			// Create a bool to determine if you found a duplicate
	bool leaf = false;
	if(ptr == NULL) {						// If the tree is empty...
		root = new Node(data);		// create a Node to hold the data value and have the root point to it
		return true;							// Exit the function successfully
	}
	else {											// Otherwise...
		while(!duplicate || !leaf) {		// while you haven't found a duplicate and haven't hit a leaf 
			if(ptr->getLeftChild() == NULL && ptr->getRightChild() == NULL) {	// check if the current Node is a leaf
				if(data == root->getData()) {			// che
				duplicate = true;
				}
				leaf = true;
			}
			if(data == ptr->getData()) {
				duplicate = true;
			}
			else if(data < ptr->getData()) {
				ptr = ptr->getLeftChild();
			}
			else {
				
			}
		}
	}
	// if the list is empty, make a new Node that holds the value 
	// and make it the root of the BST
	// Otherwise, check the data value against the root and all the other 
	// Nodes until you find where it's supposed to go. If you find a 
	// duplicate, return false. if not, make a new Node where the value
	// should go
}

bool BST::remove(int data) {
	// if the list is empty, return false
	// otherwise, look for the value. If it's not there, return false
	// If you find it, save that node as 'old_root'. Then go down the left 
	// branch of that Node and find the rightmost Node without a right 
	// child in that branch. Save that one as 'local_root'. Replace the 
	// value in 'old_root' with the value in 'local_root' and delete the 
	// 'local_root' Node. Update its child/children so that its parent 
	// now points to it/them and it/they point to it
}

void clear() {
	// Walk through the whole thing in a postorder and delete as you go
}