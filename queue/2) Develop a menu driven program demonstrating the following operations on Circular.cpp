/*
2) Develop a menu driven program demonstrating the following operations on Circular 
Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek()
*/

#include<iostream>
using namespace std;

struct queue{
	int front;
	int rear;
	int size;
	int *q;
};

void create(struct queue *qu){
	cout<<"enter size"<<endl;
	cin>>qu->size;
	qu->q=new int[qu->size];
	qu->front=qu->rear=0;
}

void display(struct queue *qu){
	int i=qu->front+1;
	
	do{
		cout<<qu->q[i]<<"	";
		i=(i+1)%qu->size;
	}while(i!=(qu->rear+1)%qu->size);
	
}

void enqueue(struct queue *qu,int x){
	//check if full
	if((qu->rear+1)%qu->size==qu->front){
		cout<<"queue is full"<<endl;
	}
	else{
		qu->rear=(qu->rear+1)%qu->size;
		qu->q[qu->rear]=x;
	}
	
}

void dequeue(struct queue *qu){
	int x=-1;
	//check if empty
	if(qu->front==qu->rear){
		cout<<"queue is empty"<<endl;
	}
	else{
		x=qu->q[qu->front+1];
		qu->front=(qu->front+1)%qu->size;
	}
	cout<<"dequeue element is: "<<x<<endl;
}

void isEmpty(struct queue *qu){
	if(qu->front==qu->rear){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"not empty"<<endl;
		
	}
	
}

void isFull(struct queue *qu){
	if((qu->rear+1)%qu->size==qu->front){
		cout<<"queue is full"<<endl;
	}
	else{
		cout<<"not full"<<endl;
		
	}
}

void peek(struct queue qu,int pos){
	
}


int main()
{
	struct queue qu;
	create(&qu);
	
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
				isEmpty(&qu);
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

