#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int a,b;
cin>>a>>b;
while(a!=0 && b!=0)
           {int attack[a];
           int defend[b];
           int min=1000;int mind=1000;int mind2=1000;
           for(int i=0;i<a;i++)
                   {cin>>attack[i];
                   if(attack[i]<min)
                    min= attack[i]; }
           for(int i=0;i<b;i++)
                   {{cin>>defend[i];
                   if(defend[i]<mind)
                    {mind2=mind;
                    mind=defend[i]; 
                    
                                  } } 
                    if(defend[i]>mind && mind2<defend[i])  
                    {mind2=defend[i];
                          }                     
                          
           
           if(attack[0]>=defend[1])
           cout<<"N"<<"\n";
           else cout<<"Y"<<"\n";
           cin>>a>>b;
           }
    }}

