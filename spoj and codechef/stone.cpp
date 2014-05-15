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
long long int a,b;
cin>>a>>b;
long long int arr[a];
long long int max1=0;
for(long long int i=0;i<a;i++)
{
cin>>arr[i];
if(max1<=arr[i])
max1=arr[i];
}

if(b==0);
else if(b%2==1)
{
	for(long long int i=0;i<a;i++)
	arr[i]=max1-arr[i];
	
	}
else if(b%2==0)
{
	long long int max2=arr[0];
	
	for(long long int i=0;i<a;i++){
	arr[i]=max1-arr[i];
	if(max2<arr[i])
	max2=arr[i];
	}
	
	for(long long int i=0;i<a;i++)
	arr[i]=max2-arr[i];
	

}

for(long long int i=0;i<a;i++)
cout<<arr[i]<<" ";



}

