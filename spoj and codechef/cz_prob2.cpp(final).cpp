#include<iostream>
#include<math.h>
using namespace std;
long long int calc(long long int b)
{long long int answer=1;
for(long long int i=2;i<=b*b;i++)
{long long int sum=1;int counter=1;
while(b%i==0)
{b=b/i;

sum=sum*i +1;
}
answer=answer*sum;}
   
return answer;    }

int main()
{int t;
cin>>t;
long long int b;
while(t--)
{cin>>b;
 cout<<calc(b)<<endl;  }
    }
