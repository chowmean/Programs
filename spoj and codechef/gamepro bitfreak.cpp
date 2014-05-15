#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[105];
int count_zero=0;
int count_one=0;
int count_q=0;
cin>>arr;
for(int i=0;i<strlen(arr);i++)
{if(arr[i]=='0')
count_zero=count_zero+1;
if(arr[i]=='1')
count_one=count_one+1;
if(arr[i]=='?')
count_q=count_q+1;}
if(count_zero>=count_one)
                       
                       {if(count_zero-count_one==1 && count_q>=1)
                       {if(arr[0]=='0') cout<<"00\n01"; else cout<<"00\n10";}
                       if(count_zero-count_one==2 && count_zero!=0)
                       {cout<<"00";                }
                       if(count_zero-count_one==0 && count_q>=2)
                       { cout<<"00\n01\n10\n11";} 
                       if(count_zero-count_one==0 && count_q==0)
                       { if(arr[0]=='1')cout<<"10";else cout<<"01"; }                      }
                       
if(count_zero<count_one)
                       
                       {if(count_one-count_zero==1 && count_q>=1)
                       {if(arr[0]=='1') cout<<"10\n11"; else cout<<"01\n11";}
                       if(count_one-count_zero==2 && count_zero!=0)
                       {cout<<"11";                }
                                            }


int as;cin>>as;
    }
