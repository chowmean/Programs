
#include<bitset>
#include<vector>
#include<iostream>
 using namespace std;

bitset<10010> isprime;
 
vector<int> primes;
 
int ans[10010];
 
void gen_prime()
{
    int i,j;
    for(int i=2; i*i<10010 ; i++)
        if(isprime[i])
        for(int j=2*i; j<10010; j=j+i)
            isprime[j]=false;
 for(int i=2; i<10010 ; i++)
 cout<<primes[i]<<"\n";
 
}

int main()
{isprime.set();
gen_prime();
    }
