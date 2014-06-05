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

int bitset(int n,long long int v)
{ 	
	int i=1;
	while(i<n)
	{
		i=i+i & (-i);
 	}
		arr[i]=arr[i]+v;
	
	
	for(int i=0;i<=n;i++)
	cout<<arr[i]<<" ";cout<<endl;return 0;
}


long long int bitget(int n)
{
	int i=n-1;
	long long int s=0;
	while(i>0){
		if(s<arr[i])
		s=arr[i];
		i=i-i & (-i);
		}
	return s;
}


int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b,v;
		cin>>a>>b>>v;
		 for(int j=a;j<=b;j++)
			bitset(j,v);
		}
	long long int ans=bitget(n);
	cout<<ans;
}

