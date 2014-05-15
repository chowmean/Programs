#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

int max(int a, int b)
{
    return (a > b)? a : b;
}


int lcs(char *X,char *Y,int m,int n)
{
	int dp[m+2][n+2];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{if(i==0 || j==0)
		dp[i][j]=0;
		else if(X[i-1]==Y[j-1])
		dp[i][j]=dp[i-1][j-1]+1;
		else
		dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			
		}

}
return dp[m][n];
}


int main()
{
	char X[50010];
	char Y[50010];
	cin>>X>>Y;
  int m = strlen(X);
  int n = strlen(Y);
  cout<<lcs(X,Y,m,n);
  
	
}

