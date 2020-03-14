import java.sql.*;
import java.util.Scanner;
public class SubmitTAClaimed {
	
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter your ID_No:");
		int c_no=sc.nextInt();
		System.out.println("Enter your name:");
		String name=sc.next();
		System.out.println("Enter Journey starting date:");
		String jdate=sc.next();
		System.out.println("Enter journey ending date:");
		String jedate=sc.next();
		System.out.println("Enter Journey place:");
		String place=sc.next();
		try{
			Class.forName("com.mysql.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
			Statement stmt=con.createStatement();
			int result=stmt.executeUpdate("insert into StoredTAF values(ID_NO="+c_no+" && name='"+name+"' && JStart_Date='"+jdate+"' && JEnd_Date='"+jedate+"' && Journey_Place='"+place+"')");
			
		}
		catch(Exception ex){
			System.out.println(ex);
		}
		
		
	}
	

}
