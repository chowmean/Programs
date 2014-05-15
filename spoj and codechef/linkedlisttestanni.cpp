#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>

#define in cin>>
#define out cout<<

struct node {
            int data;
            struct node *link;
       };

using namespace std;

int  traversal(struct node **p)       //  **p IS A ADDRESSS
{    if(p==NULL)
     {out "empty list";}
     else{
     struct node *temp;
     temp=*p;                                              // SINCE TEMP IS POINTER WHILE P IS ADDRESS. *P HOLDS THE VALUE OF ADDRESS ..
     while(temp->link!=NULL)
     {  out temp->data <<" ";
     temp=temp->link;                                      // SINCE TEMP IS ADDRESS AND TEMP->LINK IS ALSO ADDRESS
                         }
                         cout<<temp->data<<endl;
     }     }


int reverse(struct node *p)
{    
    }


int main()
{
    struct node *p;
    p=NULL;
    int t;
    in t;
    for(int i=0;i<t;i++)
    {struct node *temp;
    temp=(node *)malloc(sizeof(node));
    int tr;
    in tr;
    temp->data=tr;
    temp->link=p;
    p=temp;
    traversal(&p);
     }
    
}
