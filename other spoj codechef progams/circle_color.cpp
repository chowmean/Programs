#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
  vector <int>shubh;
  int n,flag=1;
  int a;
  double sum=0,pi=acos(-1);
  cin>>n;
  for(int i=0;i<n;i++)
   {cin>>a;
    shubh.push_back(a);
    }
  sort(shubh.begin(),shubh.end());
  for(int j=n-1;j>=0;j--)
  { if(flag==1)
    {  sum=sum+pi*shubh[j]*shubh[j];
       flag=0;}
    else
    {
     sum=sum-pi*shubh[j]*shubh[j];
     flag=1; 
    }
  } 
  printf("%.6lf\n",sum);
  system("pause");
  return 0;
}
