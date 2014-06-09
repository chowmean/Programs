//class inside class  there should be no declaration under inner class but inner class can be static
class Outer
{int a=100;

void show()
{System.out.println("inner"+a);
//showi(); inner class can acces outer of the inner class but outer canaot access :)

};

		class Inner{
		int b=100;
		
		void showi()
		{System.out.println("inner");
		}
		}
Inner v=new Inner();

static class Inner1{
		int b=100;
		
		void showi()
		{System.out.println("inner1");
		}
		}
Inner1 e=new Inner1();

}

class Innertest 
{public static void main(String ... s)
{Outer o=new Outer();
o.show();
Outer.Inner i=o.new Inner();//when class is not static
i.showi();

Outer.Inner1 ib=new Outer.Inner1();   //when inner class is static
ib.showi();

}
}