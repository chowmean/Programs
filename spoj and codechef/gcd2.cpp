#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int mod(char b[],int a)
{int r=0;int h=0;
 for(int i=0;i<strlen(b);i++)
{h=b[i]-'0';cout<<h<<"\n";
r =r *10 + h;
r =r % a;}
return r;    }

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
 
int main ()
{int a;
cin>>a;
char str[266];int b;
while(a--)
{cin>>b;
cin>>str;
if(a==0)
            printf("%s\n",str);
        else if(str[0]=='0')
            printf("%d\n",a);
        else
        {
            printf("%d\n",gcd(a,mod(str,a)));   
        }}
    }
