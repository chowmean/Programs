//insert a new record in the name
import java.sql.*;
class Empdb5
{public static void main(String... a)
{try
	{Class.forName("com.mysql.jdbc.Driver");
	Connection cn= DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
	Statement st=cn.createStatement();
	int rs=st.executeUpdate("delete from emp where eno="+a[0]);
	
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