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
int count=0;int check=0;int gone=0;
if(a<=b)
{for(int i=0;i<b;i++)
{check=0;
for(int j=0;j<a && check==0;j++)
 {if(bob[i]==alice[j])
 {count=count+1;
  check=1;}
  if(bob[i]>alice[j] && gone==0)
  {gone=0;}
  else gone=1; 
  }      }
}
else
cout<<"YES";       
    

if(count<=a && gone==1)
cout<<"YES";
else 
cout<<"NO";int as;
cin>>as;
}
