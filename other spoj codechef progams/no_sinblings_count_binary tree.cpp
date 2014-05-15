//this program prints aal the nodes which has no siblings that is they are only child of their parent
#include <iostream>
using namespace std;
 
// A Binary Tree Node
struct node
{
    struct node *left, *right;
    int key;
};
 
// Utility function to create a new tree node
node* newNode(int key)
{
    node *temp = new node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}


int count(struct node * p)
{
	if(p==NULL)
	return 0;
	
	else
	if(p->right!=NULL && p->left!=NULL)
	{count(p->right);
	count(p->left);
		}
		
	if(p->right!=NULL && p->left==NULL)
	{	cout<<p->right->key<<" ";
		count(p->right);
		}
	
	if(p->right==NULL && p->left!=NULL)
	{	cout<<p->left->key<<" ";
		count(p->left);
		}
		
}



int main()
{
    // Let us create binary tree given in the above example
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->left->left = newNode(6);
    count(root);
    return 0;
}
