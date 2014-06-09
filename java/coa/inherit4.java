//super is used to call the constructor of the base class as super(); yoho :)
//first base class is constructed then subclass is constructed:)
//super as constructor can only be used in constructor  :(
//no  scope resolution in java.



class Abc4
{int a=1;Abc4(){System.out.println("default1 call");
}Abc4(int a)
{System.out.println("parametric1 call");}
}
class Xyz4 extends Abc4
{int a=2;
Xyz4(int b){super(2);
System.out.println("parametric2 call");
}
Xyz4(){super();
System.out.println("default2 call");
}
}



class Inherit4{
public static void main(String... a)
{
Xyz4 as=new Xyz4();
Xyz4 as1=new Xyz4(1);
}
}