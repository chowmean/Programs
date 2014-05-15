#include<iostream>
using namespace std;
struct node {
       struct node *lchild;
       char data;
       struct node *rchild;
            };
            
int insertroot(struct node *ptr,int info)
{
ptr->data=info;
ptr->rchild=NULL;
ptr->lchild=NULL;
    }

int insertrchild(struct node *ptr,int info)
{struct node *temp;
temp=ptr;

}	
	
int preorder(struct node *ptr)
{if(ptr==NULL)
return 0;
cout<<ptr->data;
preorder(ptr->lchild);
preorder(ptr->rchild);
return 1;    }
    
int inorder(struct node *ptr)
{if(ptr==NULL)
return;
inorder(ptr->lchild);
cout<<data;
inorder(ptr->rchild);
return 1;
    }
    
int postorder(struct node *ptr)
{if(ptr==NULL)
return;
postorder(ptr->lchild);
postorder(ptr->rchild);
cout<<ptr->data;
return 1;    }
