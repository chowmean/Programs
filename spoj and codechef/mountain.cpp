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
    {int a,b;
    cin>>a;
    long long int arra[a];
    for(int i=0;i<a;i++)
    cin>>arra[i];
    cin>>b;
    long long int arrb[b];
    for(int i=0;i<b;i++)
    cin>>arrb[i];
    long long int mindis=1000000;
    for(int i=0;i<a;i++)
    {       for(int j=0;j<b;j++)
            {if((abs(arra[i]-arrb[j]))<mindis)
            {            mindis=abs(arra[i]-arrb[j]);
                                             }
            if(mindis==0)
            break;
                    }
            if(mindis==0)
            break;
            }
    cout<<mindis<<endl;
    
    
    
    
              
              }
}
