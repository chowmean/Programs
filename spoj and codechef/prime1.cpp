#include<iostream>
#include<bitset>
using namespace std;
bitset<100000> arr;
long long int array[1]
int prime_gen()
{   arr.set(0);
    arr.set(1);
    for(long long int i=2;i*i<100000;i++)
          if(arr.test(i)==true)
          ;
          else
          {for(long long int j=2;j*i<100000;j++)
          arr.set(j*i);
               }
    
    }


int main()
{prime_gen();
int a;
cin>>a;
while(a--)
{long long int a1,b1;
cin>>a1>>b1;
for(long long int i=a1;i<b1+1;i++)
if(arr.test(i)==false)
cout<<i<<endl;          }}
