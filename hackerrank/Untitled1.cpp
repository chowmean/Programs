#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;
long long int arr[1000009],arrh[1000009];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{int n,k;
	cin>>n>>k;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<k;i++)
	cin>>arrh[i];
	int count=0;int maxcount=0; 
	int index=0;int flag=0;
	for(int i=0;i<n;i++)
		{count=0;
			for(int j=0;j<k;j++)
			{
				if(arrh[j]<=arr[i])
				count++;
				else
				{if(count>maxcount)
				{maxcount=count;
				index=i;}break;	}
				if(j==(k-1)){
				index=i;flag=1;break;}
				}if(flag==1)break;
		
		}
		cout<<index<<endl;
		}
}

