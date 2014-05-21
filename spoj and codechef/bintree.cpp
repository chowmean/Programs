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
	long long int a,b;cin>>a>>b;
	long long int vala[30];
	long long int valb[30];
	int i=0;
	while(a>=1)
		{vala[i]=a;
		a=a/2;i++;
			}
			 i=0;
	while(b>=1)
		{valb[i]=b;
		b=b/2;i++;
		
			}
	int ans=0;int flag=0;
	for(int i=0;i<30;i++)
	 {for(int j=0;j<30;j++)
	 {if(vala[i]==valb[j])
	 	{ans=i+j;flag=1;break;}
	 }if(flag==1)break;
	}
	cout<<ans<<endl;	
		}
}

