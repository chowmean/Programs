#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>
#include<cstdio>
#include<ctype.h>
using namespace std;
#define MAXN 1111
long long int faradia[MAXN];

long long int max(unsigned long long int a, unsigned long long int b){
return a > b ? a : b;
}
 
int main()
{
  int  t;
  scanf("%d", &t);
  for(int cs=1;cs<=t;cs++)
  {
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%lld",&arr[i]); 
	faradia[0]=arr[0];
	faradia[1]=arr[1]; 
    for(int i=0;i<n;i++)
    {
      long long a,b;
      a=arr[i] + (i > 1 ? faradia[i-2] : 0);
      b=i > 0 ? faradia[i-1] : 0;
      faradia[i] = max(a,b); 
    }
     printf("Case %d: %lld\n", cs, faradia[n-1]);
   
}
return 0;
} 
