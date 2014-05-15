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
   
    double b1,b2,s,q,final,total,ans,res;
    if( !(scanf("%lf",&b1) && scanf("%lf",&b2) && scanf("%lf",&s) && scanf("%lf",&q)) )
    {
        printf("Invalid Input");
        return 0;
    }    
    b2=b2*q;
    s=s*q;
    final=s-b2;
    total=b2+s;
    ans=(total*0.006)/100;
    res=(total*b1)/100;
    res=res+(res*0.1036);
    double s1=(s*0.025)/100;
    double m1=s1+ans+res;
    final=final-m1;
    if(final>=0)
    {
        printf("Profit\n");
    }
    else
    {
        printf("Loss\n");
        final= -final;
    }
    printf("%.2lf",final);
    return 0;
}
