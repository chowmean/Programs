#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>

#define mod 1000000007
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;long long int k;long long int ans=9;
		cin>>n>>k;
		if(((k)*10)<n)
		cout<<0<<endl;
		else
		{
		long ans=1;for(int i=9;i>=0;i--){if(count[i]!=0){ans*=ans*fact[count[i]];}
		print ans;	
			
			}
		
		
		
		}
	
}

