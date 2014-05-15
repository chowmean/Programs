#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{long long int a;
cin>>a;
long long int rem;
long long int ans=0;
while(a>0)
{rem=a%10;
a=a/10;
if(rem>=3)
{rem=3;
if(ans>0)
ans=ans + rem*10;
else
ans=rem; 
         }
else if(rem>=1 && rem<3)
{rem=1;
if(ans>0)
ans=ans + rem*10;
else
ans=rem;     }

else if(rem=0)
{;
     }     
          }
          cout<<ans<<"\n";
          }int as;cin>>as;
    }
