#include<iostream.h>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{int a;
cin>>a;
for(int i=0;i<a;i++)
        {int number;
        cin>>number;
        int arr[number];
        for(int j=0;j<number;j++)
                {cin>>arr[j];
                            }
        sort(arr,arr+number);
        int temp;
        temp=(arr[number-1]-arr[0])+((arr[number-1]-arr[0])-(arr[number-1]-arr[1]));
        cout<<temp<<"\n";                    
                    }
                    getch();
    }
