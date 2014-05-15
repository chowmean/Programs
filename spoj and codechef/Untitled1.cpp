#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int a;
cin>>a;
int array[a][3];
for(int i=0;i<a;i++)
        {cin>>array[i][0];
        cin>>array[i][1];
        cin>>array[i][2];
        }
cout<<a<<"\n";

for(int i=0;i<a;i++)
        {cout<<"\n"<<array[i][0]<<" ";
       
        
        }
         
        getch();        }
