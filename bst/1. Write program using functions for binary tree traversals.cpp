/*
1. Write program using functions for binary tree traversals: 
Pre-order, In-order and Postorder using recursive approach.
*/

#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *lchild;
	struct node *rchild;
}*root=NULL;

struct node* newNode(int x){
	struct node *p=new node;
	p->data=x;
	p->lchild=p->rchild=NULL;
	return p;
}

void preOrder(struct node *p){
	if(p){
		cout<<p->data<<" ";
		preOrder(p->lchild);
		preOrder(p->rchild);
	}
}

void inOrder(struct node *p){
	if(p){
		inOrder(p->lchild);
		cout<<p->data<<" ";
		inOrder(p->rchild);
	}
}

void postOrder(struct node *p){
	if(p){
		postOrder(p->lchild);
		postOrder(p->rchild);
		cout<<p->data<<" ";
	}
}

int main()
{
	root=newNode(10);
	root->lchild=newNode(20);
	root->rchild=newNode(30);
	root->lchild->lchild=newNode(40);
	root->lchild->rchild=newNode(50);
	root->rchild->lchild=newNode(60);
	root->rchild->rchild=newNode(70);
	
	cout<<"Preorder: "<<endl;
	preOrder(root);
	cout<<"INorder: "<<endl;
	inOrder(root);
	cout<<"POSTorder: "<<endl;
	postOrder(root);

	return 0;
}

