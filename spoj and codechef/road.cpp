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
	long long int m,t;
	cin>>m>>t;
	long long int arr[t];
	long long int road=0;
	for(long long int i=0;i<t;i++)
	{cin>>arr[i];
		}
	long long int previous;
	previous=arr[0];
	road=arr[0]-1;
	for(long long int i=1;i<t;i++)
	{if(arr[i]>=previous)
	{road=road+(arr[i])-previous;
	previous=arr[i];
		}
	else
	{road=road+(m-previous)+(arr[i]);
	previous=arr[i];

		}
	}
	cout<<road;
	int as;cin>>as;		}
		


