#include<cstdio>
#include<iostream>
#include<cstring>
#include<sstream>
#include<stdlib.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<stack>
#include<queue>
#include<iomanip>
#include<ctype.h>
#include<complex>
#include<utility>
#include<functional>
#include<bitset>
#include<numeric>
#include<cassert>
#include<limits>
 
using namespace std;
 
typedef pair<int,int> pair;
int abhi[10002],bhai[10002];
int main()
{
    memset(abhi,0,sizeof(abhi));
    memset(bhai,0,sizeof(bhai));
    vector<int> a,b;
    int N,K,L;
    int var,minn,maxx,p;
    int i,j;
    
    scanf("%d %d %d",&N,&K,&L);
    
  
    for(i=0;i<K;i++)
    {
        scanf("%d",&var);
        a.push_back(var);
    }
    for(i=0;i<K;i++)
    {
        scanf("%d",&var);
        b.push_back(var);
    }
    for(i=0;i<K;i++)
    {
        if(abhi[a[i]]>b[i]) 
                  abhi[a[i]]=b[i];
        if(bhai[a[i]]<b[i])
                 bhai[a[i]]=b[i];
    }
    
    abhi[0]=0;
    for(i=1;i<=1000;i++)
    {
        maxx=-1;
        minn=80000000;
        for(j=i,p=0;p<=j;p++,j--)
        {
            if(abhi[j]==800||(abhi[p]==800))
                      continue;
            if((abhi[j]+abhi[p])<minn)
            {
                minn=abhi[j]+abhi[p];
            }
            if(bhai[j]+bhai[p]>maxx)
            {
                maxx=bhai[j]+bhai[p];
            }
        }
        abhi[i]=minn;
        bhai[i]=maxx;
    }
    if(abhi[N]>L)
         printf("Urgently Call Bob!!!\n");
    else
          printf("%d\n",bhai[N]-abhi[N]);
    return 0;
}
