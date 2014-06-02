#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

struct node{

int data;
struct node * link;
};

int traverse(struct node *p)
{
	struct node * temp;
	temp=p;
	while(temp!=NULL)
		{cout<<temp->data<<"->";
		temp=temp->link;
		}
	cout<<"null"<<endl;
}

struct node * insert(struct node *p,int value)
{
	struct node * temp,* val;
	temp=p;
	while(p->link!=NULL)
		{
		p=p->link;
		}
	val=(node *)malloc(sizeof(struct node));
	val->data=value;
	val->link=NULL;
	p->link=val;
	return temp;
}



int main()
{
	struct node *p;
	p=NULL;
	p=(node *)malloc(sizeof(struct node));
	p->data=1;
	p->link=NULL;
	struct node *q,*q1;
	q=(node *)malloc(sizeof(struct node));
	q->data=2;
	q->link=NULL;
	p->link=q;
	q1=(node *)malloc(sizeof(struct node));
	q1->data=3;
	q1->link=NULL;
	p->link->link=q1;
	traverse(p);
	p=insert(p,12);
	traverse(p);
	
	
	
	
}

