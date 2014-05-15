#include<iostream>
using namespace std;
int main()
{int a;cin>>a;
while(a--)
{long long int number;
cin>>number;
bool t=true;
long long int k=number;
while(1)
{while(k>0)
          {if(k%10==1 || k%3==10)
{t=false;
k=k/10;}
else t=true;}
if(t)
number--;
else 
{cout<<k<<"\n";
break;}
          }        }
int as; cin>>as;
    }
