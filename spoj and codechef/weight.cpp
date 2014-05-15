#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int a;
cin>>a;
while(a--)
{int b,s;
cin>>b>>s;
int arr[b];
int sum_total=0;int sum_son=0;
for(int i=0;i<b;i++)
{cin>>arr[i];
sum_total=sum_total+arr[i];
}
sort(arr,arr+b);
for(int i=0;i<s;i++)
sum_son=sum_son+arr[i];
cout<<sum_total-(2*(sum_son))<<"\n";

          }
int as;cin>>as;
    }
