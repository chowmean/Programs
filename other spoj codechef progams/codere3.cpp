//http://ideone.com/DS4Wdw

#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

int lis(int arr[], int n )
{
   int lis[n],lis2[n] ,i, j, max = 0;
	int arr2[n];
	for(int i=0;i<n;i++)
	{arr2[i]=arr[n-i-1];lis[i] = 1;lis2[i]=1;}
 
   /* Initialize LIS values for all indexes */
  
   /* Compute optimized LIS values in bottom up manner */
   for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         {if ( arr[i] > arr[j]  && lis[i] < lis[j] + 1)
            lis[i] = lis[j] + 1;
            
        if ( arr2[i] > arr2[j]  && lis2[i] < lis2[j] + 1)
            lis2[i] = lis2[j] + 1;
			}
   /* Pick maximum of all LIS values */
   if(n==1)
   max=1;
   else if(n==2 )
   max=2;
   else{   
   for ( i = 0; i < n; i++ )
      {for(int j=i+1;j<n;j++)
      {if(max<lis[i]+lis2[n-j-1])
      max=lis[i]+lis2[n-j-1];
			}
			}
}
   return max;
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{	int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		cout<<lis(arr,n)<<endl;
		}
}

