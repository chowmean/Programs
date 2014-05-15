///binary addition and substraction
#include<iostream>
#include<conio.h>
using namespace std;
class Complex{    
float  real, img;
public :
//constructor
Complex(float r=0.0, float i=0.0)
    	{  real = r;  img = i; }	

//setter  function
void  set(float r=0.0, float i=0.0)
{real = r;  img = i; }

//display  function
void  display(void)
{  cout << "real:" << real 
<< "imaginary:" << img<< endl;}

//prototype  of  +  operator  overloaded
Complex  operator+(Complex c2);
Complex  operator-(Complex c2);
};

Complex Complex::operator+(Complex c2)
        {Complex  temp;
	temp.real = real + c2.real;    //add real part
	temp.img = img + c2.img;    //add imaginary part
	return temp;						//return resultant object
               }
 
Complex Complex::operator-(Complex c2)
        {Complex  temp;
	temp.real = real - c2.real;    //add real part
	temp.img = img - c2.img;    //add imaginary part
	return temp;						//return resultant object
               } 
 
int main()
{Complex c1(10,20);
Complex c2(12,12);
Complex c3=c1+c2;
c3.display();
c2=c3-c1;
c2.display();
getch();
int a;
cin >>a;
cout<<a+a;
return 0;
    }
