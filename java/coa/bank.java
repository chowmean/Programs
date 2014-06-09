//icici bank  :)   //convert to words:(

class Bank
	{private int acno;
	private String a_name;
	private double balance;
	
Bank()
{acno=0;
balance=0.0;
a_name="unnamed";}

Bank(int a,double b,String s)
{acno=a;
balance=b;
a_name=s;}
	
void deposit(double a)
{balance+=a;
System.out.println("updated successfully");
}
void withdraw(double b)
{if(balance-a>=300)
{balance-=a;
System.out.println("updated successfully");
}else
System.out.println("go earn something");
}
void statement()
{System.out.println("balance"+ balance);
System.out.println("account no"+ acno);
System.out.println("name"+ a_name);
}
}
class Bankuse{
			public static void main(String... s)
			{Bank b1=new Bank(1001,4000.0,"gaurav");
			Bank b2=new Bank();
			b1.deposit(2000.0);
			b2.deposit(200);
			b1.withdraw(100);
			b1.statement();
			b2.statement();
			b2.withdraw();
			}
			}