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
	long long int fact[21];
	fact[1]=1;fact[0]=1;
	for(int i=2;i<=20;i++)
	{fact[i]=fact[i-1]*i;cout<<fact[i]<<endl;}
	int t;
	cin>>t;
	while(t--){
	
    long long int n ;
	
	cin>>n;
	int arr[(int)sqrt(n)];
    
	//function
	
	int k=0;	
	 while (n%2 == 0)
    {
     arr[k]=2;
        n = n/2;
        k++;
    }
 	int limit=sqrt(n); 
	    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (long long int i = 3; i <= limit; i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
			arr[k]=i;
            n = n/i;
            k++;
            
        }
    }
 
	arr[k]=n;
	
	
	long long int prev=1;
	prev=prev*arr[0];
	
	
	long long int i;
	i=2;
	int j=2;
	if(n==2)cout<<2<<endl;
	else
	if(n==1)cout<<1<<endl;
	else{
	
	while(true)
	{j++;
	if(i>=n){
		
		if(i%n==0)
			break;
		else
			i=i*fact[j];	
			//cout<<i<<endl;
			}
	else
	i=i*fact[j];
		
	}
	
	cout<<j-1<<endl;
	}
	
	
	//cout<<i<<endl;
	//end
	}
    return 0;
}








