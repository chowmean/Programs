#include<stdio.h>
#define F(i,a) for(i=0;i<a;i++)
long long input;
long long sum; 
using namespace std;
int main()
{int a,i;
scanf("%d",a);
F(i,a)
      {scanf("%lld",input);
      sum=input+1;
                     for(int j=2;j*j<input;j++)
                     {if(j%input)
                     sum=sum+j+input/j;                          }
          printf("%lld\n",sum);
          
          }
          return 0;
    }
