//function overwritten if the function have the same name thenit is overwritten in the subclass  ;))
//dynamic method dispath and runtime polymorphism
class Abc5
{void show()
{System.out.println("this is base");
}
}


class Mno5 extends Abc5
{void show()
{System.out.println(" function overwritten this is subbase");
}
}

class Inherit5
{
public static void main(String... s)
{Abc5 a=new Abc5();
Abc5 t;
a.show();
Mno5 b=new Mno5();
a.show();
b.show();
t=a;
t.show();
t=b;
//super.t.show(); or t.super.show will not work:  
t.show();
t=a;
t.show();
a.show();
a=b;
a.show();

}
}
