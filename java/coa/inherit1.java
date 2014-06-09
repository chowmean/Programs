//inhertance
class Abc
{int a,b;
Abc()
{System.out.println("created base abc");
}
void add()
{System.out.println("a"+a+"b"+b+"base=a+b:"+(a+b));
}
}

class Xyz extends Abc
{
Xyz()
{System.out.println("created sub xyz");
}
int c;
void sum()
{System.out.println("a"+a+"b"+b+"c"+c+"base=a+b+c:"+(a+b+c));
}
}

class Inherit1
{
public static void main(String... s)
{Abc ab= new Abc();
ab.a=10;
ab.b=20;
ab.add();
Xyz xy=new Xyz();
xy.a=150;
xy.b=160;
xy.c=10;
xy.sum();
xy.add();
Abc t;   //here t can  access the members of Xyz class that are present in Abc class those are a , b add()
t=xy;
t.add();
t=ab;
t.add();

}
}