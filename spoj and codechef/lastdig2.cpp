#include<iostream>
#include<string>
using namespace std;
int v(int a,int b){if (a%b==0)return b;
else return a%b;}
int p(int a,int b){
int c=1;
for(int i=0;i<b;i++)c=c*a;
return c;
}
int main()
{int t;cin>>t;
string a;
long long int b;
while(t--)
{cin>>b>>a;
int c;
if(a.length()==1)
{c=(a[a.length()-1]-'0');}
else
{c=(a[a.length()-1]-'0') + (a[a.length()-2]-'0')*10;}
int d=b%10;
if(c==0 && d==0)cout<<0<<endl;
if(c==0 && d!=0)cout<<1<<endl;
else if(c!=0)
{if(d==0||d==1||d==5||d==6)cout<<d<<endl;
if(d==2||d==3||d==7||d==8){cout<<p(d,v(c,4))%10<<endl;}
if(d==4||d==9){cout<<p(d,v(c,2))%10<<endl;}

}
}
}
