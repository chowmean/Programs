#include<iostream>
#include<string>
using namespace std;
string sum(string a,string b)
{int alen=a.length()-1;
int blen=b.length()-1;
string result;
int c=0,remain=0;
while(alen>0 && blen>0)
{c=a[alen]-'0' + b[blen]-'0'+remain;
if(c>10)
{remain=c/10;
c=c%10;
result.append(1,(char)c);
        }
 }    
 return result;  }
int main()
{string a,b;string d;;
cin>>a>>b;
d=sum(a,b);
//d.copy(sum(a,b),0,sum(a,b).length()-1);
cout<<d;
int as;cin>>as;

    }
