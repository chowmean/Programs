#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++)
cin>>arr[i];int b;
cin>>b;
for(int i=b-1;i<a-1;i++)
arr[i]=arr[i+1];
for(int i=0;i<a-1;i++)
cout<<arr[i];
int as;cin>>as;
    }
