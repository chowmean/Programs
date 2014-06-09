class Method
{void disp()
{System.out.println(1);
}

void disp(int x)
{System.out.println(2);
}

void disp(int x,int y)
{System.out.println(3);
}

void disp(double x)
{System.out.println(4);}

/*int disp(double x)                //from lower to upper auto type casting.will cause error
{System.out.println(4);
return 4;}
*/

}

class Mymethods
{public static void main(String... s)
{Method O=new Method();
O.disp(20,40);
O.disp();
O.disp(20);
O.disp(20.40);
}
}