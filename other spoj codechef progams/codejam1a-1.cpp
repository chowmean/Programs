#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>
#include<string>

#include<cstdio>
#include<ctype.h>
using namespace std;


bool match(string a,string b)
{
	int lena=a.length();
	int count=0;
	for(int i=0;i<lena;i++)
	{
		if(a[i]==1 && b[i]==0)
		count=count+1;
		
		else
		if(a[i]==0 && b[i]==1)		
		count++;
		
		else
		break;
		
		}
	if(count==0)return false;else return true;
}




int main()
{
	int t;
	cin>>t;
	for (int j=0;j<t;j++)
	{
		int a,b;
		cin>>a>>b;
		string arr[a];
		for(int i=0;i<a;i++)
		cin>>arr[i];
		string arr2[a];
		for(int i=0;i<a;i++)
		cin>>arr2[i];
		int count=0;
		for(int i=0;i<a-1;i++)
		{for(int k=i;k<a;k++)
			{
				if(match(arr[i],arr2[j]))
				{count++;
					
					}
				
				}
			}
		
		
		
		}


}

