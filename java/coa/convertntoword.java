class n2w{
{String n2word(int n)
{String word="";

int t;
if(n>0)
{
t=n/1000;
if(t>0){word+=getword(t)+"thousand";}
n%=1000;
t=n/100;
if(t>0){
word+=getword(t)+"hundred";
}
n%=100;
if(n>0){
word+=getword(n);}
}
else{
word="zero";
}
word+="only";
return(word);
}
static String getword(int t){
String x =" ";
String [] d=new String[91];
d[0]="zero";
d[1]="one";
d[2]="two";
d[3]="three";
d[4]="four";
d[5]="five";
d[6]="six";
d[7]="seven";
d[8]="eight";
d[9]="nine";
d[10]="ten";
d[11]="eleven";
d[12]="twelve";
d[13]="thirteen";
d[14]="fourteen";
d[15]="fifteen";
d[16]="sixteen";
d[17]="seventeen";
d[18]="eighteen";
d[19]="nineteen";
d[20]="twenty";
d[30]="thirty";
d[40]="fourty";
d[50]="fifty";
d[60]="sixty";
d[70]="seventy";
d[80]="eighty";
d[90]="ninety";
if(t<=20|| t%10==0)
{
x=d[t];}
else{
x=d[t/10*10] + d[t%10];}
return(x);
}
}

}