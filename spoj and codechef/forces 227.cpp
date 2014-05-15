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
	string a,b;
	cin>>a>>b;
	int h1,h2,m1,m2;
	h1=a[0]*10 + a[1];
	m1=a[3]*10 + a[4];
	
	h2=b[0]*10 + b[1];
	m2=b[3]*10 + b[4];
	int ansh,ansm;
	ansh=h1-h2;
	ansm=m1-m2;
	if(ansh<0)
	ansh=24+ansh;
	if(ansm<0)
	{ansm=60+ansm;
	ansh=ansh-1;
	if(ansh<0)
	ansh=24+ansh;
		}
		if(ansh<10 && ansm <10)
		cout<<"0"<<ansh<<":"<<"0"<<ansm;	
		else
		if(ansh<10 && ansm >=10)
		cout<<"0"<<ansh<<":"<<ansm;
		else
		if(ansh>=10 && ansm <10)
		cout<<ansh<<":"<<"0"<<ansm;
		else
		if(ansh>=10 && ansm >=10)
		cout<<ansh<<":"<<ansm;
}

