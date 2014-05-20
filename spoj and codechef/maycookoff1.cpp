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
		if(n%2==0)
		{for(int i=0;i<(n/2);i++)
		{
		
			cout<<arr[i]<<" ";
			cout<<arr[(n/2)+i]<<" "; 
			}}
		else
		{for(int i=0;i<(n/2);i++)
		{
		
			cout<<arr[i]<<" ";
			cout<<arr[(n/2)+i+1]<<" "; 
			}
			cout<<arr[(n/2)];
			
			}	
		cout<<endl;
		}
}

