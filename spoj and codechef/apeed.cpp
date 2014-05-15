#include<iostream>
#include<cstdlib>
using namespace std;

long long int hcf(long long int m,long long int n)
{
long long int t;
if(n>m)
{
t=m;
m=n;
n=t;
}
while(n!=0)
{
long long int rem=m%n;
m=n;
n=rem;
}
return m;
}



int main()
{int a;
cin>>a;
while(a--)
{long long int a1,a2,ans;
cin>>a1>>a2;
ans=abs(a1-a2);
a1=abs(a1);
a2=abs(a2);
ans=ans/hcf(a1,a2);
cout<<ans<<"\n";}
int a4;cin>>a4;}
