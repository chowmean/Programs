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
int test,tim;
cin>>test>>tim;
int a,b,c;int tim1[test+1],score[test+1];
for(int i=0;i<test;i++)
{cin>>a>>b>>c;
score[i]=a*b;
tim1[i]=c;	}
 
 
int dp[test+1][tim+1];
 
 
for(int i=0;i<=test;i++)
{for(int j=0;j<=tim;j++)
{if (i==0 || j==0)
dp[i][j] = 0;
else if (tim1[i-1] <= j)
dp[i][j] = max(score[i-1] + dp[i-1][j-tim1[i-1]], dp[i-1][j]);
else
dp[i][j] = dp[i-1][j];
}
}
 
cout<<dp[test][tim]<<endl;
}
}
