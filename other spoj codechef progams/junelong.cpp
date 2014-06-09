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
	int r;int count=0;int max=0;int value=1;int val=1;
	for(int i=0;i<t;i++)
	{cin>>r;
	if(r==0)
		{if(count>max)
			max=count;value=val;
		count=0;val=1;
		
		if(count==max)
			max=count; if(val>=value)value=val;
		count=0;val=1;
	
	}
	
	else {
		val=val*r;
	count++;}
	}
	if(max<count)
	max=count;
	cout<<max;
}

