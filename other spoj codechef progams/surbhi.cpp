#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<cstring>

using namespace std;

int main()
{long long int t;
        scanf("%lld",&t);
        while(t--)
        {char s[1000000];
        scanf("%s",&s);
        vector<char>mydata;
        long long int counter=0;
        for(long long int i=0;i<strlen(s);i++)
                {
                if(s[i]=='[')
                        {counter=1;continue;
                        }
                if(s[i]==']')
                        {counter=0;
                                while(!mydata.empty())
                                {cout<<mydata.back();
                                mydata.pop_back();
                                }continue;
                        }
                if(counter==0)
                {cout<<s[i];
                }

                if(counter==1)
                {mydata.push_back(s[i]);
                }
                        }cout<<endl;
                }
        }
                                                                                       


