#include<iostream>
#include<bitset>
int arr[1000000000][1000000000];
using namespace std;
int visit_count=0;
int visit(long long int rows,long long int columns,long long int startr,long long int startc,long long int endr,long long int endc)
{
visit_count++;
arr[startr][startc]=9;
if(startr==endr && startc==endc)
cout<<visit_count;
if(startc+1<=columns && arr[startr][startc+1]!=9)
visit(rows,columns,startr,startc+1,endr,endc);
if(startr+1<=rows && arr[startr+1][startc]!=9)
visit(rows,columns,startr+1,startc,endr,endc);
if(startc-1>=columns && arr[startr][startc-1]!=9)
visit(rows,columns,startr,startc-1,endr,endc);
if(startr-1>=rows && arr[startr-1][startc]!=9)
visit(rows,columns,startr-1,startc,endr,endc);
	}

int main()
{int t;
cin>>t;


while(t--)
	{long long int rows,columns,startr,startc,endr,endc;
	cin>>rows>>columns>>startr>>startc>>endr>>endc;
	
	visit(rows,columns,startr,startc,endr,endc);
		}
	}

