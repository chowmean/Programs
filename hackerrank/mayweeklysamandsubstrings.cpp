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
	string t;
	cin>>t;
	int n=t.length();long long int val=0;
	 int total=0;
	for(int k=1;k<=n;k++)
	{
		for(int j=0;j<=n-k;j++)
		{
			for(int i=j;i<=n-k;i++)
				{val=val*10+(t[i]-'0');
				}
			
			total=(total+val)%1000000007;
			val=0;
			}
		
		}
		cout<<total<<endl;
}

