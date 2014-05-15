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
	int a[t],b[t];
	for(int i=0;i<t;i++)
	cin>>a[i]>>b[i];
	int dp[t];
	for(int i=0;i<t;i++)
	{if(i==0)
	dp[i]=max(a[i],b[i]);
	else
		{	int prev=0;
			if(abs(a[i]-b[i-1])>abs(a[i-1]-b[i]))
				{dp[i]=dp[i-1]+abs(a[i]-b[i-1])+b[i];
				prev=a[i];
				}
			else
			if(abs(a[i]-b[i-1])==abs(a[i-1]-b[i]))
			{dp[i]=dp[i-1]+abs(a[i]-b[i-1]);
				if(a[i]+abs(prev-b[i])>b[i]+abs(prev-a[i]))
				dp[i]=dp[i]+a[i];
				else
				dp[i]=dp[i]+b[i];
			}
			else
				{dp[i]=dp[i-1]+abs(b[i]-a[i-1])+a[i];
				prev=b[i];
				}		
		}
		
		
	}cout<<dp[t-1];
}

