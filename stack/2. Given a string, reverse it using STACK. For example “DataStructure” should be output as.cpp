/*
2. Given a string, reverse it using STACK. For example “DataStructure” should be output as 
“erutcurtSataD.” 
*/

#include<iostream>
using namespace std;

struct node{
	char data;
	struct node *next;
}*top=NULL;

void display(){
	
	struct node *p;
	p=top;
	while(p!=NULL){
		cout<<p->data<<"	";
		p=p->next;
	}
}

void push(int x){
	
	//check if stack is full by creating a new node
	struct node *t=new node;
	if(t==NULL){
		cout<<"stack is full: overflow"<<endl;
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
		cout<<"stack is empty: underflow"<<endl;
	}
	else{
		struct node *p=top;
		x=p->data;
		top=top->next;
		free(p);
		
	}
//	cout<<"Element popped is: "<<char(x)<<endl;
	return x;
}

void rev(char exp[]){
	
	for(int i=0 ; exp[i]!='\0'; i++){
		push(exp[i]);
	}
	for(int i=0 ; exp[i]!='\0'; i++){
		exp[i]=pop();
	}
	cout<<"reversed str: "<<exp;
}

int main()
{
//	char exp[100];
//	cout<<"enter expression ";
//	cin>>exp;

	char exp[]="DataStructure";
	
	rev(exp);
	display();



	return 0;
}

