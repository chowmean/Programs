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
	int vip1[9][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
	int vip2[4]={6,1,3,4};
	while(t--)
	{int n;
	cin>>n;
	int tickets[n];int check=0;int digits=0;int ans[n];int arr[n];
	for(int i=0;i<n;i++)
	{cin>>tickets[i];
	
	digits = log10((float)tickets[i]) + 1;
	
	
	if(digits==1)check=1;else{
	
		if(tickets[i]>36)
		{if(tickets[i]%10==1 || tickets[i]%10==3 || tickets[i]%10==4|| tickets[i]%10==6)
			{check=2;
			}
			else {
			check=0;}
			}
	
		else {
		if(tickets[i]%10!=1 && tickets[i]%10!=3 && tickets[i]%10!=4&& tickets[i]%10!=6)
	 	{check=1;}
		else
		{check=4; }}
			}
	
	
	

	
	if(check==1)
		{	if(tickets[i]%4==0)
			ans[i]=(tickets[i]/4)*10 + vip2[(tickets[i]%4)];
			else
			ans[i]=((tickets[i]/4)+1)*10 + vip2[(tickets[i]%4)];
			}
	
	if(check==2 )
		ans[i]=tickets[i];
	if(check==0)
		ans[i]=111;
	if(check==4 )
		{	arr[i]=101;
			if(tickets[i]%4==0)
			ans[i]=(tickets[i]/4)*10 + vip2[(tickets[i]%4)];
			else
			ans[i]=((tickets[i]/4)+1)*10 + vip2[(tickets[i]%4)];
			}}
		
		
	int thief=0;
	int unclass=1;	
	for(int i=0;i<n;i++)
	{if(ans[i]==111)
	thief=1;
	if(arr[i]!=101)
	{	arr[i]=1;
		unclass=0;
		digits = log10((float)tickets[i]) + 1;
		if(digits>=3)
		{unclass=1;break;
			}
	}
	
	}

	if(unclass==1)
	{cout<<"UNCLASSIFIABLE"<<endl;continue;}
	
	if(thief==1)
	{cout<<"THIEF"<<endl;continue;}
	
	
	else
	for(int i=0;i<n;i++)
	{
	cout<<ans[i]<<" ";}
	cout<<endl;
	}
	
	}

