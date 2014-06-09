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
	int money;int count=0;vector<int> myvector;
 	cin>>money;int flag=0;
	for(int j=0;j<t;j++)
	{int l=0,val=0;
	cin>>l;flag=0;
	for(int i=0;i<l;i++)
	{cin>>val;
		if(val<money)
		{
		if(flag==0)
		{count++;
		myvector.push_back(j+1);
		}
		flag=1;
		}
	}	

		}	
	
	sort(myvector.begin(), myvector.begin()+count);
	cout<<count<<endl;	
	for(int i=0;i<count;i++)
	cout<<myvector[i]<<" ";
	cout<<endl;
	
}

