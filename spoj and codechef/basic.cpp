#include<iostream>
using namespace std;
struct node {
              int item;         // The data in this node.
            struct node *left;   // Pointer to the left subtree.
             struct node *right;  // Pointer to the right subtree.
           };
           
int preorder(struct node *ptr)
{if(ptr==NULL)
{cout<<"\n";
return 0;}
cout<<ptr->item<<" ";
preorder(ptr->left);
preorder(ptr->right);
return 1;    }

int inorder(struct node *ptr)
{if(ptr==NULL)
{cout<<"\n";
return 0;}
inorder(ptr->left);
cout<<ptr->item<<" ";
inorder(ptr->right);
return 1;
    }
    
int postorder(struct node *ptr)
{if(ptr==NULL)
{cout<<"\n";
return 0;}
postorder(ptr->left);
postorder(ptr->right);
cout<<ptr->item<<" ";
return 1;    }


    
    
int main()
{struct node *ptr;
ptr=new node;
ptr->item=0;cout<<ptr->item;
ptr->left=NULL;
ptr->right=NULL;
struct node *ptr1;
ptr1=new node;
ptr1->item=1;cout<<ptr1->item;
ptr1->left=NULL;
ptr1->right=NULL;
ptr->left=ptr1;    
struct node *ptr2;
ptr2=new node;
ptr2->item=2;cout<<ptr2->item;
ptr2->left=NULL;
ptr2->right=NULL;
ptr->right=ptr2;
struct node *ptr3;
ptr3=new node;
ptr3->item=3;cout<<ptr3->item;
ptr3->left=NULL;
ptr3->right=NULL;
ptr1->right=ptr3;
inorder(ptr);
postorder(ptr);
preorder(ptr);


int a;
cin>>a; 


return 0;   
    }
