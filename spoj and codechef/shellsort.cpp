#include<iostream>
using namespace std;
#include<conio.h>
#define num_item 100
void shellsort(int a[],int size);
int a[num_item];
void shellsort(int a[],int size)
{
     int i,j,incr,temp;
     incr=3;
     while(incr>0)
     {
      for(i=0;i<size;i++)
      {
       j=i;
       temp=a[i];
       while((j>=incr) && (a[j-incr]>temp))
       {
        a[j]=a[j-incr];
        j=j-incr;
       }
       a[j]=temp;
      }
      if((incr/2)!=0)
      incr=incr/2;
      else if(incr==1)
      incr=0;
      else
      incr=1;
     }
}
int main()
{ cout<<" This is shell sort"<<endl;
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
 shellsort(a,n);
 for(i=0;i<n;i++)
 {
   cout<<a[i]<<endl;
 }
 getch();
 return 0;
}
