#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>
#include<string>
#include<string.h>
#define in cin>>
#define out cout<<

int check(char a[])
{   int flag=1;
    for(int i=0;i<strlen(a);i++)
{if(!isdigit(a[i]))
    {flag=0;break;}  }
    return flag;
    }

long long int convert(char a[])
{    long long int value=0;
     for(int i=0;i<strlen(a);i++)
     {value=value*10 + a[i]-'0';
       }
    return value;
}   



using namespace std;
int main()
{
    char lower1[9];
    char upper1[9];  char index1[9];
    cin>>lower1;
    cin>>upper1;
    cin>>index1;
    if(check(lower1) && check(upper1) && check(index1))
    {     long long int lower = convert(lower1);
          long long int upper = convert(upper1);
           long long int index= convert(index1);
    if(lower<=1 && upper>=10)
    {if(index==1)
    cout<<1;
    if(index==2)
    cout<<10;
    else
    cout<<"No number is present at this index";
                }
    if(lower>1 && lower<=10 && upper>=10)
    {if(index==1)
    cout<<10;
    else
    cout<<"No number is present at this index";
    
               }
    if(lower>upper)
    { cout<<"Invalid Input";
           }
    
    if(lower<1 && upper>=1 && upper<10)
    {if(index==1)
    cout<<1;
    else
    cout<<"No number is present at this index";  }     }
    else
    cout<<"Invalid Input2";
    cout<<endl;
    

    
}
