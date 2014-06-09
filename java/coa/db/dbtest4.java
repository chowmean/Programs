//multiple entry through cmd;
import java.sql.*;
class Empdb4
{public static void main(String... s)
{try
	{Class.forName("com.mysql.jdbc.Driver");
	Connection cn= DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
	Statement st=cn.createStatement();
	int rs=st.executeUpdate("insert into emp values("+s[0]+",'"+s[1]+"','"+s[2]+"',"+s[3]+")");
	
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