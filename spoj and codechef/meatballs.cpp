#include<iostream>
#include<algorithm>
using namespace std;
int main()
{long long int a;
cin>>a;
while(a--)
{long long int n,m;
int ans=0;
cin>>n>>m;
long long int p[n];
for(long long int i=0;i<n;i++)
{cin>>p[i];}
sort(p,p+n);
for(long long int i=n-1;i>=0;i--)
{
if(m>0)
{m=m-p[i];
ans=ans+1;}
else
;
}
if(m>0)
cout<<-1<<"\n";
else
cout<<ans<<"\n";
          }
          int as;cin>>as;
    }
