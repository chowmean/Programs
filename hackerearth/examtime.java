import java.*;
import java.io.*;
import java.util.Scanner;

class TestClass {


static public int gcdr(int x,int y )
		{
		if ( x==0 )
		return y;
		return gcdr ( y%x, x );
		}
		



    public static void main(String args[] ) throws Exception {
        

        Scanner in = new Scanner(System.in);
        String line = in.nextLine();
		
		
		
		
        int N = Integer.parseInt(line);int count=0;
        for (int i = 0; i < N; i++) {
        	String line1=in.nextLine();
			int t=Integer.parseInt(line1);count=0;
			for(int j=1;j<=t;j++)
			{if(gcdr(t,j)==1)
			count++;} System.out.println(count);
		}
        

       
    }
}
