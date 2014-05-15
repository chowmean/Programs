//sieve
#include<iostream>
using namespace std;

int primesieve(int n)
{int array[n];
for(int i=0;i<n;i++)
array[i]=0;
for(int i=2;i*i<n;i++)
{for(int j=i+1;j<n;j++)
{if(j%i==0)
array[j]=1;
         }


}
for(int i=0;i<n;i++)
if(array[i]==0)
cout<<i<<"\n";
return 1; 
    }

int main()
{int n;
cin>>n;
    primesieve(n);
int as;cin>>as;

    }
