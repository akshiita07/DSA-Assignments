/*
4. Write a program to convert an Infix expression into a Postfix expression. 
*/

#include<iostream>
#include<string.h>
using namespace std;

struct node{
	char data;
	struct node *next;	
}*top=NULL;

void push(int x){
	
	//check if stack is full if new node is not created
	struct node *t=new node;
	if(t==NULL){
		cout<<"stack is full! "<<endl;
	}
	else{
		t->data=x;
		t->next=top;
		top=t;
	}
	
}

char pop(){
	int x=-1;
	//check if stack is empty
	if(top==NULL){
		cout<<"stack is empty! "<<endl;
	}
	else{
		struct node *p;
		p=top;
		x=p->data;
		top=top->next;
		free(p);
	}
//	cout<<"Popped element ascii: "<<x<<" and char: "<<char(x)<<endl;
	return x;
	
}

int isEmpty(){
	if(top==NULL){
//		cout<<"stack is EMPTY"<<end;
		return 1;
	}
	else{
//		cout<<"not EMPTY"<<end;
		return 0;
	}
	
}

int stackTop(){
	//if stack is empty then no top
	if(top!=0){
		
		return top->data;
	}
	else{
		cout<<"empty stack"<<endl;
	}
}

int isOperand(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/'){
		return 0;
	}
	else{
		//it is an operand send to postfix
		return 1;
	}	
}

int preced(char x){
	if(x=='+' || x=='-'){
		return 1;
	}
	else if(x=='*' || x=='/'){
		return 2;		//higher precedence
	}
}

char* convert(char *infix){
	
	//create postfix char array of same length as infix
	char *postfix;
	int length=strlen(infix);
	postfix= new char[length+1];		//to add \0 also
	
	int i=0;	//infix
	int j=0;	//postfix
	
	//scan infix exp till null is encountered
	while(infix[i]!='\0'){
		
		//if it is operand then send to postfix
		if (isOperand(infix[i])){
			postfix[j++]=infix[i++];
		}
		else{
			//if it is operator then check precedence
			if(preced(infix[i])>preced(stackTop())){
				//simply push
				push(infix[i++]);
			}
			else{
				//pop out 
				postfix[j++]=pop();
			}
		}
	}
	//pop all remaining elements
	while(top!=0){
		postfix[j++]=pop();
	}
	
	//add null char at end
	postfix[j]='\0';
	
	return postfix;
}

int main()
{
	char *exp="a+b*c-d/e";
	
	char *postfix=convert(exp);

	cout<<endl<<"Postfix expression is: "<<postfix<<endl;


	return 0;
}

