/*
4) Write a program to find first non-repeating character in a string using Queue. 
Sample I/P: a a b c Sample O/P: a -1 b b
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
	qu->front=qu->rear=-1;
}

void enqueue(struct queue *qu,int x){
	//if full
	if(qu->rear==qu->size-1){
		cout<<"full"<<endl;
	}
	else{
		qu->rear++;
		qu->q[qu->rear]=x;
	}
}

char dequeue(struct queue *qu){
	int x=-1;
	//if empty
	if(qu->front==qu->rear){
		cout<<"empty"<<endl;
	}
	else{
		x=qu->q[qu->front+1];
		qu->front++;
	}
	return x;
}

void display(struct queue *qu){
	for(int i=qu->front+1; i<=qu->rear; i++){
		cout<<qu->q[i]<<"	";
	}
	cout<<endl;
	
}

void firstNonRepeating(){
	
}



int main()
{
	struct queue *qu;
	


	return 0;
}

