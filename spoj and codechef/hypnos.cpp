#include<iostream>
#include<vector>
using namespace std;

vector<int> myvector;bool loop=true;
int inter;
int calmag(long long int a,int inter)
{int sum=0;inter=inter+1;
    cout<<inter<<endl;
    while(a>0)
    {sum=sum+(a%10)*(a%10);
        a=a/10;
    }
    return sum;
}

int ifmag(int a)
{int flag=0;
    if(a==1)
    flag=2;
    for(unsigned int i=0;i!=myvector.size();i++)
    {if(myvector[i]==a)
    flag=1;
        
    }
    
        {   if(flag==1)
            return 1;
            else 
            if(flag==2)
            {loop=false;
            cout<<inter<<endl;
            return 0;}
            else
            {myvector.push_back(a);
            return 0;
            }
        }
    
  
}
int main()
{int a;
cin>>a;
while(a--)
{   inter=0;
    myvector.clear();
    long long int b;int c;loop=true;
    cin>>b;
    c=calmag(b,inter);
    if(c==1)
    cout<<inter<<endl;
    else
    {myvector.push_back(c);
    while(loop)
    {c=calmag(b,inter);
    if(ifmag(c)==1)
        {cout<<-1<<endl;
        break;
        }   
    }
    
    }
}
    
}
