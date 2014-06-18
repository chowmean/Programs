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
	string a;
	cin>>a;int arr[26]={0};
	for(int i=0;i<a.length();i++)
	{arr[(int)a[i]-97]++;
		
		}
	int count;
	for(int i=0;i<26;i++)
	{if(arr[i]%2==0)
	;else
	count++;	
		}
		
			
	if(a.length()%2==1)
	{if(count==1)
		cout<<"YES";
		else
		cout<<"NO";
		}
	else
	{if(count==0)
		cout<<"YES";
		else
		cout<<"NO";
	}
	
}

