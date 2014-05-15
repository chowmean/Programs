//didnt perform well

#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
int arr[a][a];
       for(int i=0;i<a;i++)
        {for(int j=0;j<a;j++)
                 {arr[i][j]=0;}
                             }
int i=a/2;
int j=0;
int k=1;
while (k<=(a*a))
{if(i<=0)
i=a-1;
else i--;
if(j>=a-1)
j=0;
else
j++;
if(arr[i][j]!=0)
{i=i+1;
                }
else
{arr[i][j]=k;
k++;
                }                } 
    
for(int i=0;i<a;i++)
        {cout<<"\n";
                    for(int j=0;j<a;j++)
                 {cout<<arr[i][j]<<" ";
                             }

   int a;cin>>a; }
    }
