//wap to update epmloeyee name and salary
import java.sql.*;
class Empdb6
{public static void main(String... s)
{try
	{Class.forName("com.mysql.jdbc.Driver");
	Connection cn= DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
	Statement st=cn.createStatement();
	int rs=st.executeUpdate("update emp set ename='"+s[0]+"' where eno="+s[1]);
	
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