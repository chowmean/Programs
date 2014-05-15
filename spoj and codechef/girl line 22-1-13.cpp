#include<iostream>
using namespace std;
int main()
{int a;
int b;
cin>>a>>b;
char arr[a];
cin>>arr;
for(int i=0;i<b;i++)
        {char pre;
        pre=arr[0];
        for(int j=1;j<a;j++)
          {if(pre=='B' && arr[j]=='G')
                       {arr[j-1]='G';
                       arr[j]='B';
                        pre=arr[j+1];
                        j=j+1;              }
                 
                 else
                 {  pre=arr[j];}
}                    }
cout<<arr;
int n;cin>>n;
    }
