//elephant maping
 #include<iostream>
 #include<vector>
 #include<map>
 #include<algorithm>
 using namespace std;
 int main ()
 {vector< pair<long long int ,long long int> > music;
 map <long long int,bool> check;
 int a;
 cin>>a;
 while(a--)
 { long long int mul=0;long long int ans=0;long long int len=0;
 music.clear();
 check.clear();
 long long int n;cin>>n;
 for(long long int i=0;i<n;i++)
 {long long int b,c;
 cin>>b>>c;
 music.push_back(make_pair(c,b));
       }
 sort(music.begin(),music.end());
 
 for(long long int j=0;j<n;j++)
 {if(check[music[j].second])
 len+=music[j].first;
 else
 {check[music[j].second]=true;
    mul++;
    ans+=mul*music[j].first;
     }
                 }
     
ans+=mul*len;
    printf("%lld\n",ans);

}
int as;cin>>as;
   
     }
