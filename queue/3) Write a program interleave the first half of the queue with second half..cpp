/*
3) Write a program interleave the first half of the queue with second half.
Sample I/P: 4 7 11 20 5 9
 Sample O/P: 4 20 7 5 11 9
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

Queue Interleave(Queue q, int n){
        Queue q1;
        Queue q2;
        Queue q3;
        int i;
        for(i=0;i<n/2;i++){
            q1.enqueue(q.dequeue());
        }
        for(;i<n;i++){
            q2.enqueue(q.dequeue());
        }
        for(i=0;i<n/2;i++){
            q3.enqueue(q1.dequeue());
            q3.enqueue(q2.dequeue());
        }
        return q3;
    }

int main()
{
	int A[6]={4,7,11,20,5,9};
    struct queue *qu;
    for(int i=0;i<6;i++){
        enqueue(&qu,A[i]);
    }
    display(&qu);
    cout<<"\nAfter Interleaving:\n";
    queue = queue.Interleave(queue, 6);
    queue.Display();


	return 0;
}

