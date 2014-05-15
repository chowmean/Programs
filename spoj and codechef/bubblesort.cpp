#include<iostream>
using namespace std;
#include<conio.h>

void bubblesort(int a[],int n)
{
	int hold,j ,pass;
	bool switched=true;
	for(pass=0;(pass<(n-1))&&(switched=true);pass++)
	{
		switched=false;
		for(j=0;j<n-pass-1;j++)
		{
			if(a[j]>a[j+1])
			{
				switched=true;
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		}
	}
}

int main()
{ cout<<"This is Bubble sort"<<endl;
  int n;
  cout<<"Enter the no. of element in array"<<endl;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
	cout<<"enter element no:"<<i+1<<endl;
	cin>>a[i];
  } 	
  cout<<"The sorted array is:"<<endl;
  bubblesort(a,n);
  for(i=0;i<n;i++)
  {
   cout<<a[i]<<endl;	
  }
  getch();
  return 0;

}
