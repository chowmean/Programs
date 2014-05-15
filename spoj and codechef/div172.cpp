#include<iostream>
#include <ctype.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{char a[1000];
cin>>a;
for(int i=0;i<strlen(a);i++)
{if(i==0)
{ if(int(a[0])>96)
 cout<<char(int(a[0]) - 32);
 else 
 cout<<a[0];}
else
 cout<<a[i];
}
    int as;cin>>as;
}
