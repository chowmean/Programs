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
		int n;cin>>n;
		long long int arr[n];
		char arrc[n-1];
		char arrc2[n-1];
		cin>>arr[0];
		for(int i=1;i<n;i++)
		{cin>>arr[i];
			if(arr[i]<arr[i-1])
		arrc[i-1]='L';
		else
		if(arr[i]>arr[i-1])
		arrc[i-1]='G';
		else
		if(arr[i]==arr[i-1])
		arrc[i-1]='E';		
			}
		cin>>arrc2;cout<<arrc2;cout<<arrc;
		if(strcmp(arrc2,arrc)==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
		
		}
		int as;cin>>as;
}

