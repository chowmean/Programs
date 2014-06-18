#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;



int find(int x,int y,int A[])
{
	if(x>y) return 1;
    if(y!=0)
    {if(A[x] %2 == 1)
	   return 1;
    else
    if(A[x] %2==0)
        return 2;
    }
    else
    return 1;
}

int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=1;i<=t;i++)
	cin>>arr[i];
	int q;cin>>q;
	while(q--)
	{int a,b;
	cin>>a>>b;
	if(find(a,b,arr)%2==1)
	cout<<"Odd"<<endl;
	else
	cout<<"Even"<<endl;
		}
}

