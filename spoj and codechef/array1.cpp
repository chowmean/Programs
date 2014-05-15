#include<iostream>
using namespace std;


int main()
{
int number_first,number_second;
cout<<"enter number of elements in 1st array";
cin>>number_first;
cout<<"enter element";
int first_array[number_first];
for(int i=0;i<number_first;i++)
cin>>first_array[i];
cout<<"enter number of elements in 2st array";
cin>>number_second;
cout<<"enter element";
int second_array[number_second];
for(int i=0;i<number_second;i++)
cin>>second_array[i];

int i=0,j=0,k=0;

int final_array[number_first+number_second];


while(i<number_first&&j<number_second)
{if(first_array[i]<second_array[j])
{final_array[k]=first_array[i];
k++;
i++;
                                   }
else
{final_array[k]=second_array[j];
k++;
j++;
                                   }}
while(i<number_first && k<number_first + number_second)
{final_array[k]=first_array[i];
i++;
k++;
} 
while(j<number_first && k<number_first + number_second)
{final_array[k]=second_array[j];
j++;
k++;
}                                 
    
for(int i=0;i<k;i++)
{cout<<final_array[i]<<" ";
        }                 

int as;cin>>as;

    }
