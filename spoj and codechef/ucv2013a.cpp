#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;
#define mod 1000000007
long long int powpow(long long int a,long long int b)
{	long long int result=1; 
	for(int i=0;i<b;i++)
	{result=(result*a)%mod;
		}
	return result;
}


int main()
{
	long long int a;
	long long int b;
	cin>>a>>b;
	
	while(true)
	{long long int answer=0;
	if(a==0 && b==0)
	break;
	else{
	for(int i=1;i<=b;i++)
		{answer=(answer+powpow(a,i))%mod;
			}
	cout<<answer<<endl;
		}
	cin>>a>>b;
	}	
}

