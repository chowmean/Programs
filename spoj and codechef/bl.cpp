#include<cstdio>
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
#include<cstring>
#include<sstream>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<queue>
using namespace std;

int main()
{
int t;
cin>>t;
int n,m,p;
while(t--)
{
cin>>n>>m>>p;
int ans=(n/m+1)*2*p;
cout<<ans<<endl;
}

return 0;
}
