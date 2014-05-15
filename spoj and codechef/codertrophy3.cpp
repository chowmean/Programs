#include<iostream>
#include<algorithm>
using namespace std;
long long int factorial(int num)
{long long int ans=1;
    for(int i=1;i<num;i++)
         {ans=ans*i;
         }
    return ans;
    }
int main()
{long long int a;long long int b;
cin>>a;
cin>>b;
long long int array[a];
for( int i=0;i<a;i++)
{cin>>array[i];
        }
        long long int x=factorial(a);
long long int arrayuse[x];
long long int k=0;
for(int i=0;i<a;i++)
{for(int j=i+1;j<a;j++)
         {arrayuse[k]=array[i]+array[j];
          k=k+1;}
        }
        cout<<x;
cout<<arrayuse[0];
    

sort(arrayuse,arrayuse+x);
cout<<arrayuse;
int position;
for (int i=0;i<x;i++)
{if(arrayuse[i]==b)
  position=i+1;  }
float answer;
answer=position/x;  
cout<<answer;
  int y;cin>>y;
}

