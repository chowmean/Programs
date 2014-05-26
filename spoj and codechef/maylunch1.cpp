#include<iostream>
#include<algorithm>
#include<math.h>
#include<cmath>
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
		
		long long int k,n;
		cin>>n>>k;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
			}		
		
		int min=abs(arr[0]+arr[1]-k);int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(min>abs(arr[i]+arr[j]-k))
				{count=1;
				min=abs(arr[i]+arr[j]-k);
				}
				else
				{if(min==abs(arr[i]+arr[j]-k))
				{count++;
				
				}
					}
				
				
				
				}
			
			}
		
		cout<<min<<" "<<count<<endl;
		}
}

