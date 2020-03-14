import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.*;
public class CalFunction {

	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter you choise one of them(1-2):");
		System.out.println("1. Employee Login:");
		System.out.println("2. Admin Login:");
		int choise=sc.nextInt();
		switch(choise)
		{
		case 1:
			System.out.println("Enter Appropiate Info");
			empLog();
		case 2:
			System.out.println("Enter Appropiate Info:");
			adminLog();
			
			}
		}
	private static void adminLog() {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter UserId:");
		String u=sc.next();
		System.out.println("Enter Password:");
		String p=sc.next();
		try{
			Class.forName("com.mysql.jdbc.Driver");
			Connection cen=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
			Statement stmt=cen.createStatement();
			ResultSet result=stmt.executeQuery("select * from EmpLogin where username='uid' && password='pass'");
			System.out.println(result.first());
			if(u==result.getString("username") && p==result.getString("password"))
			{
				System.out.println("What you want to perform select one of them(1-4)");
				System.out.println("1. Aproved Request:");
				System.out.println("2. Delect User:");
				System.out.println("4. Exit:");
				int empchk=sc.nextInt();
				switch(empchk)
				{
				case 1:
					System.out.println("Okey"+newSubmit());
				}
			}
			else
			{
				System.out.println("Invalid confidential:");
			}
		}
		catch(Exception ex){
			System.out.println(ex);
		}
		
	}
	private static String empLog() {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter UserId:");
		String user=sc.next();
		System.out.println("Enter Password:");
		String pass=sc.next();
		try{
			Class.forName("com.mysql.jdbc.Driver");
			Connection cen=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
			Statement stmt=cen.createStatement();
			ResultSet result=stmt.executeQuery("select * from EmpLogin where username='uid' && password='pass'");
		//	System.out.println(result.first());
			
			
			if(user==result.getString("username") && pass==result.getString("password"))
			{
				System.out.println("What you want to perform select one of them(1-4)");
				System.out.println("1. New Submission:");
				System.out.println("2. Update Exising:");
				System.out.println("3. View Status:");
				System.out.println("4. Exit:");
				int empchk=sc.nextInt();
				switch(empchk)
				{
				case 1:
					System.out.println("Okey"+newSubmit());
				}
			}
			else
			{
				System.out.println("Invalid confidential:");
			}
		}
		catch(Exception ex){
			System.out.println(ex);
		}
		return null;
		
	}
		

	private static String newSubmit() {
		// TODO Auto-generated method stub
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
		try {
			Class.forName("com.mysql.jdbc.Driver");
			Connection cenn=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
			Statement stmt=cenn.createStatement();
			int result=stmt.executeUpdate("insert into StoredTA values(ID_NO="+c_no+",&& name='"+name+"', && JStart_Date='"+jdate+"', && JEnd_Date='"+jedate+"', && Journey_Place='"+place+"')");
			if(result==0)
				System.out.println("Insertion is successfull");
			else
				System.out.println("Geting Error in Data Validation");
			
		}
		catch(Exception ex) {
			System.out.println(ex);
		}
		return null;
	}
}
