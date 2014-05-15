#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string a;
	cin>>a;
	for(int i=0;i<t;i++)
	{	string b;string c;
		for(int j=a.length()-1;j>0;j=j-2)
		{b.push_back(a[j-1]);
		c.push_back(a[j]);
			}
		a=c.append(b);	
			cout<<a<<endl;
		}
		cout<<a<<endl;
}

