#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>
#include<vector>
#define in cin>>
#define out cout<<


using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n,m;
        cin>>n>>m;
        int pattern[m];
        for(int i=0;i<m;i++)
        cin>>pattern[i];
        int number;
        vector< vector <int> > myvector;
        for(int i=0;i<n;i++)
        {cin>>number;
        for(int j=0;j<number;j++)
        {        
        int y;
        cin>>y;
        myvector[i].push_back(y); }
        sort(myvector[i].begin(),myvector[i].end());
        reverse(myvector[i].begin(),myvector[i].end());
        }
        
         int sum=0;
        for(int i=0;i<m;i++)
        {if(!myvector[pattern[i]].empty())
        sum+=myvector[pattern[i]].back();
        myvector[pattern[i]].pop_back();
                }
        cout<<sum<<endl;
        
              
              }
}
