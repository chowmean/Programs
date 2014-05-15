#include<iostream>
using namespace std;
int main()
{long long int a,b;
cin>>a>>b;

char check[a];
for(long long int i=0;i<a;i++)
check[i]=0;
int array[b][3];char b1;
for(int i=0;i<b;i++)
        {cin>>b1;
                    
                    if(b1=='Q')
                    array[i][0]=0;
                   if(b1=='T')
                    array[i][0]=1;        
        cin>>array[i][1];
        cin>>array[i][2];}
         
for(int j=0;j<b;j++)
{
int max=0;
if(array[j][0]==0)
{
for(int i=(array[j][1]);i<=(array[j][2]);i++)
        {if (check[i]==0)
         {max=max+1;
                         }          } cout<<max<<"\n";
                         }
if((array[j][0])==1)
{for(int i=(array[j][1]);i<=(array[j][2]);i++)
         {if(check[i]!=2)
         check[i]=check[i]+1;
         else
         check[i]=0; 
         }
}          

}
} 
