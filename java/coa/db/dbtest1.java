//wap to access and dispplay records of emp table;
//write a prog to dispaly selective records of the emp based on city name
//wap to insert record in emp table
//write a prog to delete to delete record from emp table 
//wap to update ename and salary of an employe;

import java.sql.*;
class Empdb1
{public static void main(String... a)
{try
	{Class.forName("com.mysql.jdbc.Driver");
	Connection cn= DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
	Statement st=cn.createStatement();
	ResultSet rs=st.executeQuery("select * from emp");
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