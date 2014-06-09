//ctor private;
class Pctor
{private int a,b;
private Pctor(int a, int b)
{this.a=a;
this.b=b;
}

void show()
{System.out.println("created");
System.out.println(a);
System.out.println(b);
}

static Pctor getab(int x,int y)
{Pctor ac=new Pctor(x,y);
ac.a=x;
ac.b=y;
return ac;
}
}

class Ptorcheck{
		public static void main(String... s)
		{//Pctor ab=new Pctor();
		Pctor ab=Pctor.getab(10,20);
		ab.show();
		}
}