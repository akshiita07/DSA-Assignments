/*
1) using LINKED LIST Develop a menu driven program demonstrating the following operations on simple
Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().

*/

#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(struct node *qu,int x){
	//check if full
	qu=new node;
	if(qu==NULL){
		cout<<"new node not created- q is full- overflow"<<endl;
	}
	else{
		qu->data=x;
		qu->next=NULL;
		
		if(front==NULL){
			front=rear=qu;
		}
		else{
			rear->next=qu;
			rear=qu;
		}
		
	}
}

void dequeue(struct node *qu){
	int x=-1;
	//check if empty
	if(front==NULL){
		cout<<"q is empty- underflow"<<endl;
	}
	else{
		qu=front;
		x=qu->data;
		front=front->next;
		free(qu);
	}
	cout<<"Dequeued element is: "<<x<<endl;
}

void isEmpty(struct node qu){
	if(front==NULL){
		cout<<"empty"<<endl;
	}
	else{
		cout<<"not empty"<<endl;
	}
}

void isFull(struct node *qu){
	qu=new node;
	if(qu==NULL){
		cout<<"full"<<endl;
	}
	else{
		cout<<"not full"<<endl;
	}
}

void display(struct node *qu){
	qu=front;
	while(qu!=NULL){
		cout<<qu->data<<"	";
		qu=qu->next;
	}
	
}

void peek(struct node qu,int pos){
	
}


int main()
{
	
	struct node qu;
	
	int op;
	while(true){
		
		cout<<"Enter the operation you want to perform on stack: "<<endl
			<<"1 for enqueue"<<endl<<"2 for dequeue"<<endl<<"3 for isEmpty"<<endl<<"4 for isFull"<<endl<<"5 for display"<<endl<<"6 for peek"<<endl;
		cin>>op;
		
		switch(op){
			
			case 1:
				int num;
				cout<<"Enter element to be enqueued "<<endl;
				cin>>num;
				enqueue(&qu,num);
				break;
				
			case 2:
				dequeue(&qu);
				break;
				
			case 3:
				isEmpty(qu);
				break;
				
			case 4:
				isFull(&qu);
				break;
				
			case 5:
				display(&qu);
				break;
				
			case 6:
				int pos;
				cout<<"Enter position to be peeked: "<<endl;
				cin>>pos;
				peek(qu,pos);
				break;
		}
	}






	return 0;
}

