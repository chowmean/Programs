//operator overloading unary prefix and postfix

#include <iostream.h>
#include <conio.h>
class Counter{     
private:
		int  count;
public :
		//constructor
		Counter(int  c = 0) : count(c) 
		{  	}

		//setter  function
		void  set(int  c = 0)
		{count = c;}

		//display  function
		void  display( )
		{cout << endl << "count = " << count; }

      

		//function to increment with support to assignment
		Counter  operator++( )		{ 
			Counter  temp;
			temp.count = ++count;
			
			return  temp;
		}
        Counter  operator++( int)		{ 
			Counter  temp;
			temp.count = count;
			++count;
			return  temp;
		}
		
		
		Counter  operator--( )		{	
			Counter  temp;
			temp.count = --count;
			
			return  temp;
		}
		//function to decrement with support to assignment
		Counter  operator--( int)		{	
			Counter  temp;
			temp.count = count;
			--count;
			return  temp;
		}
};  //end of counter class

int  main( ){	
	Counter  c1(100),  c2;

	++c1;		// enlarged c1.operator ++( )
	c2 = c1++;		// enlarged	c2 = c1.operator ++( )
	c1.display( );
	c2.display( );
    c1.display( );
	c2 = c1--;		// enlarged	c2 = c1.operator --( )
	c1.display( );
	c2.display( );
	getch();
    return 0;
}
