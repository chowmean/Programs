// 2011IPG-039      Gaurav Yadav

#include<cstdio>
#include<iostream>
#include<ctime>
#include<algorithm>
#include<cmath>
#include<fstream>


using namespace std;


int matrix_addition(int **matrix1, int **matrix2, int **result, int size )
{
    for ( int i = 0; i < size; i++)
    {
        for ( int j = 0; j < size; j++)
        {
            result[i][j] =  matrix1[i][j] + matrix2[i][j];
        }
    }
    return 0;
}


int matrix_substraction(int **matrix1, int **matrix2, int **result, int size )
{
    for ( int i = 0; i < size; i++)
    {
        for ( int j = 0; j < size; j++)
        {
            result[i][j] =  matrix1[i][j] - matrix2[i][j];
        }
    }
    return 0;
}









// Multiplication of two matrix temp=A*B.......TRADITIONAL ALGO
int multiplication( int **matrix1, int **matrix2, int **result, int size ) 
{
    for (int i=0;i<size ;i++)
        {
              for (int j=0;j<size ;j++)
              {
                   result[i][j]=0;
                   for (int k=0;k<size ;k++)
                   {
                          result[i][j]=result[i][j]+matrix1[i][k]*matrix2[k][j];
                   }
              }
        }
    return 0;
}




int strassen(int **p, int **q, int **r, int n)              // multiply matrix using Strassen's Algorithm
{
    int n1,n2,n3;
    if(n<= 32)
    {
       multiplication(p,q,r,n);
    }
    else
    {
      int** a,** b,** c,** d,** e,** f,** g,** h;
      int** I,** J,** K,** L,** m1,** m2,** m3,** m4,** m5,** m6,** m7,**Astrass,** Bstrass;
      n1=n/2;
      n2=n/2;
      n3=n2;
    
      a = new int *[n2]; 
	  b=  new int *[n2]; 
	  c=  new int *[n2];
	  d=  new int *[n2]; 
             
      e = new int *[n2];
	  f=new int *[n2];
	  g=new int *[n2];
	  h=new int *[n2]; 
	
      I = new int *[n2];
	  J=new int *[n2];
	  K=new int *[n2];
	  L=new int *[n2]; 		
      
      m1 = new int *[n2];
	  m2=new int *[n2];
	  m3=new int *[n2];
	  m4=new int *[n2];
	  
      m5 = new int *[n2];
	  m6=new int *[n2];
	  m7=new int *[n2];		

      Astrass = new int *[n2]; Bstrass= new int *[n2];
      
 
      for ( int i = 0; i < n2; i++) //allocating space for matrices
      {
	  a[i] = new int[n2];
	  b[i] = new int[n2];
	  c[i] = new int[n2];
	   d[i] = new int[n2];
          
          e[i] = new int[n2];
		  f[i] = new int[n2];
		  g[i] = new int[n2]; 
		  h[i] = new int[n2];
	
          I[i] = new int [n2];
		  J[i]=new int [n2];
		  K[i]=new int [n2];
		  L[i]=new int [n2]; 

          m1[i] = new int [n2];
		  m2[i]=new int [n2];
		  m3[i]=new int [n2];
		  m4[i]=new int [n2];
          m5[i] = new int [n2];
		  m6[i]=new int [n2];
		  m7[i]=new int [n2];		

	  Astrass[i] = new int [n2]; Bstrass[i]= new int [n2];
       }
	
       for (int i = 0; i < n / 2; i++)											// submatrices A ,B,C,D,E,F,G,H of n/2 size	
       {
         for (int j = 0; j < n / 2; j++)
          {
                    a[i][j] = p[i][j];                								
                    b[i][j] = p[i][j + n / 2];       
                    c[i][j] = p[i + n/ 2][j];         
                    d[i][j] = p[i + n / 2][j + n/ 2];
                                                      
                    e[i][j] = q[i][j];                
                    f[i][j] = q[i][j + n / 2];
                    g[i][j] = q[i + n/ 2][j];
                    h[i][j] = q[i + n / 2][j + n / 2];

           }
        }
																							//calculate M1,M2,M3,M4,M5,M6,M7 with the help of this we will calcualte I,J,K,L 
          
       matrix_addition( a,d,Astrass,n1);
	    matrix_addition( e,h,Bstrass,n1);
		strassen(Astrass, Bstrass, m1,n1);      
       matrix_addition( c,d,Astrass,n1);
	  strassen(Astrass,e, m2,n1);
	   matrix_substraction( f,h,Bstrass,n1); 	             
       strassen(a, Bstrass, m3, n1);
	    matrix_substraction( g, e, Bstrass,n1); 
		strassen(d, Bstrass, m4,n1);  		             
       matrix_addition( a, b, Astrass,n1);
	   strassen(Astrass, h, m5,n1);
	   matrix_substraction( c, a, Astrass,n1);          
       matrix_addition( e, f, Bstrass,n1);
	   strassen(Astrass, Bstrass, m6, n1);          
       matrix_substraction(b, d, Astrass,n1);
	   matrix_addition(g, h, Bstrass,n1);   
       strassen(Astrass, Bstrass, m7, n1); 		          
       matrix_addition( m1, m4, Astrass, n1);
	   matrix_substraction( m7, m5, Bstrass,n1);		    
       matrix_addition( Astrass, Bstrass, I, n1);
	   matrix_addition( m3, m5, J, n1);
       matrix_addition( m2, m4, K, n1);
	   matrix_addition( m1, m3, Astrass, n1);		
       matrix_substraction( m6, m2, Bstrass, n1);
	   matrix_addition( Astrass, Bstrass, L, n1);		

																			
       for (int i = 0; i < n/2 ; i++)								//    calculating I,J,K,L and put it into the resulttant marix
        {
         for (int j = 0 ; j < n/2 ; j++)
          {
            r[i][j] = I[i][j];
            r[i][j+n/2] = J[i][j];
            r[i+n/2][j] = K[i][j];
            r[i+n/2][j+n/2] = L[i][j];
          }
        }

       for ( int i = 0; i < n2; i++)									//deleting the spaces
       {
         delete [] a[i];
		 delete [] b[i];
		 delete [] c[i];
		 delete [] d[i];
         delete [] e[i];
		 delete [] f[i];
		 delete [] g[i];
		 delete [] h[i];       
         delete [] I[i];
		 delete [] J[i];
		 delete [] K[i];
		 
		 delete [] L[i];
         delete [] m1[i];
		 delete [] m2[i];
		 delete [] m3[i];
		 delete [] m4[i]; 
         delete [] m5[i];
		 delete [] m6[i];
		 delete [] m7[i];
         delete [] Astrass[i];
		delete [] Bstrass[i];
       }  
       
	 	delete [] a;
	 	delete [] b;
		delete [] c;
	 	delete [] d;
         delete [] e;
		 delete [] f;
		 delete [] g;
		 delete [] h;       
         delete [] I;
		 delete [] J;
		 delete [] K;
		 delete [] L;
         delete [] m1;
		 delete [] m2;
		 delete [] m3;
		 delete [] m4; 
         delete [] m5;
		 delete [] m6;
		 delete [] m7;
         delete [] Astrass;
		  delete [] Bstrass;
       }
	return 0;
}





int main()
{
   
    int n;
    cout<<" Enter size of the square matrix ";
    cin>>n;
    int **p, **q, **r;
    p = new int *[n];
    q = new int *[n];
    r = new int *[n];
   
   
   
    for (int i = 0; i < n; i++)   //making matrices
    {
        p[i] = new int [n]; 
        q[i] = new int [n];
        r[i] = new int [n];
    }
    
    
    
  
    for(int i=0;i<n;i++)              //filling elements (1-10)
    {
       for(int j=0; j<n; j++)
       {
          p[i][j]=0;
          q[i][j]=rand()%10+1; 
          r[i][j]=rand()%10+1; 
       }
    }
     
	 clock_t start1,end1,start2,end2;
     double traditional_time, strassen_time;

     start1=clock();
     multiplication(p,r,q,n);           //multiplying using traditinal algo
     end1= clock();
     traditional_time = (double)(end1-start1)/CLOCKS_PER_SEC;
     cout<<"\nTime taken by Traditional's algo  -> { "<<n<<"} is : "<<traditional_time<<endl;

      start2 = clock();
      strassen(q, r, p, n);
      end2= clock();
      strassen_time = (double)(end2-start2)/CLOCKS_PER_SEC;
      cout<<"\nTime taken by Strassen's algo -> { "<<n<<" }is : "<<strassen_time<<endl;

      
   
	
      
  ofstream myfile;
  myfile.open ("output.txt");
  myfile<<"Size of the matrix is "<<n<<"X"<<n<<endl;
  myfile<<"Result is as follow:"<<endl<<endl;
   for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {myfile<<r[i][j]<<" ";
		}
		myfile<<endl;
		myfile<<endl;
		}
  myfile.close();
	
		cout<<endl;
		cout<<endl;
		cout<<"OPEN output.txt to see the result of the matrix...";
		cout<<endl;
		cout<<endl;
		system("PAUSE");
	return 0;
    
}








