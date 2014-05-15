//threads
#include<iostream>
#include<vector>
using namespace std;
vector <int> array;
int main()
{int a;
cin>>a;
while(a--)
{int n;int b;int ans=0;
array.clear();
cin>>n;

for(int i=0;i<n;i++)
{cin>>b;
array.push_back(b);
 }
 int i = n-1;
        while(i > 0 && array[i-1] < array[i]) 
    {
                i--;  
        
        }
   
   cout<<i<<"\n";
 
 
      }int as;
      cin>>as;
    }
