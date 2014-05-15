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
		for(int k=0;k<t;k++)
		{int a,b;
		cin>>a>>b;
		//int arr[b][2];
		int flag=0;
		int arr[10001];
	
		for(int i=0;i<b;i++)
			{int q,w;
			cin>>q>>w;
			if(arr[q]!=1 && arr[q]!=2)
				arr[q]=1;
			if(arr[w]!=1 && arr[w]!=2)
				arr[w]=2;
			if(arr[w]==1)
				flag=1;	
			if(arr[q]==2)
				flag=1;
			}
		
	
		if(flag==0)
			cout<<"Scenario #"<<k+1<<": spying"<<endl;
		else
			cout<<"Scenario #"<<k+1<<": spied"<<endl;	
		
		}
}


