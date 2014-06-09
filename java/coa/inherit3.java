//inherit3   super.super not allowed  // a super can access only super member key word k aaage kuch nahi lagtaa :))D

class Abc3
{int a=1;
Abc3(){System.out.println(a);}
}
class Xyz3 extends Abc3
{int a=2;
Xyz3(){System.out.println(super.a);}
}
class Mno3 extends Xyz3
{int a=3;
Mno3(){System.out.println(super.a);}
}

class Inherit3{
public static void main(String... a)
{
Mno3 as=new Mno3();
}
}