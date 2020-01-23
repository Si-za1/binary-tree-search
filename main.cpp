#include"bstl.h"
#include"binarysearchtree.h"
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
    

ArrayBST a;
	a.add(15);
	a.add(14);
	a.add(10);
	a.add(6);

	
	for(int i=0; i<MAXSIZE;i++){
		std::cout<<a.element[i];
	}
	std::cout<<std::endl;
	
	a.preorderTraversal(10);
	
    if(a.search(12)){
        std::cout<<" 12 in BST"<<std::endl;
    }
    else{
        std::cout<<"12 not present in BST"<<std::endl;
    }

}
