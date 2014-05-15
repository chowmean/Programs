#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++)
cin>>arr[i];
int from,to;
cin>>from>>to;
int first=0;
int second=0;
int i=from-1;
while(i!=to-1)
{ if(i==a)
{i=0;}
else
{ first=first+arr[i];
        i++;    }

    }
int j=from-1-1;
while(j!=to-1-1)
{ if(j<0)
{j=a-1;}
else
{ second=second+arr[j];
   j--;         }}
   if(first<second)
   {cout<<first;
  
                   }
   else
   {cout<<second;
       }
   int as;
   cin>>as;

    }
