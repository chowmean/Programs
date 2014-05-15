#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
long long int mind=100000000;
long long int mind2=100000000; 
long long int b;
for(int i=0;i<a;i++)
{cin>>b;
                   if(b<mind)
                    {mind2=mind;
                    mind=b; 
                    
                                  } 
                    if(b>mind && mind2>b)  
                    {mind2=b;
                          }  
                    
        
        } 
        if(mind2==100000000)
        cout<<"NO";
        else
        cout<<mind2;   }
