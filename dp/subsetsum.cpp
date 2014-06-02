#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;



bool subsetsum(int arr[],int n , int sum)
{
	int dp[n+1][sum+1];
	for(int i=0;i<n+1;i++)
	{for(int j=0;j<sum+1;j++)
	dp[i][j]=0;
		}
	for(int i=1;i<n+1;i++)
	{
		dp[i][arr[i-1]]=1;
		for(int j=1;j<sum+1;j++)
		{
			
			dp[i][j]=dp[i-1][j] + dp[i-1][j-arr[i-1]] || dp[i][j];
			}
		}
	
	for(int i=0;i<n+1;i++)
	{for(int j=0;j<sum+1;j++)
	{
		cout<<dp[i][j]<<"  ";
		
		}
		cout<<endl;
		}
	
	return dp[n][sum];
}







int main()
{
	int t,sum;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{cin>>arr[i];
		}
	cin>>sum;	
	if(subsetsum(arr,t,sum)==1)
	cout<<"\nyes";	
	
	
}

