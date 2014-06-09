#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(a==0)return b;
	gcd(b%a,a);
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		long long int total=m*n;
		long long int evenm=m/2;
		long long int evenn=n/2;
		long long int totalodd=(m-evenm)*evenn + (n-evenn)*evenm;
		cout<<totalodd/gcd(totalodd,total)<<"/"<<total/gcd(totalodd,total)<<endl;
			
	}
}

