#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

bool islucky(long long int a)
{
	while(a>0)
	{if(a%10==4 || a%10==7)
	return true;
	else
	{a=a/10;
		}
	}
	return false;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{int counter=0;
	long long int number;
	cin>>number;
	for(int i=1;i<=sqrt(number);i++)
	{
		if(number%i==0)
		{if(islucky(i))
		counter++;
		if(islucky(number/i))
		counter++;
			}
		if(number/i==sqrt(number))
		{
			if(islucky(i))
			counter--;	
		}
		}
	
	
	
		cout<<counter<<endl;
		
		}
}

