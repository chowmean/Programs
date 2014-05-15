#include<iostream>
#define max 1111
using namespace std;
char arr[max][max];
int ans[max][max];
int result[max][max];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        ans[i][j] = arr[i][j] - '0';
        
        result[0][0]=ans[0][0];
        result[0][1]=ans[0][0]+ans[0][1];
        result[1][0]=ans[0][0]+ans[1][0];
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(ans[i-1][j]<ans[i][j-1])
                result[i][j]=ans[i][j]+result[i-1][j];
                else
                result[i][j]=ans[i][j]+result[i][j-1];
            }
        
        }
        
        cout<<result[n-1][m-1]<<endl;
        
        
    }int as;cin>>as;
}
