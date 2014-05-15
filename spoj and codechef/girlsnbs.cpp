// total triangles

#include<iostream>
using namespace std;
int main()
{int a;cin>>a;
while(a--)
{long long int n,p;
cin>>n;
if(n%2==0)
{p=(1/8)*n*(n+2)*(2*n+1);
cout<<p<<"\n";}
else
{p=(1/8)*(n*(n+2)*(2*n+1)-1);
cout<<p<<"\n";}
}
}
