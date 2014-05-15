#include<cstring>
#include<iostream>
 
 
#include<string>
 
#define get cin>>
#define put cout>>
using namespace std;
int main()
{int a;
string pattern[]={"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
get a;
string arr;
 
while (a--)
    {int count[8]={0};
        int j1;
    get j1;
    get arr;
    for(int i=0;i<38;i++)
    {
    for(int j=0;j<8;j++)
    {
    if(arr[i]==pattern[j][0] && arr[i+1]==pattern[j][1] && arr[i+2]==pattern[j][2])
    {
    count[j]++;
    break;
    }
    }
    }
    
    cout<<j1<<" ";
    for(int i=0;i<8;i++)
    cout<<count[i]<<" ";
    cout<<endl;
    
    
    }
    
}
