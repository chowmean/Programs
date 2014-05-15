#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>
#include<cstdio>
#include<ctype.h>
#include<string>
using namespace std;
int main()
{
vector <char > number;
vector <char> sign;
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{if(s[i]=='+')
sign.push_back(s[i]);
else
number.push_back(s[i]);
	}
sort(number.begin(),number.end());
reverse(number.begin(),number.end());
while((number.empty()==true) || (!sign.empty()==true))
{
cout<<number.back();
number.pop_back();
cout<<sign.back();
sign.pop_back();}
cout<<number.back();
int as;
cin>>as;
}
