#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

struct tree{
	
	int data;
	struct tree * right;
	struct tree * left;
	
};





struct tree * insert(int data1, struct tree * p)			//loop implementation 
{
	struct tree * temp;
	temp=(tree *)malloc(sizeof(tree));
	temp=p;
	while(p!=NULL)
	{
	if(p->data > data1)
	{
	p=p->left;
	}
	else
	if(p->data<data1)
	{
	p=p->right;
	}
	else
	{cout<<"duplicate entry! exiting...";
	return temp;
	}
			}
	struct tree * value;
	value=(tree *)malloc(sizeof(tree));
	value->data=data1	;		
	value->left=NULL;
	value->right==NULL;
	p=(tree *)malloc(sizeof(tree));
	p=value;
	


return p;
}



int traverse(struct tree *p)
{
	struct tree *t=p;
		
		if(p->left!=NULL)
		traverse(p->left);
		cout<<p->data<<" ";
		if(p->right!=NULL)
		traverse(p->right);	
	
	return 0;	
				
}




int main()
{
	int t;
	cin>>t;
	struct tree * p;
	p=NULL;
	p=insert(t,p);
	p=insert(t-1,p);
	p=insert(12,p);
	p=insert(1289,p);
	
	traverse(p);	
}

