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
	int arr[t];
	for(int i=0;i<t;i++)
	cin>>arr[i];
	int k;
	cin>>k;
	int max=0;
	for(int i=0;i<k;i++)
	{if(max<arr[i])
	max=arr[i];
		}
		cout<<max<<" ";
		
	for(int i=k;i<t;i++)
	{
		if(arr[i]>=max)
		{cout<<arr[i]<<" "; max=arr[i];}
		
		
		
		else
		
		if(arr[i]<max && arr[i-k]==max)
		{      for(int j=i-k+1;j<=i;j++)
				{if(max<arr[j])
				max=arr[j];
					
					}
		        cout<<max<<" ";			
		}
		if(arr[i]<max && arr[i-k]<max)
		{cout<<max<<" ";
			}
		
	}
	
	
	cout<<endl;
	
	}
		
	


