#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
char arr[a];
cin>>arr;

int ans=0;
char pre;

for(int i=1;i<a;i++)
        {pre=arr[i-1];
                    if(arr[i]==pre)
                          {ans=ans+1;
                         
                                }
                                else
                                {;}
                                    }
cout<<ans;
  }
