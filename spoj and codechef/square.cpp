#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

long long int arr[100000];

bool check(long long int a)
{	bool ret=true;
	while(a>0)
	{if(a%10==0 || a%10==1 || a%10==4 ||a%10==9 )
		{a=a/10;}
	else
		{ret=false;
		break;
			}
		}return ret;
}


int main()
{	for(int i=1;i<=100000;i++)
	arr[i]=i*i;
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		int count=0;
		cin>>a>>b;
		double a1;
		a1=sqrt(a);
		
		for(int i=sqrt(a);i*i<=b;i++)
		{
		if(check(arr[i]))
		count++;
			}
		
		cout<<count<<endl;
		}
}

