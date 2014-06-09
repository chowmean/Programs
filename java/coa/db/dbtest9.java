//wap to retrive and display picture from db

import java.sql.*;
import java.util.*;
import java.io.*;
class Empdb9
{public static void main(String... s)
{try
	{Class.forName("com.mysql.jdbc.Driver");
	Connection cn= DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
	PreparedStatement st=cn.prepareStatement("select pict from emp where eno=2 ");
	ResultSet rs=st.executeQuery();
	
	FileOutputStream fi=new FileOutputStream("C:\\Users\\lenovo\\Pictures\\javapict\\yup.png");
	
	byte[] b;
	b=rs.getBytes(1);
	fi.write(b);
	Runtime rn=Runtime.getRuntime();
	rn.exec("C:\\Program Files (x86)\\Mozilla Firefox.exe C:\\Users\\lenovo\\Pictures\\javapict\\yup.png");
	

	
	
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