// wap to genrate salary of each and every employeee of emp table andd insert into pay table
// display the salary generated 
// diplay the paysheet in following format.
// display the summary generated


import java.sql.*;
class Empdb10
{public static void main(String... a)
{try
	{Class.forName("com.mysql.jdbc.Driver");
	Connection cn= DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
	Statement st=cn.createStatement();
	ResultSet rs=st.executeQuery("select * from emp where city='dd'");
	while(rs.next())
		{System.out.println(rs.getInt(1)+" "+rs.getString("ename")+" "+rs.getString(3)+" "+rs.getInt(4));
		}
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