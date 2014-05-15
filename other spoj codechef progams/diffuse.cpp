#include<iostream>
#include<math.h>
using namespace std;



bool IsPrime(long long int num)
	{
	    if(num<=1)
	        return false;
	    if(num==2)
	        return true;
	    if(num%2==0)
	        return false;
	    long long int sRoot = sqrt(num*1.0);
	    for(long long int i=3; i<=sRoot; i+=2)
	    {
	        if(num%i==0)
	            return false;
	    }
	    return true;
	}



bool check(long long int a)
{
	double number=a-1/4;
	double b=1;
	if(number-int(number)==0)
	return true;
	else
	return false;	
}



long long int count(long long int from , long long int larger)
{long long int total=1;
long long int increment=(from-1)/4;
	long long int i=increment+1;
	while(((4*i)+1)<=larger)
	{if(IsPrime((4*i)+1))
	{total=total+1;
		}increment+1;
		}
	
return total;	
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{	long long int lower,larger;
	cin>>lower>>larger;long long int ans=0;
	for(int i=lower;i<=larger;i++)
	{if(IsPrime(i)&&check (i))
	{ans=count(i,larger);break;
		}
	
		}
	cout<<ans<<endl;	}
}
