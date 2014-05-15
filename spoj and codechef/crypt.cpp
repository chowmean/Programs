#include<iostream>
#include<string>
using namespace std;

int  * decrypt(string a,int arr[])
{
int length=a.length();
for(int i=0;i<length;i++)
  {int temp;
  temp=a[i];
  temp=a[i]+(a[i]-97);
  arr[i]=temp;
  }
  return arr;
}

int main()
{
	string a;
	cin>>a;
	int length=a.length();
	int arr[length];
	decrypt(a,arr);
	for(int i=0;i<length;i++)
	cout<<arr[i];
}
//1131191251391051079710110599125125117135111971351331411111451131419713313510517-
//1-231251071211451351131211051111051311051963

//ilovefacebookandthatswhyimwasting90%ofmytimehere:P
