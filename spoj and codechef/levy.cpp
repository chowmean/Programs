#include <iostream>
using namespace std;

#define LIMIT 1500000 /*size of integers array*/
#define PRIMES 100000 /*size of primes array*/

int main(){
    int i,j,numbers[LIMIT];
    int primes[PRIMES];
    
    int limit=5000;
    /*fill the array with natural numbers*/
    for (i=0;i<limit;i++){
        numbers[i]=i+2;
    }

    /*sieve the non-primes*/
    for (i=0;i<limit;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<limit;j+=numbers[i])
                numbers[j]=-1;
        }
    }

    /*transfer the primes to their own array*/
    j = 0;
    for (i=0;i<limit && j<PRIMES;i++)
        if (numbers[i]!=-1)
            primes[j++] = numbers[i];

    /*print*/
    for (i=0;i<PRIMES;i++)
        printf("%d\n",primes[i]);

return 0;
}
