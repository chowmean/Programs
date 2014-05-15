#include<iostream>
using namespace std;
int main()
{int a;
    cin>>a;
char arr[a];
cin>>arr;
int count=0;
int tmp=arr[0];
for(int i=1;i<a;i++)
{if(tmp==arr[i])
count=count+1;
else
tmp=arr[i];
        }
cout<<count;
int as;cin>>as;
    }
