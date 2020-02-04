#include"bstl.h"
#include"stack.h"
#include "binary_search_tree.h"
using namespace std;

linked_BST::linked_BST() {
	root = NULL;
}
void linked_BST::preorderTraversal() {
	stack s;
	s.push(root);
	node* obj;
	while (!s.isEmpty()) {
		obj=s.pop();
		cout << obj->info << " ";
		if (obj->right != NULL)	s.push(obj->right);
		if (obj->left != NULL)	s.push(obj->left);
	}
}
void linked_BST::add(int data) {
	if (isEmpty()) {
		root = new node();
		root->info = data;
	}
	else {
		node* newnode = root;
		node* pre = NULL;
		bool l = false;
		bool r = false;
		while (newnode != NULL) {
			pre = newnode;
			l = false;
			if (data < newnode->info) {
				newnode = newnode->left;
				l = true;
			}
			else if (data > newnode->info) {
				newnode = newnode->right;
			}
		}
		if (l) {
			node* n = new node;
			n->info = data;
			pre->left = n;
		}
		else {
			node* n = new node;
			n->info = data;
			pre->right = n;
		}
	}
}
bool linked_BST::Search(int data) {
	if (isEmpty()) {
		return false;
	}
	else {
		return true;
	}
}
bool linked_BST::isEmpty() {
	return root == NULL;
}
int linked_BST::max(){
	while(!isEmpty()){
		max=root->right;
	}
	if(isEmpty)

	max=root;
	}
	return  max;
}

int main() {
	linked_BST tree;
	tree.add(1);
	tree.add(2);
	tree.add(4);
	tree.add(3);
	if (tree.isEmpty())	cout << "empty";
	tree.max();
	return 0;
}

