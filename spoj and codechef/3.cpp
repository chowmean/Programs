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
		int n;
		cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		long long int dp[n];dp[0]=arr[0];dp[1]=arr[1]+arr[0];
		int count=2;
		for(int i=2;i<n;i++)
		{if(arr[i]>=dp[i-1])
		dp[i]=dp[i-1]+arr[i];
		else
		{
		dp[i]=dp[i-1]+arr[i];
		count=i+1;
		}
			}
		if(count==2)
		cout<<"-1"<<endl;
		else
		cout<<count<<endl;
		}
}

