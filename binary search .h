#ifndef binary search_h
#define binary search_h
#include <iostream>
class binary search 
{
  public:
    virtual void preorder Traversal()=0;
    virtual void add (int data) =0;
    virtual bool search(int data)=0;
    virtual int min(int index) =0;
};
#endif
