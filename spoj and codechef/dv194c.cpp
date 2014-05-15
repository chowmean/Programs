#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>
 
 
 
 
using namespace std;
int main()
{   long long int arr[464160];
    long long int t;
    cin>>t;
    
    for(long long int i=0;i<464160;i++)
    {arr[i]= pow(3,(double)i);
            }
    long long int k=(long long int)pow((double)t,(1.0/3.0))+1;
    long long int value=0;long long int count=0;long long int temp=k;
    while(true)
    { if(arr[k]>t)
      {k--;
      
      }
      else
      {     int tmpr;
          {
          tmpr=value+arr[k];
     
        if(k<0)
        {   count++;
            k=++temp;
            while(true)
            {if(value+arr[k]<t)
            {value=value+arr[k];
            
            break;
            }
            else
            k=--temp;}
        
        }
        k--; 
      }
       if(tmpr==t)
       {    count++;
           break;   
    }
    else
    {
        ;
        
    }}
    }
    cout<<count;
    
    
            
}
