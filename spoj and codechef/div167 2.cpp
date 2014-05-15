#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int a;
cin>>a;
int answer=5;int sum=0;
int arr[a];
for(int i=0;i<a;i++)
{cin>>arr[i];
sum=sum + arr[i];}

int div=a+1;
for(int i=1;i<6;i++)
        {if(((sum+i)%div)==1)
                             {answer--;
                                    }
                    }
cout<<answer;   
int as;cin>>as; 
    }
