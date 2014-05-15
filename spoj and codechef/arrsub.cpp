#include<iostream>
using namespace std;
int main()
{int a,k;
cin>>a;
int largest(int b,int a[]);
int n[a];
for(int j=0;j<a;j++)
{cin>>n[j];
}
cin>>k;
int max=0;
for(int i=0;i<a-k+1;i++)

    {
        max = n[i];
 
        for (int j = 1; j < k; j++)
        {
            if (n[i+j] > max)
               max = n[i+j];
        }
        printf("%d ", max);
    }
        

int hu;cin>>hu;} 

