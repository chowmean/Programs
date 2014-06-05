#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
#define mod 1000000009
using namespace std;
long long int dp[5005][5005];
int main()
{
	int t;
	
	
	
	for(int i=0;i<5005;i++)
	{dp[i][0]=1;dp[i][i-1]=1;}
	
	
	for(int i=2;i<5005;i++)
		{for(int j=1;j<i-1;j++)
			{dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
				}
			}




	long long int arr[5003]; arr[0]=1; arr[1]=1;arr[2]=2;long long int val=0;
	for(int i=1;i<5001;i++)
	{val=0;
	for(int j=1;j<=i;j++)
	{val=(val+(arr[j-1]%mod*arr[i-j]%mod)%mod)%mod;
		}arr[i]=val;
		}






	
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans=0;
		for(int i=1;i<n;i++)
		{
			ans=(ans+(dp[n+1][i]%mod*arr[i]%mod)%mod)%mod;
		
			
				}
			ans=(ans + arr[n])%mod;
			cout<<ans<<endl;
		
		
		}
}

