#include<iostream>
using namespace std;
 
long long int array[1005],maxfirst[1005],minfirst[1005],maxsecond[1005],minsecond[1005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int length;
        cin>>length;
        
        for(int i=0;i<length;i++)
        cin>>array[i];
        minfirst[0]=array[0];
        for(int i=1;i<length-1;i++)
     {
       if(minfirst[i-1]<0) 
          minfirst[i]=minfirst[i-1]+array[i];
       else   
         minfirst[i]=array[i];
     }
 
    maxsecond[length-2]=array[length-1];
 
    for(int i=length-3;i>=0;i--)
     {
       if(maxsecond[i+1]>0)
           maxsecond[i]=maxsecond[i+1]+array[i+1];
       else 
         maxsecond[i]=array[i+1];
     }
        
        maxfirst[0]=array[0];
        
    for(int i=1;i<length-1;i++)
     {
       if(maxfirst[i-1]>0) 
           maxfirst[i]=maxfirst[i-1]+array[i];
       else  
          maxfirst[i]=array[i];
      }
 
    minsecond[length-2]=array[length-1];
 
    for(int i=length-3;i>=0;i--)
     {
        if(minsecond[i+1]<0) 
            minsecond[i]=minsecond[i+1]+array[i+1];
        else  
           minsecond[i]=array[i+1];
      }
      
      long long int ans=maxfirst[0]-minsecond[0];
      for(int i=0;i<length-1;i++)
        if((maxfirst[i]-minsecond[i])>ans) 
            ans=(maxfirst[i]-minsecond[i]);
  
    for(int i=0;i<length-1;i++)
       if((maxsecond[i]-minfirst[i])>ans) 
          ans=(maxsecond[i]-minfirst[i]);
      
        cout<<ans<<endl;
        
    }
}
