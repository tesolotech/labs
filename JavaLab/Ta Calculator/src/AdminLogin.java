
import java.sql.*;
import java.util.Scanner;
public class AdminLogin {
	
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter username");
		String uname=sc.next();
		System.out.println("enter your password");
		String pass=sc.next();
		try{
			Class.forName("com.mysql.jdbc.Driver");
			Connection cen=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
			Statement stmt=cen.createStatement();
			ResultSet result=stmt.executeQuery("select * from AdminLogin where username='uname' && password='pass'");
			if(result.next()) {
				System.out.println("Login SUCCESSCULLY");
			}
		}
		catch(Exception ex){
			System.out.println(ex);
		}
	}
}
