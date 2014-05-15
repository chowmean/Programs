#include<iostream>
using namespace std;
#include<conio.h>

int aux[100];
void merge_sort(int a[],int n)
{
	
	int i,j,k,l1,l2,u1,u2;
	 int size=1;
	while(size<n)
	{
		
		l1=0;
		k=0;
		
		while(l1+size<n)
		{
			
			l2=l1+size;
			u1=l2-1;
			
			u2=(((l2+size)-1)<n)?((l2+size)-1):(n-1);
			
			for(i=l1,j=l2;(i<=u1)&&(j<=u2);k++)
		     {
     			
     		    
     			if(a[i]<=a[j])
		     	  aux[k]=a[i++];
		     	else
				   aux[k]=a[j++];
		    }
		     for(;i<=u1;k++)
			   aux[k]=a[i++];
			   
             for(;j<=u2;k++)
			    aux[k]=a[j++];
			 l1=u2+1;
			 	 		     
		}
		
		for(i=l1;k<n;i++)
		    aux[k++]=a[i];
		for(i=0;i<n;i++)
		     a[i]=aux[i];
		     
	    size=size*2;
		
		   
    		}
	}

int main()
{ cout<<"This is merge sort"<<endl;
  int n;
  cout<<"enter the no. of element in array"<<endl;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
	cout<<"enter element no:"<<i+1<<endl;
	cin>>a[i];
 } 	
 cout<<"sorted array"<<endl;
 merge_sort(a,n);
 for(i=0;i<n;i++)
 {
   cout<<a[i]<<endl;	
 }
 getch();
 return 0;
}
