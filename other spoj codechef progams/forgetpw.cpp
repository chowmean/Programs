    #include <iostream>
    #include<map>
    #include <algorithm>
    #include <string>
    #include <sstream>
#include <fstream>
    using namespace std;
    
    int main() {

    int t;
    cin>>t;
    while(t--)
    { int n;
    cin>>n;string encryp;
    char a;
    char b;
    map<char,char>shubh;
    	for(int i=0;i<n;i++)
    	{
    	cin>>a>>b;
    	shubh[a]=b;
    	
    	}	
    cin>>encryp;
    string final="";
//	cout<<"fin:"<<int(final[0]);
	int flag=0;int dot=0;
    	for(int i=0;i<encryp.length();i++)
   		 {
		if(encryp[i]=='0' && flag==0)
		{i++;
			}
		char temp=encryp[i];
       	if(shubh[temp]=='0')
       	{
			if(flag==0)continue;
			else
   		 	{final=final+shubh[temp];}
			}
			
    	else
    	{ if(shubh[temp]=='\0')
    		{final=final+encryp[i];flag=1;	if(encryp[i]=='.')dot=1;}
    	else
    		{final=final+shubh[temp];
			flag=1;	if(shubh[temp]=='.'){
			dot=1;}
			}
    		}
    	
    	}
    	
   // cout<<"fin:"<<final<<dot<<endl;
    	
    	
   
    
    
    
    string final1;
    if(dot==1){
    final1="";
    
    int i=final.length()-1;flag=0;
    while(i>=0)
    {if(final[i]=='0')
    {if(flag==1)
    final1=final1+final[i];
    }
    else if(final[i]=='.')
    {if(flag==1)
    {final1=final1+final[i];
    }
    flag=1;
    }
    else
    {	
    final1=final1+final[i];flag=1;
    }	
    i--;
    }}
    
    
    if((int)final[0]==0)
    cout<<0;
    else
    if(final.length()==0)
    cout<<0;
    else
    {
    if(dot==1)
    {if(final1.length()==0)cout<<0;
    for(int i=final1.length()-1;i>=0;i--)
    cout<<final1[i];}
    else
    cout<<final;}
    cout<<endl;
    }
    
    } 
