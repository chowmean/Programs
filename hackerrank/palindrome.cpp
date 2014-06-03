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
		string s;
		cin>>s;int index=-1;
		int len=s.length();
		for(int i=0,j=len-1;i<len,j>=0;i++,j--)
		{
			if(s[i]==s[j])
			continue;
			else
			{
				if(s[i+1]==s[j])
				index=i;
				else
				if(s[j-1]==s[i])
				index=j;
				break;
				}
			
			}
		
		cout<<index<<endl;
		}
}

