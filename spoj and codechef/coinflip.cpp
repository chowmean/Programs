#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
for(int i=0;i<a;i++)
        {int g;
        cin>>g;
        int arr[g][3];
        for(int j=0;j<g;j++)
        {cin>>arr[j][0];
        cin>>arr[j][1];
        cin>>arr[j][2];
                    
        if(arr[j][0]==arr[j][2])
        {cout<<arr[j][1]/2<<"\n";
                         }
        else
        {if((arr[j][1])%(2)==0)
        cout<<arr[j][1]/2<<"\n";
        else
        cout<<(arr[j][1]/2)+1<<"\n";    }
                    
                        }
    }
}
