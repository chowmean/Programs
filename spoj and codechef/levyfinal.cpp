#include<iostream>
using namespace std;

int array[5000];
int primesieve()
{
for(int i=0;i<5000;i++)
array[i]=0;
for(int i=2;i*i<5000;i++)
{for(int j=i+1;j<5000;j++)
{if(j%i==0)
array[j]=1;
         }


}
return 1; 
    }


int main()
{int a;
cin>>a;
while(a--)
{double b;cin>>b;
int ans=0;double check; 

 {for(double j=2;j<b/2;j++)
 {if(array[(int)j]==0)
      {check= b - (2*j);
      if((check -(int)check)==0 && array[(int)check]==0 )
      ans=ans+1;
                 }
 
          }
         }
         cout<<ans/2<<"\n";
 
          }int as;cin>>as;
    }
