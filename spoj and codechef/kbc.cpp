#include<iostream>
using namespace std;
 
int main()
{int a;
cin>>a;
if(a>=1 && a<=100)
;
else exit(1);
while(a--)
{int ans=0;
int b;
cin>>b;
if(b>=1 && b<=100)
;
else exit(1);
int array[b];
for(int i=0;i<b;i++)
{int temp;
cin>>temp;
array[i]=temp;
}

int gift[b];

for(int i=0;i<b;i++)
{gift[i]=1;
        }
int ansd=1;        
while(ansd==1)        
{ansd=0;
                      for(int i=0;i<b-1;i++)
{if(array[i]>array[i+1] && gift[i]<=gift[i+1])
{gift[i]=gift[i+1]+1;
ansd=1;
}
if(array[i]<array[i+1] && gift[i]>=gift[i+1])
{gift[i+1]=gift[i]+1;
ansd=1;
}
 }
} 

  

for(int i=0;i<b;i++)
ans=ans+gift[i];
cout<<ans<<"\n";
}int as;
cin>>as;
}

