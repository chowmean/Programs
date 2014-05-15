#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int a;
cin>>a;
while(a!=0)
{int arr1[a];
int arr2[a];
for(int i=0;i<a;i++)
cin>>arr1[i];
for(int i=0;i<a;i++)
cin>>arr2[i];
sort(arr1,arr1+a);
sort(arr2,arr2+a);

long long int sum=0;
for(int i=0;i<a;i++)
{sum=arr1[i]*arr2[a-(i+1)]+sum;
        }
cout<<sum<<endl;        
cin>>a;           }
    }
