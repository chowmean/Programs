//tower of hanoi

#include<iostream>
using namespace std;
int toh(int n,char source,char destination,char by)
{if(n==1)
        {cout<<"move from "<<source<<"to"<<destination<<"\n";
        return 1;
        }
 else
 {toh(n-1,source,by,destination);
  cout<<"move from "<<source<<"to"<<destination<<"\n";         
  toh(n-1,by,destination,source);  
  }
  }
int main()
{int a;
cin>>a;
toh(a,'a','b','c');
int k;cin>>k;
    }

//
