//matchstics
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int a;
cin>>a;
float aar[a],arr[a];
for(int i=0;i<a;i++)
{cin>>aar[i];}
int as;
cin>>as;
while(as--)
{int c,d;cin>>c>>d;
float min=aar[c];
for(int i=c+1;i<=d;i++)
{if(aar[i]<min)
min=aar[i];}
double max=0;
for(int i=0;i<a;i++)          
{
if(i>=c && i<=d)
{arr[i]=((aar[i]-min)/2)+min;
if(arr[i]>max)
max=arr[i];
}          
else
{
arr[i]=min + aar[i];
if(arr[i]>max)
max=arr[i];}
 }



printf("%0.1f\n",max);
 
   }
int asd;cin>>asd;
    }
