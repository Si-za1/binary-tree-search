#include"array.h"
#include<iostream>
Array BST:: Array BST()
  {   
	for (int i=0;i<MAXSIZE ;i++)
	{
	this-> element[0]=0;
	  }
}
 ArrayBST::~ArrayBST();
{
}
void arrayBST:: add(int data)
{
	//algo 
	if(this-element[0]==0)
    this->element [1]=data;
}
  else {
  	//find correct position to insert the data
  	for(int i=1; i<=MAX_SIZE;)
  	{
  		 if(data<this->elements[i])
  		 { 
  		   //insert to the left 
  		     i=2*i;
		   }
	  else {
	  	i=2*i+1;
	  }
	  if(this-element[i]==0)
	   {
	   	 this->element[i]=data;
	   	 break;
	   }
	  
	  }
 int ArrayBST::get_right_child(int index)
 {
	 if(element [index]!=0 && (2*index+1<=MAXSIZE))
	 { 
		 return 2*index+1;
                          }
	  return -1;
  }
 int ArrayBST::get_left_child(int index)
 {
	 if (element [index]!=0)&& (2*index<=MAXSIZE))
	 {
		 return 2* index;
	 }
	   return -1;
}
	  void ArrayBST::preorder Traversal(int index)
	  {
		  if(index>0 &&element[index]!=0)
		  {
			  std::cout<<element[index]<<std::endl;
			  preorder Traversal ((get_left_child));
			  preorder Traversal ((get_right_child));
		  }
	  }
	  bool ArrayBST::search(int data)
	  {
		  int current_index=1;
		  while (current_index<=MAXSIZE)
		  {
			  if(element[current_index]==data)
			  {
				  return true;
				  break;
				 
			  }
                        elseif (element [current_index]>data)
			{
				 current_index= 2*current_index;
			}
			   elseif (element [current_index]<data)
			{
				 current_index= 2*current_index+1;
			}
		  }
		   return false;
	  }


