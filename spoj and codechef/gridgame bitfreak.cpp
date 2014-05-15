#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{int a;
cin>>a;
while(a--)
{int n;
cin>>n;
char arr[n][n];
for(int i=0;i<n;i++)
{cin>>arr[i];
                    }
        
int largest=0;int largeprev=0;int indexi;int indexj;int over=1;int count=0;int check =0;
while(over!=0)
{
for(int i=0;i<n;i++)
{for(int j=0;j<n;j++)
         {if(arr[i][j]=='S')
         {check=1;
         if(arr[i-1][j-1]=='S')
         largest=largest+1;
         if(arr[i][j-1]=='S')
         largest=largest+1;
         if(arr[i+1][j-1]=='S')
         largest=largest+1;
         if(arr[i-1][j]=='S')
         largest=largest+1;
         if(arr[i+1][j]=='S')
         largest=largest+1;
         if(arr[i-1][j-1]=='S')
         largest=largest+1;
         if(arr[i][j+1]=='S')
         largest=largest+1;                   
         if(arr[i+1][j+1]=='S')
         largest=largest+1;  count++;         }
		 else
		 {over=0;
		 break;}
         if(largest>largeprev)
         {largeprev=largest;
         largest=0;
         indexi=i;indexj=j;
         }
        }}
       
if(check==1) {int i=indexi;int j=indexj;
 arr[i][j]='.';
		 if(arr[i-1][j-1]=='S')
         arr[i-1][j-1]='.';
         if(arr[i][j-1]=='S')
         arr[i][j-1]='S';
         if(arr[i+1][j-1]=='S')
         arr[i+1][j-1]='.';
         if(arr[i-1][j]=='S')
         arr[i-1][j]='.';
         if(arr[i+1][j]=='S')
         arr[i+1][j]='.';
         if(arr[i-1][j-1]=='S')
         arr[i-1][j-1]='.';
         if(arr[i][j+1]=='S')
         arr[i][j+1]='.';                  
         if(arr[i+1][j+1]=='S')
         arr[i+1][j+1]='.';  
         check=0;
         }
         }
		 if(count%2==0)
		 cout<<"Alice"<<"\n";
		 else 
		 cout<<"Bob"<<"\n";
		 
		 
		 }
         
 
 int as;
 cin>>as;
 
        
          }
    
