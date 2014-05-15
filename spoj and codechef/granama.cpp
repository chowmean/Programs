#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
for(int i=0;i<a;i++)
	{string in1;
	string in2;
	int check1[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int check2[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int array[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	cin>>in1;
	cin>>in2;
	for(int i=0;i<in1.length();i++)
		{for(int j=0;j<26;j++)
		{if(in1[i]==array[j])
				{check1[i]=check1[i]+1;
				}
		}
		}
	
	for(int i=0;i<in2.length();i++)
		{for(int j=0;j<26;j++)
		{if(in2[i]==array[j])
				{check2[i]=check2[i]+1;
				}
		}
		}
	int count1=0;
	for(int i=0;i<26;i++)
		{if(check1[i]!=0 && check2[i]!=0)
		count1=1;
		else
		if(check1[i]==0 && check2[i]==0)
		count1=1;
		else
		{count1=0;
		break;}
		}
	int count2=1;
	for(int i=0;i<26;i++)
		{if(check1[i]!=check2[i])
		count2=0;
		break;
		}
	if(count1==count2 &&count1==1)
		{cout<<"YES\n";
		}
	else
	if(count1==1 && count2==0)
		{cout<<"YES\n";
		}
	else
    if(count1==0)
		{cout<<"NO\n";
		}
    	}
	return 0;	

}
