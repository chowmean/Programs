#include <iostream>
using namespace std;

long long int gcdr (long long  int a,long long int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}


int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        long long int b,c,d;
        cin>>b>>c>>d;
        
        if(gcdr(c,b)==1 && gcdr(d,b)==1 && gcdr(d,c)==1 )
        {
        if(b>=c && b>=d)
        {
            if(b*b==c*c + d*d)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(c>=b && c>=d)
        {
            if(c*c==b*b+ d*d)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            
        }
        else if(d>=c && d>=b)
        {
            if(d*d==c*c + b*b)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            
        }
        else
        cout<<"NO"<<endl;}
        else
        {cout<<"NO"<<endl;
			}
    }
}
