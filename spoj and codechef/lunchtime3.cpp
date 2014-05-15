#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>

#define in cin>>
#define out cout<<
#define MOD 1000000007

using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++)
    {  long long int b,c;
    cin>>b>>c;
    long long int answer=(((b*(b+1))/2)%MOD * ((c*(c+1))/2)%MOD)%MOD;
    cout<<answer<<endl;        }
    int as  ;
    cin>>as;
}
