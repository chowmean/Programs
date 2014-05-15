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
	int n;
	cin>>n;
	long long arr[n];
	int t;
	cin>>t;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);int index=0;
	long long int min=arr[t-1]-arr[0];
	for(int i=1;i<n-t;i++)
	{if(min>arr[i+t-1]-arr[i])
		{min=arr[i+t-1]-arr[i];
		index=i;
		}
		}
	cout<<arr[index+t-1]-arr[index]<<endl;	
}

