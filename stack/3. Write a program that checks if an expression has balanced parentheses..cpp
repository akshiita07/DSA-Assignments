/*
3. Write a program that checks if an expression has balanced parentheses.
*/

#include<iostream>
using namespace std;

struct node{
	char data;
	struct node *next;
}*top=NULL;

void push(int x){
	
	//check if stack is full by creating a new node
	struct node *t=new node;
	if(t==NULL){
		cout<<"stack is full: overflow"<<endl;
	}
	else{
		
		//set data of new node
		t->data=x;
		
		//make it point on top
		t->next=top;
		
		//bring top on it
		top=t;
	}
}

void pop(){
	//take var x to store popped value
	int x=-1;
	
	//check if stack is empty
	if(top==NULL){
		cout<<"no elem in array ie stack is EMPTY: underflow "<<endl;
	}
	else{
		//come on d top pointer
		struct node *p=top;
		
		x=p->data;
		
		//make top point on next
		top=top->next;
		free(p);
		
	}
	cout<<endl<<"Popped element is: ASCII "<<x<<" char: "<<char(x)<<endl;
}

void display(){
	struct node *p=top;
	//print until u reach end
	while(p!=NULL){
		//print data
		cout<<p->data<<"	";
		//move p to next
		p=p->next;
	}
}

void isBalanced(char *exp){
	
	//traverse thru entire expression and push( and pop)
	for(int i=0; exp[i]!='\0'; i++){
		
		if(exp[i]=='('){
			push(exp[i]);
			display();
		}
		else if(exp[i]==')'){
			
			//check if stack already became empty ie all ( are popped and ) are left so unbalan
			if(top==NULL){
				cout<<"stack got empty before reaching end of expression: UNBALanced"<<endl;
				return;
			}
			else{
				pop();
				
			}
		}
	}
	
	//if stack is empty after this then balanced
	if(top==NULL){
		cout<<"Balanced parenthesis"<<endl;
	}
	else{
		cout<<"unBalanced parenthesis"<<endl;
		
	}
}

int main()
{
	char *exp="((a+b)*(c-d))";
	isBalanced(exp);
	
	
	return 0;
}

