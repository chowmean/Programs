//elephant
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{long long int a;
cin>>a;
while(a--)
{long long int b;cin>>b;
long long int l[b];
long long int m[b];
for(long long int i=0;i<b;i++)
{cin>>l[i]>>m[i];
        }
sort(l,l+b);
sort(m,m+b);
long long int ans=0;
for(long long int i=0;i<b;i++)
{ans=ans+l[i]*m[i];
        }
cout<<ans<<"\n";        
          }int as;cin>>as;
    }
