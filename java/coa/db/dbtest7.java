//wap to update epmloeyee name and salary
import java.sql.*;
class Empdb7
{public static void main(String... s)
{try
	{Class.forName("com.mysql.jdbc.Driver");
	Connection cn= DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
	PreparedStatement st=cn.prepareStatement("update emp set ename=?,salary=? where eno=? ");
	st.setString(1,s[1]);
	st.setInt(2,Integer.parseInt(s[2]));
	st.setInt(3,Integer.parseInt(s[0]));
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