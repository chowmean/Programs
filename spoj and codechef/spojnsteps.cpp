#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
for(int i=0;i<a;i++)
        {int x,y;
        cin>>x>>y;
        if(x-y==0)
        {{ if(x%2==0)
              {int answer=((x/2)+(x/2)*3);
                     cout<<answer<<"\n";   }
              if(x%2!=0)
              {int answer=((x/2)+(x/2)*3)+1;
                     cout<<answer<<"\n"; 
                        }
                  }}
        else if(x-y==2)
        {{if(x%2==0)
              {int answer=(2+((x-2)/2)+((x-2)/2)*3);
                     cout<<answer<<"\n";   }
              if(x%2!=0)
              {int answer=(2+((x-2)/2)+((x-2)/2)*3)+1;
                     cout<<answer<<"\n"; 
                        }
                  
                  }}
        else
        {cout<<"No Number\n";
        }    
         
             
            }
                    }
    
