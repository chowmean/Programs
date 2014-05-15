//operator overloading only prefix
#include <iostream.h>
#include <conio.h>
class Counter {     
private:
	int  count;
public :
		//constructor
		Counter(int  c = 0) : count(c)
		{  }
		
		//setter  function
		void  set(int  c = 0)
		{count = c;}
		
		//display  function
		void  display( )
		{cout << "count = " << count << endl; }
		
		//increment  :  overloaded ++
		void  operator++( )
		{++count; }
		
		//decrement  :  overloaded  --
		 void   operator--( )
		{ --count ; }
};   //end of class

//main  function
int  main( ){  	
	Counter  c1(100), c2;

	--c1;
	c1.operator--();

	++c2;
	c2.operator++();

	c1.display( );
	c2.display( );
	getch();
    return 0;
}
