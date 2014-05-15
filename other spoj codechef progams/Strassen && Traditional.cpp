/* NAme - Avneet Singh 
   Roll No. - IPG-2011028
   DAA Assignment #2
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;
typedef vector < vector <int> > vvi;
typedef vector<int> vi;
void TraditionalAlgorithm(vvi &a,vvi &b,vvi &c,int kk,int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            c[i][j] = 0;
            for(int k=1;k<=kk;k++)
                c[i][j] += (a[i][k]*b[k][j]);
        }
    }    
}
void set(vvi &matrix,vvi &base,int x,int y,int size)
{
    for(int i=1;i<=size;i++)
        for(int j=1;j<=size;j++)
            matrix[i][j] = base[i+x][j+y];
}
void setter(vvi &matrix,vvi &base,int x,int y,int size)
{
    for(int i=1;i<=size;i++)
        for(int j=1;j<=size;j++)
            base[i+x][j+y] = matrix[i][j];
}
void add(vvi &a,vvi &b,vvi &result,int size)
{
    for(int i=1;i<=size;i++)
        for(int j=1;j<=size;j++)
            result[i][j] = a[i][j] + b[i][j];
}
void sub(vvi &a,vvi &b,vvi &result,int size)
{
    for(int i=1;i<=size;i++)
        for(int j=1;j<=size;j++)
            result[i][j] = a[i][j] - b[i][j];
}
void Strassen(vvi &a,vvi &b,vvi &c, int n)
{

     if(n<=64) 
    {   TraditionalAlgorithm(a,b,c,n,n,n);
        return;
	 }
    int size = n/2;    vi col(size+1);    vvi A(size+1,col),B(size+1,col),C(size+1,col),D(size+1,col),E(size+1,col),F(size+1,col),G(size+1,col),H(size+1,col),I(size+1,col),J(size+1,col),K(size+1,col),L(size+1,col),m1(size+1,col),m2(size+1,col),m3(size+1,col),m4(size+1,col),m5(size+1,col),m6(size+1,col),m7(size+1,col),aux(size+1,col),aux2(size+1,col);    
    set(A,a,0,0,size);    set(B,a,0,size,size);    set(C,a,size,0,size);    set(D,a,size,size,size);
    set(E,b,0,0,size);    set(F,b,0,size,size);    set(G,b,size,0,size);    set(H,b,size,size,size);   
    add(A,C,aux,size);    add(E,F,aux2,size); Strassen(aux,aux2,m1,size);
    add(B,D,aux,size);    add(G,H,aux2,size);    Strassen(aux,aux2,m2,size);
    sub(A,D,aux,size);    add(E,H,aux2,size);    Strassen(aux,aux2,m3,size);
    sub(F,H,aux,size);    Strassen(A,aux,m4,size);
    add(C,D,aux,size);    Strassen(aux,E,m5,size);
    add(A,B,aux,size);    Strassen(aux,H,m6,size);
    sub(G,E,aux,size);    Strassen(D,aux,m7,size);    
    add(m2,m3,aux,size);    add(m6,m7,aux2,size);    sub(aux,aux2,I,size);
    add(m4,m6,J,size);    add(m5,m7,K,size);
    sub(m1,m3,aux,size);    add(m4,m5,aux2,size);    sub(aux,aux2,L,size);   
    setter(I,c,0,0,size);    setter(J,c,0,size,size);    setter(K,c,size,0,size);    setter(L,c,size,size,size);
}
void print(vvi &c,int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int t;
    // Execuatable code
    int row1,col1;
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
    
    //cin>>t;
         row1=128;
         col1=128;
   //     cin>>row1>>col1;
        vi columns(col1+1);
        vvi a(row1+1,columns);   
        for(int i=1;i<=row1;i++)
            for(int j=1;j<=col1;j++)
                cin>>a[i][j];
             
       /* cin>>row2>>col2;
        vi columnsof2(col2+1);
        vvi b(row2+1,columnsof2);
        for(int i=1;i<=row2;i++)
            for(int j=1;j<=col2;j++)
                cin>>b[i][j];
         */
        vi columnsof3(col1+1);
        vvi c(row1+1,columnsof3);
        //since square matrix we can pass one argument 
        // row1 = col1 = row2 = col2 = n = size of square matrix
         clock_t start=clock();  // line added by dinesh Kumar
        Strassen(a,a,c,row1);
        
         //vi columnsof3(col2+1);
         
          clock_t stop=clock();
        
        double elapsed=(double)(stop-start) * 1000.0 / CLOCKS_PER_SEC;
        cout<<"By Using Strassen matrix multiplication result is :- "<<endl<<endl;
        cout<<"Time elapsed in Strassen Algorithm in  "<<row1<<" * "<<col1<<"  matrix in ms :- "<<elapsed<<" ms"<<endl<<endl;
        print(c,row1,col1);
        clock_t start2=clock();
        vvi d(row1+1,columnsof3);
        TraditionalAlgorithm(a,a,d,col1,row1,col1);
        clock_t stop2=clock();
        double elapsed2=(double)(stop2-start2) * 1000.0 / CLOCKS_PER_SEC;
        cout<<endl<<endl;
	    cout<<"By Using Traditional matrix multiplication result is :- "<<endl<<endl;
	    cout<<"Time elapsed in Traditional Algorithm in  "<<row1<<" * "<<col1<<"  matrix in ms :- "<<elapsed2<<" ms"<<endl<<endl;
        print(c,row1,col1);
    
    return 0;
}
/* NAme - Avneet Singh 
   Roll No. - IPG-2011028
   DAA Assignment #2
*/


