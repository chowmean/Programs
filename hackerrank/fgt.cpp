 #include <iostream>
#include<map>
#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;
string encryp;
int main()
{
int t;
cin>>t;
while(t--)
{ int n;
cin>>n;
char a;
char b;
map<char,char>shubh;
for(int i=0;i<n;i++)
{
cin>>a>>b;
shubh[a]=b;

}
cin>>encryp;
int len= encryp.length();
if(n!=0)
{ // decrypting the string
for(int i=0;i<len;i++)
{
char temp=encryp[i];
if(shubh[temp]!=NULL)
encryp[i]=shubh[temp];
}
}

int p=0,r=0,q=0;
for(int i=0;i<=len-1;i++)
{
if(encryp[i]=='.')
break;
p=i;
}


for(int j=len-1;j>=p;j--)
{ r=j;
if(encryp[j]!='0')
break;

}


for(int i=0;i<len;i++)
{ q=i;
if(encryp[i]!='0')
break;

}


if(encryp[r]=='.' and r!=q) r--;

if(q==r && encryp[q]=='.') cout<<"0";
else
for(int i=q;i<=r;i++)
printf("%c",encryp[i]);

cout<<endl;

}
int x;
cin>>x;
return 0;
}

