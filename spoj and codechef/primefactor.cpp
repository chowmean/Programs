//prime factorization
#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
for(int i=2;i*i<a;i++)
{if((a%i)==0)
cout<<i<<endl;
a=a/i;}
int s;cin>>s;
}
