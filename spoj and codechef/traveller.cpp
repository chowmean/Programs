#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{int a;
cin>>a;
	for(int i=0;i<a;i++)
	{int cities;
	cin>>cities;
	char str[cities][108];
	for(int j=0;j<cities-1;j++)
		{int amount=0;
	     cin.getline(str[j],108);	
         char arra[2][cities-1][50];
         int m=0;
         for(int k=0;k<cities-1;k++)
                 {for(int l=0,u=0;l<100,u<50;l++,u++)
                          {if(str[l]!=" ")
                          arra[m][k][u]=(char)str[l];
                          else
                          {u=0;
                          m=m+1;}
                          if(m==2 && str[l]!="$")
                          {int b=(int)str[l];
                          amount=(amount*10)+b;
                                  }
                                    }
         
         }
         cout<<amount;
         }
    
    }
getch();

}

