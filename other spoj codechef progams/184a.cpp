#include<iostream>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    if((2*(b-1))+1<=a)
    {
        cout<<(2*(b-1))+1;
        
    }
    else
    {
        if(a%2==0)
        cout<<2*(b-a/2);
        else
        cout<<2*(b-((a/2)+1));
    }int as;
    cin>>as;
}
