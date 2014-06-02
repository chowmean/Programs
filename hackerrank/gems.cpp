#include<iostream>
#include<string>
 using namespace std;
int main()
{
    int t;
    cin>>t;
    string ch;
    int chk[26]={0};
    for(int i=0;i<t;i++)
    {
        cin>>ch;
        for(int j=0;j<26;j++)
            {
            for(int k=0;k<ch.length();k++)
                {
                 if(ch[k]-97==j)
                    {   
                     chk[j]++;
                     break;       
                    }
            }
        }
    }
    
    int count=0;
    for(int i=0;i<26;i++)
        {
        if(chk[i]==t)
            count++;
            
    }
    cout<<count<<endl;
}
