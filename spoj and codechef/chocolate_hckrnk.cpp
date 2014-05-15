#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int c,n,m,p;
cin>>n>>c>>m;
int total=0;
total=n/c;
p=total;
if(total<m)
{
cout<<total<<endl;
}
else
{
while(p>=m)
{
total=total+p/m;
p=(p%m)+p/m;
}
cout<<total<<endl;
}
}
}
