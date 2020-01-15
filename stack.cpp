
#include "stack.h"
#include<iostream>
using namespace std;

stack::stack() {
	top = -1;
}

stack::~stack() {}

void stack::push(node* element) {
	if (top >= MAX_SIZE - 1) {
		cout << "Cannot push" << element << ". Stack overflow." << endl;
	}
	else {
		top++;
		this->elements[top] = element;
	}
}

node* stack::pop() {
	if (isEmpty()) { 
		cout << "Stack underflow";
		return NULL;
	}
	else {
		return elements[top--];
	}
}

node* stack::Top() {
	if (isEmpty())	cout << "stack underflow" << endl;
	else return elements[top];
}

bool stack::isEmpty() {
	if (top < 0)	return true;
	else 		return false;
}

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    if(s.isFull()==1){
        cout<<"The stack is full"<<endl;
    }
    cout<<"The elements of stack are:"<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    if(s.isEmpty()==1){
        cout<<"The stack is empty"<<endl;
    }
    cout<<"The top most element is:"<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
}

