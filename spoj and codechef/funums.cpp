#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;


long long int arrfact[]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200};

long long int calcfact(long long int a)
{
    long long int ans=0;int j=0;
    while(++j)
    if(a<=arrfact[j] && a>arrfact[j-1])
    {
        break;
    }
    while((j--)>=0)
    {
        ans=ans*10+a/arrfact[j];
        a=a%arrfact[j];
    }
    return ans;
}


long long int calnum(long long int a;)
{
    long long int ans=0;
    int length = floor(log10(abs(the_integer))) + 1;
    for(int i=0;i<length;i++)
    {
        ans=ans+(a%10)*arrfact[i];
        a=a/10;
    }
    return ans;

}


int main()
{
    int t;cin>>t;
    while(t--)
    {
        char s[16];
        int b;
        cin>>s;
        cin>>b;
        
    }
}
