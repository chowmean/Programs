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
	struct tree * left;
	struct tree * right;
	
};

struct tree * make_tree(int * p)
{struct tree *final;
 final=(tree *)malloc(sizeof(tree));
 final->data=(*p);//cout<<final->data<<endl;
 final->right=NULL;
 final->left=NULL;
 for(int i=1;i<6;i++)
 {	struct tree *tree1;
 	tree1= final;
	while(tree1->right!=NULL && tree1->left!=NULL)
		{
		if(tree1->data > *(p+i))
			tree1=tree1->left;
		else
			tree1=tree1->right;
		}
		
	
		{struct tree *temp=(tree *)malloc(sizeof(tree));
		 	temp->data=*(p+i);
		 	temp->right=NULL;
		 	temp->left=NULL;	
		 	if(tree1->data > *(p+i))
			tree1->left=temp;                           
			else
			tree1->right=temp;
			//cout<<tree1->right->data<<endl;
		}
		
		
		
	
	}cout<<"a"<<endl;
	//cout<<final->right->data;
	return  final;
}


int view_binary_tree(struct tree *p)
{
	struct tree *t=p;
		
		if(p->left!=NULL)
		view_binary_tree(p->left);
		cout<<p->data<<" ";
		if(p->right!=NULL)
		view_binary_tree(p->right);	
	
	return 0;	
				
}


int level_order_traversal(struct tree * p)
{
	
	return 0;
}




int main()
{
	int t[]={12,1,4,2,6,8};
	int * p;
	p=t;
	struct tree * tree1;
	tree1=make_tree(p);
//	cout<<tree1->right->data;
	view_binary_tree(tree1);	
//	right_view(tree);
	
}

