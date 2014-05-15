#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

string b;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{	int total=0;
		int a=0;
		int count=0;cin>>b;
		int len=b.length();
		for(int i=0;i<len;i++)
		{
			
			
		if(b[i]=='<')
		{a++;
		}
		else
		if(b[i]=='>' && a>0)
		{a--;total=total+2;}
		else
		if(b[i]=='>' && a==0)
		break;
		
		
		if(a==0)
		{count=count+total;
		total=0;
			}
			
		}
	cout<<count<<endl;
	}

}
