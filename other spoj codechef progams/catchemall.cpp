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
	int arr[t];
	for(int i=0;i<t;i++)
	cin>>arr[i];
	
	sort(arr,arr+t);
	reverse(arr,arr+t);
	for(int i=0;i<t;i++)
	arr[i]=arr[i]+i+1;
	int max1=0;
	for(int i=0;i<t;i++)
	{if(arr[i]>max1)
	max1=arr[i];
		}
		cout<<max1+1<<endl;
}

