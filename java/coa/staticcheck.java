//static-- only static members can acces static members;
class Myclass
	{int a;
	static int b;
	void show()
	{System.out.println(1);
	}
	
	static void disp()
	{System.out.println(b);
	}
	
	static
	{
	b=0;
	}
	
	}

class StaticCheck{
	public static void main(String... s)
	{Myclass.disp();
	Myclass.b=100;
	Myclass.disp();
	//Myclass.a=12;   //cannot be used since it is not static
	
	Myclass m1=new Myclass();
	m1.a=10;
	m1.b=30;
	Myclass.disp();
	}
}