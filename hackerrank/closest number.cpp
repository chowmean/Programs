#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;

long long int power(long long int x,long long int y)
{
    long long int temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);      
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,a,b,ans=0;
		cin>>a>>b>>x;
		if(b<0)
		cout<<0<<endl;else
		{
		long long int val=power(a,b);
		if(val%x<=x/2)
			ans=val-(val%x);
		else
			ans=val-(val%x)+x;
		cout<<ans<<endl;
		}
	}
	
}

