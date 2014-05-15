#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>

#define in cin>>
#define out cout<<

using namespace std;

struct node {
            int data;
            struct node *link;
            }         ;


int traversal(struct node **p)
{if(p==NULL)
cout<<"empty list";
else
{struct node *temp;
temp=*p;
while(temp->link!=NULL)
{      cout<<temp->data<<" ";
       temp=temp->link;
                       } cout<<temp->data;}
 cout<<endl;
    }


int insert(struct node **p,int data1)
{if(p==NULL)
{           struct node *temp;
            temp=(node *)malloc(sizeof(struct node));
            temp->data=data1;
            temp->link=*p;
            *p=temp;
            }
else
{   struct node *temp;
            temp=(node *)malloc(sizeof(struct node));
            temp->data=data1;
            temp->link=*p;
            *p=temp;
    }
            traversal(p);
    }


int main()
{
    struct node *p;
    p=NULL;
    int t;
    cout<<"enter 1 to enter more elements";
    cin>>t;
    while(t==1)
    {          int data1;
    cout<<"enter data";
    cin>>data1;
    insert(&p,data1);
    cout<<"enter 1 to enter more elements";
    cin>>t;
              }
                         traversal(&p);         int as; in as;
}
