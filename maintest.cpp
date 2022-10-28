#include <iostream>
#include "BST.h"

using namespace std;

int main() {
	BST* BSTptr = new BST();
	BSTptr->add(1);
	Node* Nodeptr = BSTptr->getRootNode();
	cout << Nodeptr->getData() << endl;

	
	return 0;
}