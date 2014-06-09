//how to make overriding compulsory

abstract class Shape
{int h,w;final static int x=400;  //constant every where
Shape(int h, int w)
{this.h=h;
this.w=w;
}
//void area()
//{System.out.println("no shape");
//}  instead we willl write
abstract void area();
}

class Circle extends Shape
{Circle(int r)
{super(r,r);
}
void area()
{System.out.println("circle:"+(super.h*super.w*3.14));
}
}

class Rectangle extends Shape
{Rectangle(int r,int f)
{super(r,f);
}
void area()
{System.out.println("rectangular shape"+(h*w) );
}
}

class Shapes
{public static void main(String... s)
{//Shape sh=new Shape(10,20);  will not work
Rectangle r=new Rectangle(10,20);
Shape sh=new Rectangle(10,20);
sh.area();
r.area();
Shape sha=new Circle(10);
sha.area();
//Circle rr=new Shape(10);//shape is abstract cannot be instantiated
//rr.area();
}
}