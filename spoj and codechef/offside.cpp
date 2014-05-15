#include<iostream>
#include<algorithm>
using namespace std;
int main()
{long long int a,b;
cin>>a>>b;
while(a!=0 && b!=0)
           {long long int attack[a];
           long long int defend[b];long long int min=10001;long long int mind=10001;long long int mind2=10001;
           for(int i=0;i<a;i++)
                   {cin>>attack[i];
                   if(attack[i]<min)
                   min=attack[i];
                               }
           for(int i=0;i<b;i++)
                   {cin>>defend[i];
                    }
           sort(defend,defend+b);
           if(defend[1]<=min)
           cout<<"N\n";
           else
           cout<<"Y\n";
           cin>>a>>b;
                  }
    }
