#include"bstl.h"
#include"binary_search_tree.h"
#include <iostream>
using namespace std;

int main() {
	linked_BST tree;
	tree.add(10);
	tree.add(14);
	tree.add(5);
	tree.add(6);
	tree.add(1);
	tree.add(12);
	tree.add(15);
	tree.preorderTraversal();
    }
    



