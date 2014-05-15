#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;


int ispresent[10]={0,0,0,0,0,0,0,0,0,0};



bool ifpresent(long long int arr)
{	int ret=true;long long int temp1=arr;
	while(arr>0)
	{long long int temp=arr%10;
	arr=arr/10;
	if(ispresent[temp]==1);ret=false;
	}
	arr=temp1;
	if(ret==true)
	{while(arr>0)
		{long long int temp=arr%10;
		arr=arr/10;
		ispresent[temp]=1;
		}
		}
	return ret;
}



int main()
{
	int t;
	
	while(scanf("%d",&t)!=0)
	{long long int arr[t];
 	for(long long int i=0;i<t;i++)
 	{cin>>arr[i];
 			}
 	
	long long int dp[t][t];long long int element[t]; 
 	for(long long int i=0;i<t;i++)
 	{dp[i][0]==arr[i];element[i]=1;
 		}
 		
 	for(int i=0;i<t;i++)
 	{ifpresent(arr[i]);
 	for(int j=1;j<t;j++)
 	if(ifpresent(arr[j]))
 	{dp[i][j]=dp[i][j-1]+arr[j];
	element[i]=element[i]+1;}
	
	for(int n=0;n<10;n++)
	ispresent[n]=0;		
		}
			
	//long long int answer=element[0];
	long long int maxelm=element[0];
	long long int max=dp[0][t-1];		
	for(int i=1;i<t;i++)
	{if(dp[i][t-1]>max)
		{maxelm=element[i];
		max=dp[i][t-1];
		}
	else
	if(dp[i][t-1]=max)
		{if(element[i]>=maxelm)
		{max=dp[i][t-1];maxelm=element[i];}
			}
		}
	
cout<<maxelm<<endl;		}	
}

