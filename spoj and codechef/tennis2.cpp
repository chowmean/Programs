#include<stdio.h>
#include<string.h>
int main()
{
 int t;int temp;
 scanf("%d",&t);
 while(t--)
 {
  int plen,i;
  scanf("%d",&plen);
  char p[plen];
  scanf("%s",p);
  int spnt=0,cpnt=0,sgame=0,cgame=0;
  for(i=0;i<plen;i++)
  {
    if(p[i]=='S'||p[i]=='s') {spnt=spnt+1;temp=1;}
    else if(p[i]=='C'||p[i]=='c') {cpnt=cpnt+1;temp=1;}
    if(spnt==4||cpnt==4)
    {
	  if(spnt==4 && sgame!=4)  sgame=sgame+1;
	  else if(cpnt==4 && cgame!=4) cgame=cgame+1;
	  spnt=0;
	  cpnt=0;
	  temp=0;
	  }
}

if(temp==0)
{ 
printf("%d-%d\n",sgame,cgame);
}
else

if(sgame!=4 && cgame!=4)
{
  int a;
  int b;
  if(spnt==1) a=15;
  else if(spnt==2) a=30;
  else if(spnt==3) a=40;
  if(cpnt==1) b=15;
  else if(cpnt==2) b=30;
  else if(cpnt==3) b=40;
  printf("%d-%d,%d-%d\n",sgame,cgame,a,b);
  }

 }

 return 0;
 
 }
