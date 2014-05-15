#include<iostream>
#inlcude<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long double p;
        cin>>p;
 
        long double ans1=10000*p+10000-(p*2*p*10000);
        long double ans2=(10000*p+10000-(p*2*p*10000)+10000*((2*p)-1));
        long double ans=max(ans1,ans2);
        printf("%.8Lf\n",ans);
 
    }
  return 0;
}
