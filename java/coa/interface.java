interface Iabc
{void show(int a,int b);
}

interface Ixyz
{void disp(int n,int a);
}

interface Ipqr extends Iabc,Ixyz   //multiple inheritence
{int x;
 //since in interface therefore it is bt default static final

} 

class Abc6 implements Iabc
{public void show(int a,int b)
{System.out.println("Iabc");
}
}

class Xyz6 implements Iabc,Ipqr
{public void show(int a,int b)
{System.out.println("xyz6");
}
void disp()
{System.out.println("sum implement  disp ");
}
}

class Implement
{public static void main(String... s)
{Iabc i;
//Iabc i=new Iabc() will not work
Abc6 ab=new Abc6();
Xyz6 xy=new Xyz6();
i=ab;
i.show(11,12);
i=xy;
i.show(12,13);System.out.println(xy.x);
//i.disp(); will not work

xy.disp();
}
}