#include <iostream>
#include<map>
#include <algorithm>
#include <string>
#include<cstdio>

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
map<char,char>mapping;
for(int i=0;i<n;i++)
{
cin>>a>>b;
mapping[a]=b;

}
cin>>encryp;
int len= encryp.length();
if(n!=0)
{ 
for(int i=0;i<len;i++)
{
char temp=encryp[i];
if(mapping[temp]!='\0')
encryp[i]=mapping[temp];
}
}

int dot=0,last=0,init=0;
for(int i=0;i<=len-1;i++)
{
if(encryp[i]=='.')
break;dot=i;
}


for(int j=len-1;j>=dot;j--)
{ last=j;
if(encryp[j]!='0')
break;

}


for(int i=0;i<len;i++)
{ init=i;
if(encryp[i]!='0')
break;

}


if(encryp[last]=='.' and last!=init) last--;

if(last==init && encryp[init]=='.') cout<<"0";
else
for(int i=init;i<=last;i++)
printf("%c",encryp[i]);

cout<<endl;

}


}

