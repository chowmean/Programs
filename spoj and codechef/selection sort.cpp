//sorting

#include<iostream>
using namespace std;
int* selection_sort(int array[])
{int temp=array[0];
     for(int i=1;i<5;i++)
      {if(array[i]<temp)
      int tmp;
      tmp=array[i];
      array[i]=temp;
      temp=tmp;      
         }
     }

int main()
{int arr[5];
cout<<" enter the element of the array";
for(int i=0;i<5;i++)
{cin>>arr[i];}    
}
