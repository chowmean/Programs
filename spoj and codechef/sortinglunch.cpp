#include<iostream>
#include<math.h>
using namespace std;
long long int sum=0;
long long int add(int t)
{
	if(t<=2)
	return t;
	else
	{
	if(t%2==0){
	long long int a=t/2-1;
	long long int b=t/2;
	return add(a)+add(b);
	
	}	
	
	else
	{
		long long int a=t/2;
	long long int b=t/2;
	return add(a)+add(b);
	}	}
		
	}

int main()
{
	long double t;
	int size;
	cin>>size;
	long long int arr[size];
	for(long long int i=0;i<size;i++)
		{cin>>arr[i];
			
			}
	
cout<<add(t)<<endl;
int as;
cin>>as;
	}

