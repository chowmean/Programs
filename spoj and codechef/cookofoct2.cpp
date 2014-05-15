#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;
long long int mod=1000000007;
long long int arr[]={0,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
int main()
{
	int t;
	cin>>t;
	{long long int lower,upper;
	cin>>lower>>upper;
	long long int sum=0;long long int answer=0;
	while(lower<=upper)
	{	int i=0;
		if(lower<arr[i] && arr[i]<=upper)
		{if(arr[i]-1 - lower%2==1)
		sum=sum+((arr[i]-1+lower)*((arr[i]-1-lower)/2));
		else
		sum=sum+((arr[i]-1+lower)*((arr[i]-1-lower)/2))+(arr[i]-1+lower)/2;
		
		answer=(answer+((sum)%mod*(i-1)%mod)%mod)%mod;
		lower=arr[i];	}
		else if(lower<upper && arr[i]>=upper)
		{if(upper - lower%2==1)
		sum=sum+((upper+lower)*((upper-lower)/2));
		else
		sum=sum+((upper+lower)*((upper-lower)/2))+(upper+lower)/2;
		
		answer=(answer+((sum)%mod*(i-1)%mod)%mod)%mod;
		lower=upper+1;	}
		else i++;
		}
	cout<<answer<<endl;	
}
}
