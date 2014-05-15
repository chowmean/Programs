#include<stdio.h>
unsigned long long int with(int , int);
int main(){
    int n;
    unsigned long long int count=0;
    scanf("%d",&n);
    count += 2*with(n,2);
    count += with(n,1);
    printf("%lld",count);
return 0;
}
unsigned long long int with(int n, int num){
    unsigned long long int c;
    if(n==0){return 0;}
    if(n==1){return 1;}
    if(num==2 || num==0) c = with(n-1,1)+with(n-1,0);
    if(num==1) c = with(n-1,1)+2*with(n-1,0);
    return c;
}
