#include<iostream>
using namespace std;
int main()
{int a,l=0;
cin>>a;
int d[a];
for(int i=0;i<a;i++)
cin>>d[i]; 
int b;
  cin>>b;
  int f[a][b];
  for(int i=0;i<a;i++)
        {for(int j=0;j<b;j++)
                {cin>>f[i][j];
                l++;
                } 
 int n=0;
for(int i=0;i<a;i++)
        {for(int j=0;j<b;j++)
                {for(int p=0;p<a;p++)
                        {if(f[i][j]==d[p])
                        n++;    
}
 
}
}int h=0;
for(int i=0;i<a;i++)
        {for(int j=0;j<b;j++)
                {for(int k=0;k<a;k++)
                        {for(int u=0;u<b;u++)
                                {if(f[i][j]==f[k][u])
                                        h++;}
}
}       
}
cout<<l-(n+h);
}}
