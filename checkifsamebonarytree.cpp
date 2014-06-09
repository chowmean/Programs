#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;



int GetNextIncresingElement(int arr[], int index, int root)
{
    for(int i = index; i< 5; i++)
    {
        if(arr[i] > root)
        {
            index = i;
            return arr[i];
        }
    }
    return -1;
}

int GetNextDecreasingElement(int arr[], int index, int root)
{
    for(int i = index; i< 5; i++)
    {
        if(arr[i] <= root)
        {
            index = i;
            return arr[i];
        }
    }
    return -1;
}










bool CheckFormsSameBST(int arr1[], int arr2[])
{
    int index1 = 1;
    int index2 = 1;
    int num1;
    int num2;

    int root = arr1[0];
    if(root != arr2[0])
        return false;

    while(true)
    {
        num1 = GetNextIncresingElement(arr1, index1, root);
        num2 = GetNextIncresingElement(arr2, index2, root);     

        if(num1 != num2)
            return false;       
        else
        {
            if(num1 == -1)
                break;
        }   

        index1++;
        index2++;
    }

    index1 = 1;
    index2 = 1;
    while(true)
    {
        num1 = GetNextDecreasingElement(arr1,  index1, root);
        num2 = GetNextDecreasingElement(arr2,  index2, root);        

        if(num1 != num2)
            return false;       
        else
        {
            if(num1 == -1)
                break;
        }   

        index1++;
        index2++;
    }

    return true;
}






int main()
{
	int a[5]={2,3,1,4};
	int b[5]={2,3,4,1};
	if(CheckFormsSameBST(a,b))cout<<"yes";
}

