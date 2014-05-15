#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int a;
cin>>a;
for(int i=0;i<a;i++)
	{int b;
	cin>>b;
	int arr[b];
	char str[b-1];
	for(int j=0;j<b;j++)
	cin>>arr[j];
	for(int j=0;j<b-1;j++)
	cin>>str[j];
	int j=0;
	while(j<b-1)
	{if(str[j]=='a')
	{arr[j]=arr[j]+arr[j+1];
	cout<<j;
	for(int p=j+1;p<b-1;p++)
	{arr[p]=arr[p+1];
	cout<<arr[p];
    }
	for(int p=j+1;p<b-1;p++)
	{str[p-1]=str[p];
	
    }
	b=b-1;
	j=j;
	}
	else
	j++;

	cout<<"hi";	}
	
	
	while(j<b-1)
	{if(str[j]=='m')
	{arr[j]=arr[j]*arr[j+1];
	for(int p=j+1;p<b-1;p++)
	{arr[p]=arr[p+1];
    }
	for(int p=j+1;p<b-1;p++){
	str[p-1]=str[p];
	}
	b=b-1;
	
	}
	else
	j++;
	
	
	}
	cout<<arr[0]<<"\n";
	}
	getch();
	
	
}
