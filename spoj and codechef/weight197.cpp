#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>

#include<cstdio>
#include<ctype.h>
using namespace std;
int main()
{
	char a[10];
	cin>>a;
	int turns;
	cin>>turns;
	vector<int> weight;
	vector<int> weight2;
	vector<int> result;
	for(int i=0;i<10;i++)
	{
		if(a[i]==1)
		weight.push_back(i+1);
	}
	int done=0;
	if(weight.size()==1 && turns>=2)
	done=0;
	else
	{
	int i=1;
	int previous=weight[0];
	int right=0,left=weight[0];
	result.push_back(weight[0]);
	while(turns--)
	{	if(right+weight[i]>left && weight[i]!=previous)
		{result.push_back(weight[i]);
		previous=weight[i];
		int temp=left;
		left=right+weight[i];
		right=temp;
		if((i+1)>=weight.size())
		i=0;
		else
		i++;
		}
		else
		{if((i+1)>=weight.size())
		i=0;
		else
		i++;
			}
		if(previous==weight[i])
		done=1;
		}
	
	}
	if(done==1)
	{cout<<"YES"<<endl;
	for(int i=result[0];i<result.size();i++)
	cout<<result[i]<<" ";}
	else
	cout<<"NO";
	int as;
	cin>>as;

}


