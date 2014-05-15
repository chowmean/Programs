#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{int a;
cin>>a;
for(int i=0;i<a;i++)
{int b;
cin>>b;
int c=b+1;
int digits = floor(log10(b))+1;
cout<<digits;
int arr[digits];
int divisor=1;int remain=10;
for(int j=0;j<digits;j++)
{arr[j]=(b/divisor)%remain;
divisor=divisor*10;
remain=10;
 }
sort(arr,arr+digits);
int check=0;
int arr1[digits];
while(check==0)
{for(int j=0;j<digits;j++)
{arr1[j]=(c/divisor)%remain;
divisor=divisor*10;
remain=10;
 }
sort(arr1,arr1+digits);
int er=0;
for(int j=0;j<digits;j++)
{if(arr[i]==arr1[i])
er=0;
else er=1;}
if(er==0)
{for(int i=0;i<a;i++)
cout<<c;check=1;}
else c++;
}
         
       

}
 int m;cin>>m;
    }
