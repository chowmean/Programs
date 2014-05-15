#include<cstdio>
#include<iostream>
using namespace std;
int main()
{int n;
scanf("%d",&n);
while(n--)
{
    long long int a,c;
    long long int ans;
    char b[2];
    scanf("%lld",&a);
    scanf("%s",&b);
    scanf("%lld",&c);
    if(b[0]=='+')
        ans=a+c;
        if(b[0]=='-')
        ans=a-c;
        if(b[0]=='*')
        ans=a*c;
        if(b[0]=='/')
        ans=a/c;
    
    while(1)
    {   scanf("%s",&b);
    if(b[0]=='=')
        break;
        else
        scanf("%lld",&c);
        if(b[0]=='+')
        ans=ans+c;
        if(b[0]=='-')
        ans=ans-c;
        if(b[0]=='*')
        ans=ans*c;
        if(b[0]=='/')
        ans=ans/c;
        
        
        
    }cout<<ans<<"\n";
}
    
}
 
