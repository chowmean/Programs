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
	int arr[t];
	int count[100001]={1};
	

	for(int i=0;i<t;i++)
	{cin>>arr[i];
	
		count[i]++;
	}
	
	
	for(int i=1;i<t;i++)
	{
		if(arr[i]>arr[i-1] && count[i]<=arr[i-1])
		count[i]=count[i-1]+1;
		
	}
	
	for(int i=t-2;i>=0;i--)
	{
		if(arr[i]>arr[i+1] && count[i]<=arr[i+1])
		count[i]=count[i+1]+1;
	}
	
	
	int sum=0;
	for(int i=0;i<t;i++)
	cout<<count[i]<<" ";
	cout<<sum<<endl;
}


