#include "BST.h"

/* * * * * * * * * * * * * */
Node* BST::getRootNode() const {
	return root;		// return the pointer to the root node
}

/* * * * * * * ADD * * * * * * */
bool BST::add(int data) {
	return add(this->root, data);	// call the other insert
}

bool BST::add(Node*& curr_root, int data) {
	if(curr_root == NULL) {		// if the tree is empty
		curr_root = new Node(data);	// insert the claue as the root, L,R&Parent deafult to NULL
		return true;	//success
	}
	else {
		if (data < curr_root->data) {	// if value less than stored data
			return add(curr_root->left, data);	// search and insert to Left
		}
		else if (data > curr_root->data) {	// if value greater than stored data
			return add(curr_root->right, data);	// search and insert to right
		}
		else {		// otherwise, it's a match
			return false;	// failure
		}
	}
}

/* * * * * * * REMOVE * * * * * * */
bool BST::remove(int data) {
	return remove(this->root, data);
}

bool BST::remove(Node*& curr_root, int data) {
	if (curr_root == NULL) {
		return false;
	}
	else {
		if(data < curr_root->data) {
			return remove(curr_root->left, data);
		}
		else if (data > curr_root->data) {
			return remove(curr_root->right, data);
		}
		else {
			Node* old_root = curr_root;
			if (curr_root->left == NULL) {
				curr_root = curr_root->right;
			}
			else if (curr_root->right == NULL) {
				curr_root = curr_root->left;
			}
			else {
				newPar(old_root, old_root->left);
			}
			delete old_root;
			return true;
		}
	}
}

void BST::newPar(Node*& old, Node*& curr) {
	if (curr->right != NULL) {
		newPar(old,curr->right);
	}
	else {
		old->data = curr->data;
		old = curr;
		curr = curr->left;
	}
}

/* * * * * * * * * * * * * */
void BST::clear() {
	cout << "entered the clear" << endl;
	clear(root);
	root = NULL;
	
	// Walk through the whole thing in a postorder and delete as you go
	}

void BST::clear(Node* curr_root) {
	if(curr_root != NULL) {
		clear(curr_root->left);
		clear(curr_root->right);
		delete curr_root;
	}
}
