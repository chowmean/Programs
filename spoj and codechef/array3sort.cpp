//i dont know which sort :P
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
{   int t;
    in t;
    int arr[t]; int max=0;
    for(int i=0;i<t;i++)
    {in arr[i];
    if(max<arr[i])
    max=arr[i];
    }
    int sort[max];
    for(int i=0;i<t;i++)
    sort[i]=0;
    for(int i=0;i<t;i++)
    {sort[arr[i]]=1;
    }
    for(int i=0;i<max+1;i++)
    {       if(sort[i]==1)
            out " "<<i;   
            }
            int as;in as;
    }
