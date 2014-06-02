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
	while(t--)
	{
		int n,c,m;
		cin>>n>>c>>m;
		int total=0;
	
		total=n/c;
		int wrap=n/c;
		while(wrap>=m)
		{
			total=total+wrap/m;
			wrap=wrap/m+wrap%m;
			
			}
		cout<<total<<endl;		
		}

}

