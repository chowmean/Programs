#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>

#define in cin>>
#define out cout<<


using namespace std;
int main()
{
    long long int t,max;
    cin>>t>>max;
    long long int arr[t];int count=0;
    for(int i=0;i<t;i++)
    cin>>arr[i];
    for(int i=0;i<t-1;i++)
    {if(arr[i]-arr[i+1]<max)
    {count++;
    i++;
    }
      cout<<count;      }       int as;cin>>as;}
