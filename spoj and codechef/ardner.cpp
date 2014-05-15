#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
#define ROOT_3 1.7320508075688772935274463

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	
	double a,b,c;
	cin>>a>>b>>c;
	double d=(ROOT_3*(a*a+b*b+c*c))/8;
	double s=(a+b+c)/2;
	d+=( 1.5 * sqrt( s * ( s - a ) * ( s - b ) * ( s - c ) ) ) ;
	printf("%0.2lf",d);cout<<endl;
	
	}
}
