#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>
#define max 10
using namespace std;
struct stack{
       int top;
       int arr[max];
       };
 
int insert(struct stack &s,int data1)
{   if((s.top)==max-1)
    cout<<"stack full";
    else
    {   s.top=s.top+1;
        s.arr[s.top]=data1;
        
        }
    }
 
int del(struct stack s)
{   if((s.top)==-1)
    cout<<"stack empty";
    else
    {   int item;
    item=s.arr[s.top];
    s.top=s.top-1;
    return item;
        }
    
    }
 
int main()
{
                struct stack s;
                s.top=-1;
                insert(s,1);
                insert(s,2);
                insert(s,3);
                cout<<del(s);
                
}
