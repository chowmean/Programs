#include<iostream>

 
//preprocessr direcrive
 

#define MOD 1000000007
#define INF 100000000ll

 

using namespace std;
 
long long buffer[11][1001];

void precomp() 
{
for(int i=1;i<=10;++i)
{
buffer[i][2] = i;
buffer[i][3] = i*(i-1);
for(int j=4;j<=1000;++j)
{
buffer[i][j] = ((i*buffer[i][j-2])%MOD+((i-1)*buffer[i][j-1])%MOD)%MOD;
}
}
}



int main()
{
precomp();
int t;
cin >> t;
while (t--)
{int b,c;
cin>>b;
cin>>c;
cout<<buffer[b][c]<<"\n";
          }
         
}
