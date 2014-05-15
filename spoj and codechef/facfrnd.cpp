#include<iostream>
#include<vector>
using namespace std;
int main()
{int a;
cin>>a;
vector <int> friends;

for(int i=0;i<a;i++)
{int b;
int friendsa;
cin>>friendsa;
friends.push_back(friendsa);
cin>>b;
for(int j=0;j<b;j++)
    {int g;
    
        cin>>g;
        for(int k=0;k<friends.size();k++)
        {if(g==friends[k])
        break;
        else
        friends.push_back(g);
        }
    
    }


}
cout<<friends.size();
int as;
cin>>as;   
}
