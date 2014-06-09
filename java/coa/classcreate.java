//creating and declaring class ,object and access its members

class Classcreate{	
		int a,b;  //instance variables.
		void add()
		{System.out.println(a+b);
		}
		}
class Classmain{
		public static void main(String... s)
			{Classcreate ab=new Classcreate();//declares and allocates memory,  classcreate is a constructor
			Classcreate abc;//declaration,deffered(holded when ever needed memory can be allocated)
			abc=new Classcreate();//allocates memory , instantiation,constructor called;
			ab.a=10;
			ab.b=20;
			ab.add();
			abc=ab;
			abc.add();
			}
		}		