#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;int counter=0;
	for(int i=0;i<t;i++)
	{int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	double  a1=(c-a)*(c-a) + (d-b)*(d-b);
	double b1=(c-e)*(c-e) + (d-f)*(d-f);
	double c1=(a-e)*(a-e) + (b-f)*(b-f);
	if(a1>b1 && a1>c1)
	{if(a1==b1 + c1)
	counter++;
		}
	if(b1>a1 && b1>c1)
	{if(b1==a1+c1)
	counter++;
		}
	if(c1>b1&&c1>a1)
	{if(c1==a1+b1*b1)
	counter++;
		}
		}
	cout<<counter<<endl;int as;cin>>as;
}
