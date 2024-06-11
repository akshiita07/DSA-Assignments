/*
1. Develop a menu driven program demonstrating the following operations on a Stack using LINKED LIST:
(i) push(), (ii) pop(), (iii) isEmpty(), (iv) isFull(), (v) display(), and (vi) peek(). 
*/

#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
}*top=NULL;

//(i) push()
void push(int x){
	struct node *t=new node;
	//check if stack is full
	if(t==NULL){
		cout<<"New node not created ie stack is full: overflow "<<endl;
	}
	else{
		t->data=x;
		t->next=top;
		top=t;
	}
}

//(ii) pop()
void pop(){
	int x=-1;
	//check if stack is empty
	struct node *p=top;
	if(top==0){
		cout<<"no node exists ie underflow "<<endl;
	}
	else{
		top=top->next;
		x=p->data;
		free(p);
		
	}
	cout<<"The popped element is: "<<x<<endl;
}

//(iii) isEmpty()
void isEmpty(){
	if(top==NULL){
		cout<<"Empty stack "<<endl;
	}
	else{
		cout<<"not empty stack "<<endl;
	}
}

//(iv) isFull()
void isFull(){
	struct node *t=new node;
	if(t==NULL){
		cout<<"Full stack as new node is not created"<<endl;
	}
	else{
		cout<<"not full stack "<<endl;
	}
}

//(v) display()
void display(){
	struct node *p;
	p=top;
	while(p!=0){
		cout<<p->data<<"	";
		p=p->next;
	}
}

//(vi) peek()
void peek(int pos){
	//check if pos entered is valid or not
	//go to that pos by jumping pos-1 times
	struct node *p=top;
	for(int i=0; i<pos-1; i++){
		p=p->next;
	}
	
	if(p==NULL){
		cout<<"The element at position is invalid"<<endl;
		
	}
	else{
		cout<<"The element at position: "<<pos<<" is: "<<p->data<<endl;
		
	}
	
}

int main()
{
	int op;
while(true){
		
	
	cout<<"Enter the operation you want to perform on stack: "<<endl
		<<"1 for push"<<endl<<"2 for pop"<<endl<<"3 for isEmpty"<<endl<<"4 for isFull"<<endl<<"5 for display"<<endl<<"6 for peek"<<endl;
	cin>>op;
	

	

	switch(op){
		
		case 1:
			int num;
			cout<<"Enter element to be pushed: "<<endl;
			cin>>num;
			push(num);
			break;
			
		case 2:
			pop();
			break;
			
		case 3:
			isEmpty();
			break;
			
		case 4:
			isFull();
			break;
			
		case 5:
			display();
			break;
			
		case 6:
			int pos;
			cout<<"Enter position to be peeked: "<<endl;
			cin>>pos;
			peek(pos);
			break;
	}

}

	return 0;
}

