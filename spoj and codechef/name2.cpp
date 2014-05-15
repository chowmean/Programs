#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{int a;
cin>>a;
while(a--)
{char hus[25010],wife[25010];
int len1,len2;
scanf("%s",hus);
scanf("%s",wife);
len1=strlen(hus);
len2=strlen(wife);
if(len1=len2 && strcmp(hus,wife))
cout<<"YES\n";
else
{


if(len1>len2)
{char temp[25010];
strcpy(temp,wife);
strcpy(wife,hus);
strcpy(hus,temp);
len1=strlen(hus);
len2=strlen(wife);
}

int i=0;
int j=0;
int count=0;
while((len1-i)<(len2-j))
{if(hus[i]==wife[j])
{i++;j++;count++; 
}
else j++;    
}
if(count==len1)
cout<<"YES\n";
else
cout<<"NO\n";
}
}
 int as;cin>>as;   
}
