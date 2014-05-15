#include<iostream>
#include<algorithm>
using namespace std;
int main()
{long long int a, b;
cin>>a;
cin>>b;
long long int row[a];
for(int i=0;i<a;i++)
        {row[i]=0;
                         }
for(int j=0;j<b;j++)
{
        for(int i=0;i<a;i++)
        {if(row[i]!=0)
                row[i]=row[i]+1;
                         }
        
int position,height,type;
height=0;
cin>>type;
if(type==1)
           {cin>>position>>height;
                         row[position-1]=height;
                              }
if(type==2)
           {cin>>position;
                              row[position-1]=0;
           
                              }
        int row2[a];                       
for(int i=0;i<a;i++)
        {int t;
                    t=row[i];
                    row2[i]=t;
                         } 
sort(row2,row2+a);

int temp=row2[a-1];   int pos=0;
    for(int i=0;i<a;i++)
        {if(row[i]==temp)
               {pos=i;
                         } 
                                  } 
             int ans=0;                         
    for(int i=0;i<=pos;i++)
            {if(row[i]==0)
            {;}
              else
              {ans=ans+1;
                  }
                          }
  cout<<ans<<"\n";    
 }   }
