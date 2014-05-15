#include<iostream>
using namespace std;
int main()
{int a,b;
cin>>a>>b;
int arr[a][b];
int temp;
int temprow;int ans=0;
for(int i=0;i<a;i++)
{cin>>arr[i][0];
if(temprow==arr[i][0])
{ans=1;
}
temp=arr[i][0];
for(int j=1;j<b;j++)
 {cin>>arr[i][j];
 if(arr[i][j]==temp)
 {temprow=arr[i][j];}
 else
 {
 ans=1;
 }        }
        }
    if(ans==1)
    cout<<"NO";
    else 
    cout<<"YES";
    int as;cin>>as;
    
    }
