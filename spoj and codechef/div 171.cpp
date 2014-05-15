#include<iostream>
using namespace std;
int main()
{int n;
int b;
cin>>n>>b;
int aa[n];
for(int i=0;i<n;i++)
cin>>aa[i];int sum1=0;int ans1=0;
for(int i=0;i<n;i++)
        {
        int sum=0;int ans=0;;
        for(int j=0;j<n;j++)
                {sum =sum + aa[j];
                ans=ans +1;
                if(sum>b)
                {      if(ans-1>ans1)  
                       {ans1=ans - 1;
                       continue;}
                         
                         }
                else continue;            
                }
        }cout<<ans1;
int as;cin>>as;
   
}
