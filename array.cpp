#include"array.h"
#include<iostream>
array BST:: array BST()
  {
	this-> element[0]=0;
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
	  
}
int main()
{
	array BST a;
	a.add(15);
	a.add(5);
	a.add(13);
}
}
	
}
 

