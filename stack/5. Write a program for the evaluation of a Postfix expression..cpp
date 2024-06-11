/*
5. Write a program for the evaluation of a Postfix expression.
*/

#include<iostream>
using namespace std;

struct node{
	char data;		//data is char type but pop is integer type
	struct node *next;
}*top=NULL;

void push(int x){
	//check if full
	struct node *t=new node;
	if(t==NULL){
		cout<<"new node not created: stack is full- overflow"<<endl;
	}
	else{
		t->data=x;
		t->next=top;
		top=t;
	}
	
}

int pop(){
	//data is char type but pop is integer type
	int x=-1;
	//check if empty
	struct node *p;
	if(top==NULL){
		cout<<"stack is empty- underflow"<<endl;
	}
	else{
		p=top;
		x=p->data;
		top=top->next;
		free(p);
	}
	return x;
}

int isOperand(int x){
	if(x=='+' || x=='-' || x=='*' || x=='/'){
		return 0;
	}
	else{
		return 1;		//true cond then pop
	}
}

int eval(char *exp){
	//data is char type but pop is integer type so -ascii 0 ie 48
	int x1; 	//lhs ie 2nd pop
	int x2;		//rhs ie 1st pop
	int res;		//to store result
	
	//travere thru expression:
	for(int i=0; exp[i]!='\0'; i++){
	
		if(isOperand(exp[i])){
			push(exp[i]-'0');
		}
		else{
			//if it is operator
			x2=pop();
			x1=pop();
			
			switch(exp[i]){
				
				case '+':
					res=x1+x2;
					push(res);
					break;
					
				case '-':
					res=x1-x2;
					push(res);
					break;
					
				case '*':
					res=x1*x2;
					push(res);
					break;
				
				case '/':
					res=x1/x2;
					push(res);
					break;
			}
			
		}
		
	}
	
	return pop();
	
}


int main()
{
	char *exp="35*62/+4-";
	int x=eval(exp);
	cout<<"The value of postfix expression is: "<<x<<endl;



	return 0;
}

