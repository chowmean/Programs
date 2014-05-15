#include<iostream>

#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;
long long dp[1111];
long long int max(unsigned long long int a, unsigned long long int b){
return a > b ? a : b;
}

int main()
{
	int  t;
	scanf("%d", &t);
	for(int j=1;j<=t;j++)
	{
		int n;
	    scanf("%d", &n);
     
        long long arr[n];
	    
	    for(int  i=0;i<n;i++)
          scanf("%lld",&arr[i]);
		dp[0]=arr[0];
		dp[1]=arr[1];			
		for(int  i=0;i<n;i++)
	    {
		
					long long a,b;
					if(i>1)
						a=arr[i]+dp[i-2];
					else 
					    a=arr[i];
					if(i>0)
						b=dp[i-1];
					else
					   b=0;
				    dp[i]=max(a,b);
			
	    }
				 printf("Case %d: %lld\n", j, dp[n-1]);
	}
}

