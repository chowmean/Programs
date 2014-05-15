#include<iostream>

using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int a,sum=0;
	for(long long int i=0;i<t;i++)
	{cin>>a;
	sum=sum+a;
	}
	long long int check=(t*(t+1)/2);
	if(check==sum)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
}

