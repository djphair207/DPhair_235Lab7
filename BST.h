#ifndef BST_H_
#define BST_H_

#include "BSTInterface.h"
#include "Node.h"

using namespace std;

class BST : public BSTInterface {
protected:
	Node *root;
public:
	BST(){
		root = NULL;
	};
	~BST() {};
	Node *getRootNode() const;
	bool add(int data);
	bool remove(int data);
	void clear();
	Node* comp(int data, Node* ptr);
};

#endif