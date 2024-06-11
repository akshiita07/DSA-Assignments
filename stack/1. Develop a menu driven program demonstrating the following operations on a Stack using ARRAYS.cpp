/*
1. Develop a menu driven program demonstrating the following operations on a Stack using ARRAYS:
(i) push(), (ii) pop(), (iii) isEmpty(), (iv) isFull(), (v) display(), and (vi) peek(). 
*/

#include<iostream>
using namespace std;

struct stack{
	int size;
	int top;
	int *s;
};

void push(struct stack *st,int x){
	
	//check if full
	if(st->top==st->size-1){
		cout<<"Overflow: stack is full"<<endl;
	}
	else{
		st->top++;
		st->s[st->top]=x;
	}
}

void pop(struct stack *st){
	int x=-1;
	//check if empty
	if(st->top==-1){
		cout<<"Underflow: stack is empty"<<endl;
	}
	else{
		x=st->s[st->top];
		st->top--;
	}
	cout<<"The popped element is: "<<x<<endl;
}

void isEmpty(struct stack *st){
	if(st->top==-1){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<"not empty"<<endl;
	}
}

void isFull(struct stack *st){
	if(st->top==st->size-1){
		cout<<"stack is full"<<endl;
	}
	else{
		cout<<"not full"<<endl;
	}
}

void display(struct stack *st){
	for(int i=st->top; i>=0; i--){
		cout<<st->s[i]<<"	";
	}
	cout<<endl;
	
}

void peek(struct stack *st,int pos){
	int x=-1;
	
	//check if pos entered is valid or not
	if(st->top-pos+1<0){
		cout<<"enter valid position: "<<endl;
	}
	else{
		x=st->s[st->top-pos+1];
	}
	cout<<"The element at position: "<<pos<<" and index: "<<st->top-pos+1<<"is: "<<x<<endl;
}

int main()
{
	struct stack st;
	//create stack array
	cout<<"Enter size of stack: "<<endl;
	cin>>st.size;
	st.s=new int[st.size];
	st.top=-1;
	
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
				push(&st,num);
				break;
				
			case 2:
				pop(&st);
				break;
				
			case 3:
				isEmpty(&st);
				break;
				
			case 4:
				isFull(&st);
				break;
				
			case 5:
				display(&st);
				break;
				
			case 6:
				int pos;
				cout<<"Enter position to be peeked: "<<endl;
				cin>>pos;
				peek(&st,pos);
				break;
		}

	}


	return 0;
}

