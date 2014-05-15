#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>

#define in cin>>
#define out cout<<


using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {long long int a,b;
    cin>>a>>b;
    if(a==0)
    cout<<0<<" "<<0<<endl;
    else if(b==0)
    {cout<<0<<" "<<a<<endl;
         }
    else{
    long long int teacher;
    teacher=a%b;
    long long int answer;
    answer=a/b;
    cout<<answer<<" "<<teacher<<endl;
                    }     
              }     int as;cin>>as;
}
