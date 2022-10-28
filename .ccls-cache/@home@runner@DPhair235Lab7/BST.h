#ifndef BST_H_
#define BST_H_

#include "BSTInterface.h"
#include "Node.h"

using namespace std;

class BST : public BSTInterface {
protected:
	Node *root = NULL;
public:
	BST();
	~BST();
	Node *getRootNode() const;
	bool add(int data);
	bool remove(int data);
	void clear();
};

#endif