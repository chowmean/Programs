#include<iostream>
#include<malloc.h>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>

#define in cin>>
#define out cout<<


using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {         float rate;
              int min;
              int numberofplans;
              cin>>rate>>min>>numberofplans;
              float plans[numberofplans][3];
              float value[numberofplans];
              for(int i=0;i<numberofplans;i++)
                      {cin>>plans[i][0]>>plans[i][1]>>plans[i][2];
                      value[i]=(min*plans[i][1])+(plans[i][2]/plans[i][0]);       
                       }
              float recent = min * rate;
              int index=-1;
              for(int i=0;i<numberofplans;i++)
              {if(value[i]<recent)
              {recent=value[i];
              index=i;
              }       }
    if(recent!=min*rate)
    cout<<index+1<<endl;
    else
     cout<<0<<endl;
}
                
}
