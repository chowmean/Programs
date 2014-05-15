#include<iostream>
using namespace std;
int hcf(int a, int b){
    if (a % b == 0)
        return b;
    else
        return hcf(b, a % b);
}

int divisors(int a)
{
     }

int main()
{int a;
scanf("%d",&a);
while(a--)
{int a1,a2,ans;
scanf("%d",&a1);scanf("%d",&a2);
ans=hcf(a1,a2);
ans=divisors(ans);
cout<<ans<<"\n";

          }
    }

