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
int main()
{
    int array[1001001],n,p,len,len2;
    scanf("%d",&n);
    int i;
        for(i=0;i<n;i++)
                scanf("%d",&array[i]);
        p=0;
        len=1;
        len2=1;
        for(i=0;i<n-1;i++)
        {
                if(array[i] <= array[i+1])
                        len2++;
                else
                {
                        if(len2 >len)
                        {
                                len=len2;
                                p=i-len2+1;
                        }
                        len2=1;
                }
        }
        if(len2 > len)
                {
                        len=len2;
                        p=i-len2+1;
                }
        for( i=0;i<len;i++)
                printf("%d ",array[i+p]);
        return 0;
}
 
