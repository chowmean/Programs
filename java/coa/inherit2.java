//inhertance
class Abc1
{int a,b;
Abc1()
{System.out.println("created base abc");
}
void add()
{System.out.println("a"+a+"b"+b+"base=a+b:"+(a+b));
}
}

class Xyz1 extends Abc1
{
Xyz1()
{System.out.println("created sub xyz");
}
int a;
void sum()
{System.out.println("a"+a+"b"+b+"a"+super.a+"base=super.a+b+a:"+(super.a+b+a));
}
}

class Inherit2
{
public static void main(String... s)
{Abc1 ab= new Abc1();
ab.a=10;
ab.b=20;
ab.add();
Xyz1 xy=new Xyz1();
xy.a=150;
xy.b=160;
xy.a=10;
xy.sum();
xy.add();
Abc1 t;   //here t can  access the members of Xyz class that are present in Abc class those are a , b add()
t=xy;
t.add();
t=ab;
t.add();

}
}