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
		int p;
		cin>>p;
		long long int tp=arr[p-1];
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{if(arr[i]==tp)
			{cout<<i+1<<endl;
			break;	}
			
			}
		
		
		
		
		}
}

