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
	{	string s;
		cin>>s;
		int len=s.length();int count=0;
		
		{
			for(int i=0,j=len-1;i<=j;i++,j--)
			{	
				count=count+abs(s[i]-s[j]);
				}
			}
	cout<<count<<endl;
	}
}

