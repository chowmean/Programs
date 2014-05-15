#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{int a;
cin>>a;
while(a--)
{int b;
cin>>b;
string arr[b];
for(int i=0;i<b;i++)
{cin>>arr[i];
 }
 

while(next_permutation(arr,arr+(b)));
{
int temp=0;
for(int i=0;i<b-1;i++)
{temp=0;
int y=arr[i].length();
if(arr[i][y-1]==arr[i+1][0])
temp=0;
else
{temp=temp + 1;
break;}
}


if(temp==0)
{cout<<"Ordering is possible."<<"\n";continue;}
else
{cout<<"The door cannot be opened."<<"\n";continue;}
 
  }
         
}int as;
cin>>as;
    }
