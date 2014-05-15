#include<iostream>
using namespace std;
long long int comparisions=0;

//long long int * concat(long long int small[],long long int smallsize,long long int middle,long long int large[],long long int largesize)
//{
//	long long int arr[smallsize+largesize+1];
//	int size=smallsize+largesize+1;
//	int i=0;int j=0;
//	while(i<smallsize)
//	arr[j++]=small[i++];
//	arr[j++]=middle;
//	i=0;
//	while(i<largesize)
//	arr[j++]=large[i++];
//	return arr;
//}


long long int  sort(long long int arr[],long long int size)
{
	long long int small[size+1],large[size+1];
	long long int smallsize=0,largesize=0;
	long long int pivot=(size/2) +1;
	if (size<=1)
	return 1;
	else{
	
	for(long long int i=0;i<size;i++)
	{comparisions++;
	if(arr[i]<pivot)
	small[smallsize++]=arr[i];
	if(arr[i]>pivot)
	large[largesize++]=arr[i];
		}
	sort(small,smallsize);
	sort(large,largesize);
	}return 0;
}



int main()
{
	long long int t;
	cin>>t;
	comparisions=0;
	long long int arr[t];
	for(long long int i=0;i<t;i++)
	{cin>>arr[i];
		}
	sort(arr,t);
	cout<<comparisions<<endl;
	int as;
	cin>>as;
	
}



