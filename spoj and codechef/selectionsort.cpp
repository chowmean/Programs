#include<iostream>
using namespace std;
#include<conio.h>
void selectionsort(int a[],int n)
{
	int i,j,index,large;
	for(i=n-1;i>0;i--)
	{
		large=a[0];
		index=0;
		for(j=1;j<=i;j++)
		if(a[j]>large)
		{
			large=a[j];
			index=j;
		}
		a[index]=a[i];
		a[i]=large;
	}
}

int main()
{ cout<<"This is selection sort"<<endl;
  int n;
  cout<<"Enter the no. of element in array"<<endl;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
	cout<<"Enter element no:"<<i+1<<endl;
	cin>>a[i];
 }	
 cout<<" The sorted array is:"<<endl;
 selectionsort(a,n);
 for(i=0;i<n;i++)
 {
   cout<<a[i]<<endl;	
 }
 getch();
 return 0;
}
