//subscript operator
#include<iostream>
#include<conio.h>
using namespace std;
//safeArray2.cpp : program for demonstrating an array with the size constraints

#include <process.h>
const int  MAX = 10;

class  SafeArray{   	
private:
	int  a[MAX];
	int  size;		// size <= MAX
public :
	//constructor
	SafeArray(int s = 10, int val = 0);
int& operator[]( int i );
};
//ctor
SafeArray::SafeArray(int s, int val){	
   if (s > MAX) {
	cout << endl <<  "ERROR: Impossible current size\n";
	exit(1);		//exit with error code
   }
   size = s;
   //initialize  all  elements.
   for  (int i=0; i<size; i++)  
	a[i] = val;
}

//function to overload subscript [ ] operator
int& SafeArray::operator[]( int i ){	
	if ( ( i< 0) || (i >= size) )	{//out  of  range  error
		cout << endl <<  "ERROR: out of bound\n";
		exit(1);		//exit with error code						
	}
	return a[i]; 		//otherwise  return  element	
}

//main  function
int  main( ) {
	int i;
	SafeArray  sa(5, 0);		//size = 5

	for  (i = 0; i < 5; i++)	//assign  element
		sa[i] = i *100;

	for (i = 0;i < 5; i++){		//display  elements
		int x = sa[i];
		cout << x << endl;
	}
    
	//sa[10] = 700;  			//ERROR
	//cout << endl << sa[-5];  	//ERROR
	getch();
    return 0;
}
