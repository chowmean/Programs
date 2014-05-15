#include<iostream>
#include<cstdio>
#include<malloc.h>
using namespace std;

struct node 
{
	int data;
	struct node * link;
};

node* newNode(int key)
{
    node *temp = new node;
    temp->data = key;
    temp->link = NULL;
    return temp;
}

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->link;
    }cout<<endl;
}

int workingfunction(struct node * l)
{		struct node * p;
		p=(node *)malloc(sizeof(node));
		p=l;
		int flag=0;
		struct node *temp,*add;add=temp;
		struct node *rev,*add2;add2=rev;
		while(p!=NULL)
		{
			if(flag=0)
			{flag=1;
			//temp=(node *)malloc(sizeof(node));
			temp=p;
			p=p->link;
			//temp=temp->link;
			temp->link=NULL;
			}
			
			
			if(flag=1)
			{flag=0;
			//rev=(node *)malloc(sizeof(node));
			rev=p;
			p=p->link;
			//rev=rev->link;
			rev->link=NULL;
			}
			
			}
	printList(temp);
	printList(rev);
		
}



int main()
{
	node *root = newNode(1);
    root->link = newNode(2);
    root->link->link = newNode(3);
    root->link->link->link = newNode(4);
    root->link->link->link->link = newNode(5);
    root->link->link->link->link->link = newNode(6);
	workingfunction(root);
	printList(root);
	
}
