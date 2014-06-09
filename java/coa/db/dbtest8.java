//saving image into database
//wap to update epmloeyee name and salary
import java.sql.*;
import java.util.*;
import java.io.*;
class Empdb8
{public static void main(String... s)
{try
	{Class.forName("com.mysql.jdbc.Driver");
	Connection cn= DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
	PreparedStatement st=cn.prepareStatement("update emp set pict=? where eno=? ");
	Scanner sc=new Scanner(System.in);
	FileInputStream fi=new FileInputStream("C:\\Users\\lenovo\\Pictures\\yup.png");
	byte[] b=new byte[fi.available()];
	fi.read(b,0,b.length);
	st.setBytes(1,b);
	st.setInt(2,Integer.parseInt(s[0]));
	int rs=st.executeUpdate();
	}
catch(SQLException ex)
	{System.out.println(ex.getMessage());
	}
catch(ClassNotFoundException ex)
	{System.out.println("invalid drivers");

	}
catch(Exception ex)
	{System.out.println(ex.getMessage());
	}
}
}