#include<iostream>
#include<string.h>
using namespace std;
char str[1000002];
int findmetal(char str[],int start) 
{   
    int yea=0;
    for(int i=start;i<strlen(str)-3;i++)
    {
        if(str[i]=='m')
        {
            if(str[i+1]=='e')
            {
                if(str[i+2]=='t')
                 {
                        if(str[i+3]=='a' && str[i+4]=='l')
                        {
                            yea=yea+1;
                            i=i+4;
                        }continue;
                    }continue;
            }continue;
        }continue;
    }  return yea;
}


int main()
{cin>>str;
int count=0;
    for(int i=0;i<strlen(str)-3;i++)
    {
        if(str[i]=='h')
        {
            if(str[i+1]=='e')
            {
                if(str[i+2]=='a')
                 {
                        if(str[i+3]=='v' && str[i+4]=='y')
                        {
                            count=count+(findmetal(str,i+4));
                            i=i+4;
                        }continue;
                    }continue;
            }continue;
        }continue;
    }
    cout<<count;
    int as;
    cin>>as;
}
