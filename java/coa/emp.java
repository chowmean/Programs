class Emp{
private int salary;
static int eno;
private String ename, city;
int count;
Emp(String ename,String city,int salary)
{
this.ename=ename;
this.city=city;
this.salary=salary;
eno++;
count = eno;
}
void showprofile()
{
 System.out.println("Employee Name:"+ ename);
 System.out.println("Employee City:" + city);
 System.out.println("Employee No.: " + count);
 }
 void update(String city)
 {
   this.city=city;
 }
 void update(int Salary)
 {
 this.salary=salary;
 }
 void showslip()
 {
 double da=0,ta=0,hra=0,gross=0;
 da= (salary*65)/100;
 if(city=="Mumbai" || city=="Chennai" || city=="Delhi" )
 {
  ta=(salary*45)/100;
 }
 else
 {
  ta=(salary*25)/100;
 }
 hra=(salary*30)/100;
 gross= salary + da +ta +hra;
 System.out.println("Employee Name:  " + ename);
 System.out.println("Employee No:  " +count);
 System.out.println("Employee Salary:  "+ salary);
 System.out.println("da:   "+ da);
 System.out.println("ta  : " + ta);
 System.out.println("hra :  " +hra);
 System.out.println("gross:" + gross);
n2w N =new n2w();
String w =N.toward(gross);
System.out.println("Balance In Words Rs :"  + w);
}
}
class slip{
public static void main(String [] s)
{
 Emp e1 = new Emp("anil" , "Delhi" ,12000);
 Emp e2 = new Emp("gaurav","Chennai" , 15000);
 e2.update("Gwalior");
 e1.showprofile();
 e2.showprofile();
 e1.showslip();
 e2.showslip();
 }
 }