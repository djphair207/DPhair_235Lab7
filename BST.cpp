#include "BST.h"

/* * * * * * * * * * * * * */
Node* BST::getRootNode() const {
	return root;		// return the pointer to the root node
}

/* * * * * * * * * * * * * */
bool BST::add(int data) {
	cout << "At the beginning of add" << endl;			//DEBUG
	Node *ptr = root;						// Create a ptr to walk through the BST
	Node *NullPtr = NULL;

	if(ptr == NULL) {						// If the tree is empty...
		cout << "tree was empty\n";
		root = new Node(data);		// create a Node to hold the data value and have the root point to it
		return true;							// Exit the function successfully
	}
	else {													// If the tree is not empty...
		ptr = findNode(data,ptr);			// call the recursive function that returns parent of value's position
		cout << "just returned the node ptr.\n\t" << ptr->getData() << " is stored in the node\n";
		if(ptr == NULL) {								// If the returned ptr is NULL,
			cout << "found a duplicate\n";
			return false;									// a duplicate was found, exit the function with false
		}
		else if(data < ptr->getData()) {	// if the parameter value is less than the data at the returned Node,
			cout << "data is less than the current node, saving as left child\n";
			Node *NN = new Node(data,ptr,NullPtr,NullPtr);		// create the new node with value and parent
			ptr->setLeftChild(NN);					// connect the new node to the tree as returned node's left child
			return true;										// exit the function with true
		}
		else if(data > ptr->getData()) {		// if the parameter value is greater than the data at returned Node,
			cout << "data is greater than the current node, saving as right child\n";
			Node *NN = new Node(data,ptr,NullPtr,NullPtr);		// create the new node with value and parent
			ptr->setRightChild(NN);									// connect new node to the tree as returned node's right child
			return true;														// exit the function with true
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
Node* BST::findNode(int data, Node* ptr) {
	if(data < ptr->getData()) {
		cout << data << " < " << ptr->getData() << endl;
		cout << "Going Left" << endl;
		if(ptr->getLeftChild() == NULL) {
			cout << "\tNo value found, returning the ptr to " << ptr->getData() << endl;
			return ptr;
		}
		else {
			cout << "\t\tRecursing with the left child\n";
			findNode(data,ptr->getLeftChild());
		}
	}	
	else if(data > ptr->getData()) {
		cout << data << " > " << ptr->getData() << endl;
		cout << "Going Right" << endl;
		if(ptr->getRightChild() == NULL) {
			cout << "\tNo value found, returning the ptr to " << ptr->getData() << endl;
			return ptr;
		}
		else {
			cout << "\t\tRecursing with the right child\n";
			findNode(data,ptr->getRightChild());
		}
	}
	else {
		cout << "value is a duplicate, returning NULL\n";
		return NULL;
	}
}
