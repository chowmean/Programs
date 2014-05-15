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
    int numberstudent,numberofpuzzle;
    cin>>numberstudent>>numberofpuzzle;
    int arr[numberofpuzzle];
    for(int i=0;i<numberofpuzzle;i++)
    cin>>arr[i];
    sort(arr,arr+numberofpuzzle);
    int smallest=arr[numberstudent-1]-arr[0];
    for(int i=1;i<numberofpuzzle-numberstudent;i++)
    { if(arr[i+numberstudent-1]-arr[i]<smallest)
    smallest=arr[i+numberstudent-1]-arr[i];
            }
    cout<<smallest;
         int as;cin>>as;
}
