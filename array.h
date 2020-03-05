#include "binarysearchtree.h"
#define MAX_SIZE 100

class ArrayBST: public BinarySearchTree{
	
	public:
		ArrayBST();
		~ArrayBST();
		void preorderTraversal();
		void preorderTraversal(int index);
		void inorderTraversal();
		void inorderTraversal(int index);
		void add(int data);
		bool search(int data);
		int get_left_child(int index);
		int get_right_child(int index);
		int max();
		int max(int index);
		
		int element[MAX_SIZE];
		int min(int index);
		int min();
		void delete_node();
		void delete_node(int index,int key);
};
