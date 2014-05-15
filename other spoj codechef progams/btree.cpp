#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
	int data;
	struct node * right;
	struct node * left;	
	};

struct node * insert(struct node *p,int data1)
{
	struct node *temp;
	temp=(node *)malloc(sizeof(struct node));
	temp->data=data1;
	temp->right=NULL;
	temp->left=NULL;
	if(p==NULL)
	{return temp;
		}
	else
	{
		if(data1>p->data)
			{
				p->right=insert(p->right,data1);
				return p;
			}
		else if(data1<p->data)
			{
				p->left=insert(p->left,data1);
				return p;
			}
		else
			{
				cout<<"node alreay present";
			}
	}
		return p;
}

int inorder(struct node * p)
{if(p!=NULL)
{
cout<<p->data<<"\t";
inorder(p->left);
inorder(p->right);
}
return 1;
}


int preorder(struct node * p)
{if(p!=NULL)
{

inorder(p->left);cout<<p->data<<"\t";
inorder(p->right);
}
return 1;
}




int postorder(struct node * p)
{if(p!=NULL)
{

inorder(p->left);
inorder(p->right);cout<<p->data<<"\t";
}
return 1;
}




struct node * deletenode(struct node *p,int data1)
{
	if(p==NULL)
	cout<<"empty";
	else
		{
			
		if(data1>p->data)
			{
				p->right=deletenode(p->right,data1);
				return p;
			}
		else if(data1<p->data)
			{
				p->left=deletenode(p->left,data1);
				return p;
			}
		else if(data1==p->data)
			{
			}
			
			
		}
	
	
	
	
}







int main()
{
	struct node * btree;
	btree=NULL;
	btree=insert(btree,7);
	btree=insert(btree,6);
	btree=insert(btree,9);
	btree=insert(btree,3);
	btree=insert(btree,8);
	inorder(btree);cout<<endl;
	preorder(btree);cout<<endl;
	postorder(btree);
	
	
}
