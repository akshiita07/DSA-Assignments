/*
2.i. Search a given item (Recursive & Non-Recursive)
*/

#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *lchild;
	struct node *rchild;
}*root=NULL;

node* newNode(int x){
	struct node *p=new node;
	p->data=x;
	p->lchild=p->rchild=NULL;
	return p;
}

node* iSearch(struct node *p,int key){
	
	while(p!=NULL){
		if(p->data==key){
			return p;
		}
		else if(p->data>key){
			p=p->lchild;
		}
		else{
			p=p->rchild;
		}
	}
	
	return NULL;
}

node* rSearch(struct node *p,int key){
	
	if(p==NULL){
		//no node
		return NULL;
	}
	if(p->data==key){
		return p;
	}
	else if(p->data>key){
		rSearch(p->lchild,key);
	}
	else{
		rSearch(p->rchild,key);
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
	
	iSearch(root,10);


	return 0;
}

