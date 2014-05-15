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
	int round;
	cin>>round;
	int problems;
	cin>>problems;
	int arrr[round],arrp[problems];
	for(int i=0;i<round;i++)
	cin>>arrr[i];
	for(int i=0;i<problems;i++)
	cin>>arrp[i];
	int count=0;
	for(int i=0;i<round;i++)
	{
		for(int j=0;j<problems;j++)
		{if(arrr[i]<=arrp[j])
			{count=count+1;
			break;}
			}
		
		}
		int answer=0;
	if(count==round)
	answer=0;
	else
	answer=round-count;
	cout<<answer;
}

