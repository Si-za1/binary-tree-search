#ifndef BinaryTree_h
#define BinaryTree_h
class BinaryTree 
{
  public:
    virtual void preorder Traversal()=0;
    virtual void add (int data) =0;
    virtual bool search(int data)=0;
}
