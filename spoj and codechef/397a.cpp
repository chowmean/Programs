#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>
#include<ctype.h>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t][2];
	for(int i=0;i<t;i++)
	cin>>arr[i][0]>>arr[i][1];
	
	
	int ar[105]={0};
	
	
	for(int i=0;i<t;i++)
	{for(int j=arr[i][0]+1;j<=arr[i][1];j++)
		{	ar[j]=ar[j]+1;
		}	
	}
	
	
	
	int count=0;
	for(int k=arr[0][0];k<=arr[0][1];k++)
	{
		if( ar[k]==1 )
	{
	count++;}
		
		
	
		}
		
		cout<<count<<endl;
		
	
}

