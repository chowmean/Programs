#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int length;
        cin>>length;
        long long int pos=0,postemp=0,neg=0,negtemp=0,negflag=0,min=0;
        long long int arr[length];
        for(int i=0;i<length;i++)
        {cin>>arr[i];
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>0)
        {   if(abs(negtemp)>=abs(neg))
            {neg=negtemp;
            negtemp=0;
            
            }
            postemp=postemp+arr[i];
        }
        
        if(arr[i]<0)
        {   negflag=1;
            if((postemp)>=abs(pos))
            {pos=postemp;
            postemp=0;
            
            }
            negtemp=negtemp+arr[i];
        }
        if(arr[i]==0)
        {;}
        
        
        }
        
        if(abs(negtemp)>abs(neg))
            {neg=negtemp;
            
            }
        if(abs(negtemp)>abs(neg))
            {neg=negtemp;
            
            }
        
        if(negflag==1)
        neg=min;
        
        cout<<pos-neg<<endl;
    }
}
