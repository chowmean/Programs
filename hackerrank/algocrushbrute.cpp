#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;







long long int arr[10000001];


int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b,v;
		cin>>a>>b>>v;
		 for(int j=a;j<=b;j++)
			arr[j]=arr[j]+v;
		}
	long long int ans=arr[0];
	for(int j=0;j<=n;j++)
			if(ans<arr[j])
			ans=arr[j];
	
	
	cout<<ans;
}


