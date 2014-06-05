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

	long long int arr[5000]; arr[0]=1; arr[1]=1;arr[2]=2;
	for(int i=1;i<50;i++)
	{long long int val=0;
	for(int j=1;j<=i;j++)
	{val=val+(arr[j-1]*arr[i-j]);
		}arr[i]=val;
		}

	for(int i=0;i<50;i++)
	cout<<arr[i]<<endl;
}

