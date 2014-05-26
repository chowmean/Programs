// A Dynamic Programming solution for subset sum problem
#include <stdio.h>
 #include<iostream>
 using namespace std;
// Returns true if there is a subset of set[] with sun equal to given sum
bool isSubsetSum(long long int set[], int n, int sum)
{
    // The value of subset[i][j] will be true if there is a subset of set[0..j-1]
    //  with sum equal to i
    bool subset[sum+1][n+1];
 
    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++)
      subset[0][i] = true;
 
    // If sum is not 0 and set is empty, then answer is false
    for (int i = 1; i <= sum; i++)
      subset[i][0] = false;
 
     // Fill the subset table in botton up manner
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] || subset[i - set[j-1]][j-1];
       }
     }
 
    /* // uncomment this code to print table
     for (int i = 0; i <= sum; i++)
     {
       for (int j = 0; j <= n; j++)
          printf ("%4d", subset[i][j]);
       printf("\n");
     } */
 	int count=0;
     if (subset[sum][n]==true)
	 {for(int i=0;i<n;i++)
	 if(subset[sum][i]==true)
	 count++;
	 
	 cout<<count<<endl;
	 for(int i=0;i<n;i++)
	 {if(subset[sum][i]==true)
	 cout<<i<<" ";
		}
	 cout<<endl;
	return true;	}
return false;
}
 
// Driver program to test above function
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
		int n;cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{cin>>arr[i];}
  		int sum=n;int flag=0;
		  while(sum*sum<100000)
  		{if(isSubsetSum(arr, n, sum) == true)
		{flag=1;
		break;}
		
		sum=sum+n;}
 
 if(flag=0)cout<<-1<<endl;
}

}
