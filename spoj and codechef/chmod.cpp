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
    int arr[t]; 
    for(int i=0;i<t;i++)
    cin>>arr[i];
    int numberoperation;
    cin>>numberoperation;
    long long int answer[numberoperation];
    for(int i=0;i<numberoperation;i++)
    {int a,b,c;
    cin>>a>>b>>c;
     answer[i]=1;
     for(int j=a-1;j<b;j++)
     {answer[i]=((answer[i]%c)*(arr[j]%c))%c;
     cout<<answer[i]<<endl;}
    }
    
    

    
}
