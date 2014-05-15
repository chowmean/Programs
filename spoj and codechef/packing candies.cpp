#include<iostream>
using namespace std;
int main()
{int candies,type,list;
cin>>candies;
cin>>type;
cin>>list;
int lista[list][2];int temp=0;
for(int i=0;i<list;i++)
{cin>>lista[i][0];
cin>>lista[i][1];
temp=temp+lista[i][1];
}
if(temp>candies)
cout<<0<<"\n";


}