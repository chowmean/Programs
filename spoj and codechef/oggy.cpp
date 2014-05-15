#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int a,b;
cin>>a>>b;
int array[a][a];
for(int i=0;i<a;i++)
{ for(int j=0;j<a;j++)
       {cin>>array[i][j];
                      }
}
int arr[a-b+1][a-b+1];
int index=0;
for(int i=0;i<a-b+1;i++)
        {for(int j=0;j<a-b+1;j++)
               {  int min1 = array[i][j];
                 for(int p=i;p<b+i;p++)
                         {for(int q=j;q<b+j;q++)
                                  {min1=min(min1,array[p][q]);
                                                } 
                                                  }
                     arr[i][j]=min1;                             
                                                  
                    }

}
for(int i=0;i<a-b+1;i++)
{for(int j=0;j<a-b+1;j++)
         {cout<<arr[i][j]<<"\t";
                     }
                     cout<<"\n";
 }   
 int as;cin>>as;}
