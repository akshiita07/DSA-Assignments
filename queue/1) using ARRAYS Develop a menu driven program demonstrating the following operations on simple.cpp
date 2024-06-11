/*
1) using ARRAYS Develop a menu driven program demonstrating the following operations on simple
Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().

*/

#include<iostream>
using namespace std;

struct queue{
	int *q;
	int front;
	int rear;
	int size;
};

void create(struct queue *qu){
	cout<<"Enter size of array: "<<endl;
	cin>>qu->size;
	
	qu->q=new int[qu->size];
	qu->front=qu->rear=-1;
} 

//display()
void display(struct queue qu){
	cout<<"Displaying elements: "<<endl;
	for(int i=qu.front+1; i<=qu.rear ; i++){
		cout<<qu.q[i]<<"	";
	}
	cout<<endl;
}

//enqueue()
void enqueue(struct queue *qu,int x){

	//check if full
	if(qu->rear==qu->size-1){
		cout<<"queue is full:overflow"<<endl;
	}
	else{
		qu->rear++;
		qu->q[qu->rear]=x;
	}
}

//dequeue()
void dequeue(struct queue *qu){
	int x=-1;
	//check if empty
	if(qu->rear==qu->front){
		cout<<"queue is empty: underflow"<<endl;
	}
	else{
		x=qu->q[qu->front+1];
		qu->front++;
	}
	cout<<"The dequeued element is: "<<x<<endl;
}

//isEmpty()
void isEmpty(struct queue qu){
	if(qu.front==qu.rear){
		cout<<"empty queue"<<endl;
	}
	else{
		cout<<"not empty"<<endl;
	}
	
}

//isFull()
void isFull(struct queue qu){
	if(qu.rear==qu.size-1){
		cout<<"full queue"<<endl;
	}
	else{
		cout<<"not full"<<endl;
	}
}

//peek()
void peek(struct queue qu,int pos){
	//check if pos is valid
	if(pos<=0 || pos>qu.size){
		cout<<"enter valid position! "<<endl;
	}
	else{
		int x;
		x=qu.q[pos-1];
		cout<<"The peeked element at "<<pos<<" is: "<<x<<endl;
		
	}
	
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
				isEmpty(qu);
				break;
				
			case 4:
				isFull(qu);
				break;
				
			case 5:
				display(qu);
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

