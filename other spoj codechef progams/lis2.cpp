#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* lis() returns the length of the longest increasing subsequence in
    arr[] of size n */
int lis( long long int arr[],long long int arr2[],long long  int n )
{
   long long int *lis, i, j, max = 0;
   lis = (long long int*) malloc ( sizeof(long long int ) * n );
 
   /* Initialize LIS values for all indexes */
   for ( i = 0; i < n; i++ )
      lis[i] = 1;
    
   /* Compute optimized LIS values in bottom up manner */
   for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( arr[i] > arr[j] && arr2[i] > arr2[j] && lis[i] < lis[j] + 1)
            lis[i] = lis[j] + 1;
    
   /* Pick maximum of all LIS values */
   for ( i = 0; i < n; i++ )
      {
			if ( max < lis[i] )
    	
	     max = lis[i];}
 
 	
   /* Free memory to avoid memory leak */
   free( lis );
 
   return max;
}
 
/* Driver program to test above function */
int main()
{	long long int t;
	cin>>t;
	
	long long int arr[t],arr2[t];
	for(long long int i=0;i<t;i++)
	cin>>arr[i]>>arr2[i];
	cout<<lis(arr,arr2,t)<<endl;
		
		
	
  
}
