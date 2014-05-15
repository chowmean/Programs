#include<iostream>
using namespace std;
int main()
{int stair;
cin>>stair;
int arr[stair];

for(int i=0;i<stair;i++)
        {cin>>arr[i];
                        }
int box;
int k=0;
cin>>box;
int answer[box];
int arrbox[box][2];
for(int i=0;i<box;i++)
        {cin>>arrbox[i][0];
         cin>>arrbox[i][1];} j=0;  
for(int i=0;i<box;i++)
        {
                      while(j<stair)
                      if(arrbox[i][0]<=j)
                            {answer[k]=arr[j];
                             k=k+1;   
                             for(int u=0;u<j;u++)
                             arr[j]=arrbox[]; 
                             break;         }
                      else
                      {j++;
                          }
                      }
                       
    }
