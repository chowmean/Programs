#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;
char a[100003],b[100003],c[100003];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	cin>>a>>b;
	int na=strlen(a);
	int nb=strlen(b);
	
	int result=0;
	if(na<nb)
	{
	strcpy(c,b);
	strcpy(b,a);
	strcpy(a,c);
	int nc;
	nc=na;
	na=nb;
	nb=nc;
	}
	
	{	int j=0;
		for(int i=0;i<na;i++)
		{if(a[i]==b[j])
			{
				j++;
			if(j<nb)
				{result=0;}
			else if(j==nb)
				{j=0;
				result=1;}
			}
		else 
			{
			result=0;
			break;
			}
			
		}
	}
		

		if(result==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		}
}

