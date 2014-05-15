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
    int t;
    cin>>t;
    long long int arr[t];
    long long int prev=0;
    long long int index=0;
    long long int length=0;
    long long int longest=0;
    long long int longindex=0;
    for(int i=0;i<t;i++)
    {cin>>arr[i];
    if(prev<=arr[i])
    {length=length+1;
    prev=arr[i];
     if(length>longest){longest=longest+1;longindex=index;  } 
                }
    else
    {
    index=i;
    prev=arr[i];
    length=1;
        }
    
    
            }
     for(int i=longindex;i<((longindex+longest));i++)
     {cout<<arr[i];
     if(i<(longindex+longest)-1)
     cout<<" ";
     }         cout<<endl;
     
     
}
