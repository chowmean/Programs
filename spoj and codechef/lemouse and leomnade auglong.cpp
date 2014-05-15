#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>

#define in cin>>
#define out cout<<


using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {int rooms,visits;
    cin>>rooms>>visits;
    int visit_pattern[visits];
    for(int i=0;i<visits;i++)
    cin>>visit_pattern[visits];
    
    
    
    int array_number[rooms];
    int arraynum[rooms][100000];int list[rooms];
    for(int i=0;i<rooms;i++)
    {       int y;
            cin>>y;array_number[i]=y;list[i]=1;
    for(int j=0;j<y;j++)
    {cin>>arraynum[i][j];
            }
            }cout<<"ok2";
    for(int i=0;i<rooms;i++)
    {sort(arraynum[i],arraynum[i]+array_number[i]);
            } cout<<"oksort";
    int result=0;
    
    for(int i=0;i<visits;i++)
    {if(array_number[i]>0)
    { result=result+arraynum[visit_pattern[i]][--array_number[i]];
                                              }
      else
      result=result+0;
    
            }
                      cout<<result<<endl;
              }         int as;cin>>as;
}
