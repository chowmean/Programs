#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>
#include<string.h>
#define in cin>>
#define out cout<<
char s[1000000];
char arr[1000000];
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {  
    cin>>s;
    
    int length=0;
    for(int i=0;i<strlen(s);i++)
    {int counter=0;
    if(s[i]=='[')
    {i++;
    while(s[i]!=']')
         {arr[length]=s[i];
         length++;i++;}
    while(length-->0)
    {cout<<arr[length];
                     } i++; }
    cout<<s[i];
                            
            }
    cout<<endl;
            
            
              }
}
