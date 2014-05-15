#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{long long int a,b,c;
cin>>a>>b>>c;
long long int alice[a];
long long int bob[b];
for(int i=0;i<a;i++)
cin>>alice[i];
for(int i=0;i<b;i++)
cin>>bob[i];
int count=0;int check=0;
sort(alice,alice+a);
sort(bob,bob+b);
if(a=b)
{
for(int i=0;i<a;i++)
{if(bob[i]>=alice[i])
check=1;
else {
check=0;break;}}}

if(a<=b)
{for(int i=0;i<b;i++)
{
for(int j=0;j<a && check==0;j++)
 {if(bob[i]==alice[j])
 count=count+1;
  
  } 
  }      }

else
cout<<"YES";       
    

if(count<=a && check==0)
cout<<"YES";
else 
cout<<"NO";
}
