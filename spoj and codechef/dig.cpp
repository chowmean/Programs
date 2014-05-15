#include<iostream>
using namespace std;
int main()
{int a; cin>>a ;
while(a--)
{long long int b;
cin>>b;
long long int ans,b1,b2,b3,b4;
b1=(b)%1000000007;
b2=(b-1)%1000000007;
b3=(b-2)%1000000007;
b4=(b-3)%1000000007;
ans=((b1*b2*b3*b4)/24)%1000000007;
 cout<<ans<<"\n";  }   }
