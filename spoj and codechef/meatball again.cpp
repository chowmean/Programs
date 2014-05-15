#include<iostream>
using namespace std;

int findgcd(int x,int y){
     while(x!=y){
          if(x>y)
              return findgcd(x-y,y);
          else
             return findgcd(x,y-x);
     }
     return x;
}

int main()
{int a;
cin>>a;
while(a--)
{int n,m;
cin>>n>>m;
if(m==1)
cout<<1<<"\n";
else
if(m>n/2)
{cout<<-1<<"\n";}
else 
{for(int i=0;i<m;i++)
cout<<2*(i+1)<<" ";
cout<<"\n";
     }
          
          }int as;cin>>as;
    }
