//recurssive implementation of priority queue


#include<iostream>
#include<malloc.h>
using namespace std;
struct node 
{
	int data;
	int priority;
	struct node *link;
};

struct node * insert(struct node * p,int data1,int priority1)
{
	struct node *temp;
	temp=(node *)malloc(sizeof(struct node));
	temp->data=data1;
	temp->priority=priority1;
	if(p==NULL)
	{p=temp;
	p->link=NULL;
	return p;
		}
	else
	{
		if(p->priority<=priority1)
		{temp->link=p;
		return temp;
			}
		else
		if(p->priority>priority1)
		{
		p->link=insert(p->link,data1,priority1);
		return p;
			}
		}
}

int traversal(struct node *p)
{
	while(p!=NULL)
	{cout<<p->data<<"("<<p->priority<<") ->";
	p=p->link;
	}cout<<"NULL";
	cout<<endl<<endl;
	return 1;
}





using namespace std;
int main()
{
struct node *queue;

queue=NULL;
queue=insert(queue,1,1);
traversal(queue);
queue=insert(queue,5,5);
traversal(queue);
queue=insert(queue,4,4);
traversal(queue);	
queue=insert(queue,3,3);
traversal(queue);
queue=insert(queue,2,2);
traversal(queue);
	
}
