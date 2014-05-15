
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{int a;
cin>>a;
for(int i=0;i<a;i++)
        {int ds,dt,d;
        cin>>ds>>dt>>d;
        if((dt+ds)>=d)
           {printf("%f",0); 
           cout<<"\n";}
        else
        {  
        printf("%f",d-(dt+ds));
        cout<<"\n";}
        }
    getch();
    
    }
