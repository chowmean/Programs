#include<iostream>
using namespace std;
int fun(int a)
{for(int i=2;i<a;i++)
if(a%i==0)
return i;}

int val(int a)
{if(a==0||a==1)
 return 0;
else
return val(a-1) + fun(a);
    }
    
int main()
{int a;
cin>>a;
while(a--)
{int n;
cin>>n;
cout<<val(n-1)+fun(n)<<"\n";
          }int y;cin>>y;
    }
