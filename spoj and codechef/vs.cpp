#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{int a;
scanf("%d",&a);
while(a--)
{int b; 
 scanf("%d",&b);
 int i=2;
 float val=log(b);
 float value=log(i); 
 while(1)
 {if((i*val)<(value))
 {cout<<i<<"\n";
  break;    }
 else
 {i++;
  value=value+log(i);
 }
         }   
          }
          int hj;
          cin>>hj;
    }
