#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>

#define in cin>>
#define out cout<<

int gcd(int x, int y) { 
 
     
     if ( y == 0 ) 
          return x; 
 
      
     else if ( x >= y && y > 0 ) 
          return gcd(y, x%y);
 
}


using namespace std;
int main()
{
    int x,y,x1,y1;
    cin>>x>>y>>x1>>y1;
    if(x>=y)
    int gcdxy=gcd(x,y);
    else
    int gcdxy=gcd(y,x);
    x=x/gcdxy;
    y=y/gcdxy;
    
    int area1=(x*y)/(gcdxy*gcdxy);
    if(x1>=y1)
    int gcdx1y1=gcd(x1,y1);
    else
    int gcdx1y1=gcd(y1,x1);
    int area2;
    x1=x1/gcdx1y1;
    y1=y1/gcdx1y1;
    if(x>=y)
    {area2=x1*y*y1*y;
            }
    else
    {area2=x1*x*y1*x;
            }
     int div=gcd(area1,area2);
     cout<<area1-area2/div<<"/"<<area1;
    
}
