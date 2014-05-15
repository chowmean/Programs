#include<iostream>
#include<string.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
int a1;
cin>>a1;
while(a1--)
{
char a[25010],b[25010];
cin>>a;
cin>>b;
if(strlen(a)>strlen(b))
{char h[25010];
strcpy(h,b);
strcpy(b,a);
strcpy(a,h);
}
int i=0;
int j=0;
int count =0;
int lengtha=strlen(a);
int lengthb=strlen(b);
if (strcmp(a,b))
{
count=strlen(a);
cout<<strlen(a);
}
else
{
while(i<strlen(a) && j<strlen(b))
{if(a[i]==b[j])
{count=count+1;
i++; lengtha--;
j++; lengthb--;
}
else 
j++;lengthb--;

if(lengtha > lengthb)
break;    
 }   }      

if(count == strlen(a))
cout<<"YES\n";
else 
cout<<"NO\n";



}int as;cin>>as;
    }
