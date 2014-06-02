#include<iostream>
using namespace std;
int main()
{
    
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    
    while(t--)
        {
        int a,b;
        cin>>a>>b;
        int min=3;
        for(int i=a;i<=b;i++)
            {
            if(arr[i]<min)
            {min=arr[i];
            }
        }
       cout<<min<<endl;
    }
    
    
    
}
