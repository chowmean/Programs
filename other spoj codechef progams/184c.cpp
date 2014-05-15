#include<iostream>
using namespace std;
char a[20];
char b[20];
char m[20];
int add(char a[],char b[])
{   int remain=0;int i=0,j=0;
    if(a[0]=='-' && b[0]=='-')
    return 0;
    else
    {
    
    for(i=strlen(a)-1,j=strlen(b)-1;i<=0&&j<=0;i--,j--)
    {int temp=0;
    if(a[0]=='-' || b[0]=='-')
    {
        if(a[0]=='-')
        {
            if(a[i]-'0'>b[j]-'0')
            {
                b[j-1]=char((b[j-1]-'0')-1);
                b[j]=char((b[j]-'0')+1);
            }
            temp=(b[j]-'0')-(a[i]-'0');
            a[i]=char(temp%10);
        }
        if(b[0]=='-')
        {
            if(b[j]-'0'>a[i]-'0')
            {
                a[i-1]=char((a[i-1]-'0')-1);
                a[i]=char((a[i]-'0')+1);
            }
            temp=(a[i]-'0')-(b[j]-'0');
            a[i]=char(temp%10);
        }
        
        
    }
    else{
    temp=(a[i]-'0')+b[j]-'0'+remain;
    remain=temp/10;
    a[i]=(char)temp%10;
    }}
    if(i>0)
    {
    a[i]=a[i]+remain;
    }
    if(j>0)
    {
    a[i]=b[i]+remain; 
    }
    return 1;}
}
int main()
{
    cin>>a>>b>>m;
    int count=0;
    if(add(a,b)!=0)
    {
        while(true)
        {   int g=0;
            if(strcmp(a,b)>0)
            {   g=1;
               
            }
            else
            {   g=2;
                
            }
            if(g=1)
            {
                if(strcmp(m,a)>=0)
                break;
                else
                {add(b,a);count++;}
                
            }
            else
            {   
                if(strcmp(m,a)>=0)
                break;
                else
                {add(a,b);count++;}
                
            }
            }
    }cout<<count;

}
