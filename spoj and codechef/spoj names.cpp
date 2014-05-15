#include<iostream>
#include <string>
using namespace std;
int main()
{int a;
cin>>a;
int answer=0;
for(int i=0;i<a;i++)
        {string st;
          getline(cin, st);  
         for(int i=0;i<strlen(st);i++)
         {if(st[i]==st[i+1])
          answer=answer+1;
          else
          answer=answer+1;
                       }
                         }

}
