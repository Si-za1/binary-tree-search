#ifndef BINARY_SEARCHT_REE_H
#define BINARY_SEARCH_TREE_H
#include<iostream>

class BinarySearchTree{
public:
    virtual void preorderTraversal()=0;
    virtual void add(int data)=0;
    virtual bool Search(int data)=0;
    virtual  int max()=0;
};

#endif 
