#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void merge_sort(int a[],int b[],int al,int bl)
{int i=0;
int j=0;int k=0;

int temp[bl+al];
while(i<al-1 || j<bl-1 || k<bl+al)
{if(a[i]>b[j])
{temp[k]=b[j];
j++;
k++;}
else
{temp[k]=a[i];
i++;
k++;
}
}
for(i=0;i<al+bl;i++)
cout<<temp[i]<<"\t";
}

void sort(int array[],length)
{for(int i=0;i<length/2;i++)
{for(int j=1;j<length/2;i=pow(2,i))
 {for(int k=0;k<length;k++)
          
         }
                 }
     }

int main()
{int arr[5]={1,4,6,7,8};
int arr2[4]={2,3,6,10};
merge_sort(arr,arr2,5,4);
getch();
}


