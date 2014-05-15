#include<iostream>
using namespace std;
#include<conio.h>
void insert_sort(int a[],int n)
{
int i,k,y;
for(k=1;k<n;k++)
{
	y=a[k];
	for(i=k-1;(i>=0)&&(y<a[i]);i--)
	      a[i+1]=a[i];
    a[i+1]=y;
}	
}

int main()
{ cout<<"This is insertion sort"<<endl;
  int n;
  cout<<"Enter the no. of element in array"<<endl;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
	cout<<"Enter element no:"<<i+1<<endl;
	cin>>a[i];
 }	
 cout<<"The sorted array is:"<<endl;
 insert_sort(a,n);
 for(i=0;i<n;i++)
 {
   cout<<a[i]<<endl;	
 }
 getch();
 return 0;
}
