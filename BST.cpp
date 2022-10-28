#include "BST.h"

/* * * * * * * * * * * * * */
Node* BST::getRootNode() const {
	return root;		// return the pointer to the root node
}

/* * * * * * * * * * * * * */
bool BST::add(int data) {
	cout << "add" << endl;			//DEBUG
	Node *ptr = root;						// Create a ptr to walk through the BST

	if(ptr == NULL) {						// If the tree is empty...
		root = new Node(data);		// create a Node to hold the data value and have the root point to it
		return true;							// Exit the function successfully
	}
	else {													// If the tree is not empty...
		if(data == ptr->getData()) {			// If the parameter value is the same as what is stored in the current Node...
			return false;										// exit the function with false
		}
		else if(data < ptr->getData()) {		// If the parameter value is less that what is stored in the current Node...
			if(ptr->getLeftChild() != NULL) {	// If the left child of current node exists, 
				ptr = ptr->getLeftChild();			// update the ptr so that it points to the left child of the current Node
			}
			else {																				// Otherwise, ...
				ptr->setLeftChild(new Node(data,ptr,NULL,NULL)); // Create a new node that is stored as the left child of the current Node
				return true;																// exit the function with true
			}
		}
		else if(data > ptr->getData()) {			// If the parameter value is greater that what is stored in the current Node...
			if(ptr->getRightChild() != NULL){		// If the right child of current node exists, 
				ptr = ptr->getRightChild();				// update the ptr so that it points to the right child of the current Node
			}
			else {																					// Otherwise, ...
				ptr->setRightChild(new Node(data,ptr,NULL,NULL));	// Create a new node that is stored as the right child of the current Node
				return true;																	// exit the function with true
			}
		}
	}
}

/* * * * * * * * * * * * * */
bool BST::remove(int data) {
	cout << "remove" << endl;				// DEBUG
	Node *ptr = root;								// Create a ptr to walk through the BST
	
	if(root == NULL) {							// if the list is empty
		return false;									// exit the function with false
	}

	if(data == ptr->getData()) {		// if the parameter value matches the data stored at the Node
		Node *toReplace = ptr;				// save the current Node in a new ptr
		
		// save the current node in a ptr, find the next lowest value, replace the saved node, and then 
		// delete the node you used for the replacement
	}
	
	// if the list is empty, return false
	// otherwise, look for the value. If it's not there, return false
	// If you find it, save that node as 'old_root'. Then go down the left 
	// branch of that Node and find the rightmost Node without a right 
	// child in that branch. Save that one as 'local_root'. Replace the 
	// value in 'old_root' with the value in 'local_root' and delete the 
	// 'local_root' Node. Update its child/children so that its parent 
	// now points to it/them and it/they point to it
}

/* * * * * * * * * * * * * */
void BST::clear() {
	// Walk through the whole thing in a postorder and delete as you go
	}

/* * * * * * * * * * * * * */
Node* BST::comp(int data, Node* ptr) {
	if(data < ptr->getData()) {
		if(ptr->getLeftChild() == NULL) {
			return ptr;
		}
		else {
			comp(data,ptr->getLeftChild());
		}
	}	
	else if(data > ptr->getData()) {
		if(ptr->getRightChild() == NULL) {
			return ptr;
		}
		else {
			comp(data,ptr->getRightChild());
		}
	}
	else {
		return NULL;
	}
}
