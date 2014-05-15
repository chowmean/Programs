#include<iostream>
#include<string.h>
#include<vector>




int check(char a[])
{
    int alpha1[26];
    int alpha2[26];
    int len=strlen(a);
     memset(alpha1,0,sizeof(alpha1));
    memset(alpha2,0,sizeof(alpha2));
 
 
    for(int i=0;i<len/2;i++)  alpha1[a[i]-'a']++;
 
 
    if(len%2==0)
       for(int i=len/2;i<len;i++) alpha2[a[i]-'a']++;
    
    else
       for(int i=len/2+1;i<len;i++) alpha2[a[i]-'a']++;
 
    int flag=1;
    for(int i=0;i<length/2;i++)
    {if(alpha1[i]==alpha2[i])
    ;
    else
    {flag=0;
    break;
    
    }
    
    }
if(flag==1)
return 1;
else return 0;

}


using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        char b[1001];
        cin>>b;
        if(check(b)==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
