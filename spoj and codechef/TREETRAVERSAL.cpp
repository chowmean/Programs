//assignment 3.
//traversal of trees pre in and post methods
#include<iostream>
#include<malloc.h>

using namespace std;

struct gtreenode
{
	char info;
	struct gtreenode * father;
	struct gtreenode * son;
	struct gtreenode * next;
};
void tree(struct gtreenode ** gt)
{
struct gtreenode *ptr1,*temp ;
	*gt = ptr1 = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	ptr1->info='A';
	ptr1->father=NULL;
ptr1->next=NULL;
	temp = (struct gtreenode *)malloc(sizeof(struct gtreenode));
temp->info='B';
	temp->father=ptr1;
	ptr1->son=temp;
ptr1=temp;
	
temp = (struct gtreenode *)malloc(sizeof(struct gtreenode));
ptr1->son = temp;
temp->info = 'F';
	temp->father=ptr1;
	temp->son = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	temp->son->info='L';
	temp->son->father=temp;
	temp->son->next=NULL;
	temp->son->son=NULL;
	temp->next = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	temp->next->info='G';
	temp->next->father=NULL;
	temp->next->next=NULL;
	temp->next->son=NULL;
	
	ptr1->next = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	ptr1=ptr1->next;
	ptr1->info='C';
	ptr1->father=NULL;
	ptr1->son = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	temp=ptr1->son;	temp->info='H';
temp->father=ptr1;
	temp->son=NULL;
	temp->next = (struct gtreenode *)malloc(sizeof(struct gtreenode));;
	temp=temp->next;
	temp->info='I';
	temp->father=NULL;
	temp->son=NULL;
	temp->next = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	temp=temp->next;	temp->info='J';
	temp->father=NULL;
	temp->son=NULL;
	temp->next=NULL;
	
	ptr1->next = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	ptr1=ptr1->next;
	ptr1->info='D';
	ptr1->son=NULL;
	ptr1->father=NULL;
	
	ptr1->next = (struct gtreenode *)malloc(sizeof(struct gtreenode));
ptr1=ptr1->next;
	ptr1->info='E';
ptr1->father=NULL;
	ptr1->next=NULL;
ptr1->son = (struct gtreenode *)malloc(sizeof(struct gtreenode));
temp=ptr1;
	ptr1=ptr1->son;
	ptr1->info='K';
	ptr1->father=temp;
ptr1->next=NULL;	ptr1->son = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	temp=ptr1;
	ptr1=ptr1->son;	ptr1->info='M';
ptr1->son=NULL;	ptr1->father=temp;
	ptr1->next = (struct gtreenode *)malloc(sizeof(struct gtreenode));
	ptr1=ptr1->next;
ptr1->info='N';
	ptr1->son=NULL;
	ptr1->father=NULL;
ptr1->next = (struct gtreenode *)malloc(sizeof(struct gtreenode));
ptr1=ptr1->next;
	ptr1->info='O';
	ptr1->son=NULL;
ptr1->father=NULL;
	ptr1->next=NULL;
}

void preorder(struct gtreenode *p)
{
	if(p!=NULL)
	{
		cout<<p->info<<" ";
		preorder(p->son);
		preorder(p->next);
	}
}

void inorder(struct gtreenode *p)
{
	if(p!=NULL)
	{
		if(p->son==NULL)
			cout<<p->info<<" ";
		else
			inorder(p->son);
		if(p->father!=NULL)
			cout<<p->father->info<<" ";
		inorder(p->next);
	}
}

void postorder(struct gtreenode *p)
{
	if(p!=NULL)
	{
		postorder(p->son);
		cout<<p->info<<" ";
		postorder(p->next);
	}
}

int main()
{
	
	struct gtreenode *gtree;
	gtree = NULL;
	tree(&gtree);
	cout<<"First son of a node is  left child and all other as right child"<<endl<<endl<<endl;
	cout<<"In-order Traversal :"<<endl;
	inorder(gtree);
	cout<<endl<<"Pre-order Traversal :"<<endl;
	preorder(gtree);
	cout<<endl<<"Post-order Traversal :"<<endl;
	postorder(gtree);
	cout<<endl;
	system("pause");
}
