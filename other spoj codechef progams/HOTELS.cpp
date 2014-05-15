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
	int t,total;
	scanf("%d",&t);scanf("%d",&total);
	long long int arr[t];
	for(int i=0;i<t;i++)
	{scanf("%lld",&arr[i]);
		}
	int i=0,j=0;
	long long int sum=0;
	long long int ans=0;
	while(i<=t && j<t)
	{	if(sum<total)
			{if(total-sum<total-ans)
			ans=sum;
				sum=sum + arr[i];
			i++;
			
			}
		else 
		if(sum>total)
			{sum=sum-arr[j];
			j++;
			}
		else 
		if(sum==total)
			{
			ans=sum;
			break;}
		}
		printf("%lld\n",ans);	
}

