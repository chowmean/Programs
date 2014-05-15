#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	long long int arr[t];	
	for(long long int i=0;i<t;i++)
	{cin>>arr[i];
	}
	long long int sum=0;
	for(int i=1;i<t;i++)
	{for(int j=0;j<i;j++)
	{sum=sum + (arr[i]&arr[j]);
		}
		}
	cout<<sum<<endl;
	int as;cin>>as;
}
