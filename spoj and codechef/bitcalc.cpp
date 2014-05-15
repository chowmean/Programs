#include<conio.h>
#include<stdio.h>
struct marks{
int p:10;
int c:3;
int m:2;
};
int main(){
struct marks s={2,-6,5};
printf("%d %d %d",s.p,s.c,s.m);
getch();
return 0;


}
