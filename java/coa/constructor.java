//constructor-  main function is to give initial values to the private data memeber of the class
class Ctorx
	{private int x,y;
	void show()
		{System.out.println(x+y);
		}
	Ctorx(){   //default ctor
	x=10;y=10;
	}
	Ctorx(int m ,int n) //parameterised ctor
	{x=m;y=n;
	}
	
	Ctorx(Ctorx a) //parameterised ctor
	{x=a.x;y=a.y;
	}
	
	Ctorx(Classcreate a) //parameterised ctor
	{x=a.a;y=a.b;
	}
	}
class Ctormain
	{public static void main(String... s)
	{Ctorx a=new Ctorx();
	a.show();
	Ctorx b=new Ctorx(12,12);
	b.show();
	Ctorx c=new Ctorx(b);
	c.show();
	Classcreate ac=new Classcreate();
	ac.a=10;
	ac.b=20;
	Ctorx d=new Ctorx(ac);
	d.show();
	
	Ctorx e=new Ctorx(new Ctorx(12,15));  //static or compile time polymorphism
	e.show();
	}
	}	