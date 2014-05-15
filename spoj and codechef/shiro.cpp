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
    while(t--)
    {   int levels;
    cin>>levels;
    int numberofflags[levels];int sum=0;
    
    for(int i=0;i<levels;i++)
    {cin>>numberofflags[i]; 
    sum=sum+numberofflags[i];}
    
    float prob[levels];
    
    for(int i=0;i<levels;i++)
    cin>>prob[i];

    float divisor=0;
    for(int i=0;i<levels;i++)
    {
            divisor=divisor + (prob[i]/100)*numberofflags[i]; }
    float answer=divisor/sum;
    printf("%.7lf",answer);
    cout<<endl;
              
              }
                           }
