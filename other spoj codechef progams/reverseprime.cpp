#include<iostream>
#include<cmath>
#include<vector>
#include <algorithm> 
#include<cstdio>

using namespace std;



 




long long  power(int a, int n, int mod)
{
 long long  power=a,result=1;

 while(n)
 {
  if(n&1) 
   result=(result*power)%mod;
  power=(power*power)%mod;
  n>>=1;
 }
 return result;
}

bool witness(int a, int n)
{
 int t,u,i;
 long long  prev,curr;

 u=n/2;
 t=1;
 while(!(u&1))
 {
  u/=2;
  ++t;
 }

 prev=power(a,u,n);
 for(i=1;i<=t;++i)
 {
  curr=(prev*prev)%n;
  if((curr==1)&&(prev!=1)&&(prev!=n-1)) 
   return true;
  prev=curr;
 }
 if(curr!=1) 
  return true;
 return false;
}

inline bool IsPrime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  return (false);

 if(number<1373653)
 {
  for( int k = 1; 36*k*k-12*k < number;++k)
  if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   return (false);

  return true;
 }

 if(number < 9080191)
 {
  if(witness(31,number)) return false;
  if(witness(73,number)) return false;
  return true;
 }


 if(witness(2,number)) return false;
 if(witness(7,number)) return false;
 if(witness(61,number)) return false;
 return true;

 /*WARNING: Algorithm deterministic only for numbers < 4,759,123,141 (unsigned int's max is 4294967296)
   if n < 1,373,653, it is enough to test a = 2 and 3.
   if n < 9,080,191, it is enough to test a = 31 and 73.
   if n < 4,759,123,141, it is enough to test a = 2, 7, and 61.
   if n < 2,152,302,898,747, it is enough to test a = 2, 3, 5, 7, and 11.
   if n < 3,474,749,660,383, it is enough to test a = 2, 3, 5, 7, 11, and 13.
   if n < 341,550,071,728,321, it is enough to test a = 2, 3, 5, 7, 11, 13, and 17.*/
}









long long int reverse(long long int a)
{
	//int len=floor(log10(abs(a))) + 1;
	long long int rev=0;
	while(a>0)
	{rev=(rev*10)+(a%10);
		a=a/10;
		}
	return rev;
}




int main()
{
	for( int i=11;i<10000000;i=i+4){
	 long long int r=reverse(i);
	if(IsPrime(i)==1 && IsPrime(r)==1 )
	{if(r>i)
		printf("%lld\n",i);
	else;
	}}
}

