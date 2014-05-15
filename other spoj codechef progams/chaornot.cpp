#include<iostream>
#include<vector>
#include <stdlib.h>
using namespace std;
vector<int> diff;
int ans[5000];

int check(int ans[],int number,int index)
{   int flag=1;
    for(unsigned int i=0;i<diff.size();i++)
    {
        for(int j=0;j<index;j++)
        {
            if(diff[i]==abs(ans[j]-number))
            {flag=0;break;
            }
            else
            {flag=1;
            }
            
        }
        if(flag==0)
        break;
    
    
    }
    if(flag==1)
    {
        for(int i=0;i<index;i++)
        {diff.push_back(abs(ans[i]-number));
        }ans[index]=number;
        return 1;
    }
    else
    return 0;
}

int main()
{int t;
cin>>t;
int arr[t];

for(int i=0;i<t;i++)
{
    cin>>arr[i];
}

ans[0]=arr[0];
ans[1]=arr[1];
diff.push_back(abs(arr[1]-arr[0]));
int temp=2;
for(int i=2;i<t&&i<5000;i++)
{
    if(check(ans,arr[i-1],temp))
    temp++;
}
cout<<temp<<endl;
for(int i=0;i<temp;i++)
cout<<ans[i]<<" ";
cout<<endl;

    
}
