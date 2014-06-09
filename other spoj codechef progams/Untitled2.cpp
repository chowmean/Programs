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
	int fruit;long long int count=0;int day=0;
	cin>>fruit;
	pair <int,int> mymap[t];int arr[t];
	for(int i=0;i<t;i++)
	{int a,b;cin>>a>>b;
	mymap[i].first=a;
	mymap[i].second=b;
	}
	
	sort(mymap,mymap+t);
	if(mymap[0].second>=fruit)
	{count=count+fruit;arr[0]=mymap[0].second-fruit;}
	else
	{count=count+mymap[0].second;arr[0]=0;}
	
	for(int i=1;i<t;i++)
	{if(arr[i-1]==0)
		{if(mymap[i].second>=fruit)
			{count=count+fruit;arr[i]=mymap[i].second-fruit;}
		else
			{count=count+mymap[i].second;arr[i]=0;}
		}
	else
		{if(fruit<=arr[i-1])
			{count=count+fruit; arr[i]=mymap[i].second;}
		else
			{count=count+arr[i-1];
			int gh=fruit-arr[i-1];
			if(gh>=mymap[i].second)
				{count=count+mymap[i].second;arr[i]=0;
					}
			else
				{count=count+gh;
				arr[i]=mymap[i].second-gh;
					}
			}
		}
			}
	 if(arr[t-1]>fruit)
	 count=count+fruit;
	 else
	 count=count+arr[t-1];		
	 cout<<count;
}

