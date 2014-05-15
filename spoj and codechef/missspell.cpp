#include<cmath>
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{int a;
int z=1;

scanf("%d",&a);a=a+2;
while((a--)>2)
{string string1;int b;
 scanf("%d",&b);
cin>>string1;             
 int c;
c=string1.size();
cout<<c;
 string ans;
 int j=0;
 for(int i=0;i<c;i++)
 {if(i==b)
 continue;
 else
 {ans.append(string1,i,i+1);
 }
         }cout<<z<<" "<<ans<<"\n"; 
         
         z++;
}int y;
cin>>y;  
    }
