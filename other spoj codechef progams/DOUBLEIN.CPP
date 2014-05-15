#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int info;
struct node *next,*previous;
};
node *p;
int num;


void create(node *p)
{

	char ch;
	num=0;
//p->previous=NULL;	
	printf("\npress e to continue any other to exit");
	ch=getchar();	
	if(ch=='e')
	{
	free(p);
	return;
	}
	do{
	printf("\nenter the value of %d node",(num+1));
	scanf("%d",&p->info);
	fflush(stdin);
	printf("\nenter y to continue");
	ch=getchar();
	if(ch=='y')
{
p->next=(node*)malloc(sizeof(node));
p->next->previous=p;
p=p->next;
}
num++;
}
while(ch=='y');
p->next=NULL;
printf("\ntotal number of nodes is %d",num);
}



struct node * insertbeg(node *p)
{
	node *new1;
	new1=(node*)malloc(sizeof(node));
	printf("\nenter the element you want to insert");
	scanf("%d",&new1->info);
	if(p==NULL)
		{	
			new1->next=NULL;
			new1->previous=NULL;
			p=new1;
		}
	else
		{
			new1->next=p;
			p->previous=new1;
			new1->previous=NULL;
			p=new1;
		}
		return p;
}



void insertbefore(int x,node *p)
{
	node *new1;
	printf("enter the element before which u want to inser");
	scanf("%d",&x);
	new1=(node*)malloc(sizeof(node));
	while(p->info!=x&&p!=NULL)
	p=p->next;
	if(p==NULL)
	{
	printf("element doesn't exist");
	return;
	}
	printf("enter the elemnt u want to insert");
	scanf("%d",&new1->info);
	p->previous->next=new1;
	new1->next=p;
	new1->previous=p->previous;
	p->previous=new1;
}


int delete1(int n,node *p)
{
int c=1;
node *prev=NULL;
if(p==NULL)
{
printf("\nlist is empty");
}

while(p!=NULL&&c!=n)
{
prev=p;
p=p->next;
c++;
}
if(p==NULL)
{
printf("\nnode doesnot exist");
return 0;
}
if(p->previous==NULL)
{
p=p->next;
p->previous=NULL;
free(p);
}
else if(p->next==NULL)
{
p=p->previous;
p->next=NULL;
free(p);
}
else
{
prev->next=p->next;
p->next->previous=prev;
free(p);
}
}




void display(node *p)
{
while(p!=NULL)
{
printf("\n%d",p->info);
p=p->next;
}
}




int main()
{
int x,n;
p=(node*)malloc(sizeof(node));
create(p);
printf("\nelements of doubly linked list are");
display(p);
p=insertbeg(p);
display(p);
insertbefore(x,p);
display(p);
p=insertbeg(p);
display(p);
printf("\nenter the node no");
scanf("%d",&n);
delete1(n,p);
display(p);
getch();
}

