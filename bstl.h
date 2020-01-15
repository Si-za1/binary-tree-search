#ifndef BSTL_H
#define BSTL_H

class node {
public:
	int info;
	node* right;
	node* left;
};
class linked_BST ::public BinarySearchTree{
public:
	node* root;
	linked_BST();
	void preorderTraversal();
	void add(int data);
	bool Search(int data);
	bool isEmpty();
};

#endif
