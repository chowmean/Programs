#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{int a;
cin>>a;
char arr[a];
cin>>arr;
int nol=0;int nor=0;
int index=0;
for(int i=0;i<a;i++)
{if((arr[i]=='L' || arr[i]=='R') && (nol==0 && nor==0))
index=i+1;
if(arr[i]=='L')
{nol=nol+1;
                }
 if(arr[i]=='R')
 {nor=nor+1;
                }

        }cout<<index;
cout<<" "<<index+(nor)+(nol-nor);int sa;cin>>sa;
    }
