#include<iostream>
#include<conio.h>
using namespace std;
int main()
{long long int a;
cin>>a;
for(long int i=0;i<a;i++)
         {long long int c=0;
         cin>>c;
         long long int b=0;
              if(c%2==0)
              b=c/2;
              for(long long int j=1;j<=(c/4);j++)
                       {if((c%j)==0)
                       b=b+j;}
              cout<<b<<"\n";
              }
getch();
}
