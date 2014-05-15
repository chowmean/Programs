
#include<iostream>
using namespace std;
#include<conio.h>
void quicksort(int a[],int first,int last)
{
	int low,high,pivot,temp;
	low=first;
	high=last;
	pivot=a[(first+last)/2];
	do
	{
		while(a[low]<pivot)
		{
		low++;
	
		}
		while(pivot<a[high])
		{
	
		
		high--;
	    }
		if(low<=high)
		{
			temp=a[low];
			a[low++]=a[high];
			a[high--]=temp;
			
		}
	}
	while(low<=high);

if(first<high)
	  quicksort(a,first,high);
if(low<last)
	   quicksort(a,low,last) ;
}

int main()
{ cout<<" This is quick sort"<<endl;
  int n;
  cout<<"Enter the no. of element in array"<<endl;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
	cout<<"enter element no:"<<i+1<<endl;
	cin>>a[i];
 }	
 cout<<"The sorted array is:"<<endl;
 quicksort(a,0,n-1);
 for(i=0;i<n;i++)
 {
   cout<<a[i]<<endl;	
 }
 getch();
 return 0;

}
