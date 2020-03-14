import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;
public class CalculatorTest {
	
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("WELCOME USERS");
		System.out.println("-------Select given work that you have want to perform-------");
		System.out.println("1. Press for ADMIN LOGIN");
		System.out.println("2. Press for INSERT TA CLAIMED");
		System.out.println("3. Press for MARK STATUS");
		System.out.println("4. Press for SEARCH TA WITH EMP INFO");
		System.out.println("5. Press for GENERATE REPORT");
		System.out.println("6. Press for exit");
		System.out.println("Enter you choice by pressing key-1-6:");
		int choise=sc.nextInt();
		switch(choise)
		{
		case 1:
			
				System.out.println("Enter your username:");
				String name=sc.next();
				System.out.println("Enter your password:");
				String password=sc.next();
				
				try{
					Class.forName("com.mysql.jdbc.Driver");
					Connection cen=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
					Statement stmt=cen.createStatement();
					ResultSet result=stmt.executeQuery("select * from AdminLogin where username='uname' && password='pass'");
				
					}
				catch(Exception ex){
					System.out.println(ex);
				}
			break;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		case 2:

			System.out.println("Enter your ID_No:");
			int id=sc.nextInt();
			System.out.println("Enter your name:");
			String names=sc.next();
			System.out.println("Enter Journey starting date:");
			String jdate=sc.next();
			System.out.println("Enter journey ending date:");
			String jedate=sc.next();
			System.out.println("Enter Journey place:");
			String place=sc.next();
			try{
				Class.forName("com.mysql.jdbc.Driver");
				Connection can=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
				Statement stmts=can.createStatement();
				int results=stmts.executeUpdate("insert into StoredTA values(ID_NO ="+id+" && name='"+names+"' && JStart_Date='"+jdate+"' && JEnd_Date='"+jedate+"' && Journey_Place='"+place+"')");
				if(results!=0)
				{
					System.out.println("Insert successfully");
				}
				else
					System.out.println("Error");
				
			}
			catch(Exception exx){
				System.out.println(exx);
			}
				break;
//------------------------------------------------------------------------------------------------------------------------------
		case 3:
			System.out.println("Your application status:");
			try {
				Class.forName("com.mysql.jdbc.Driver");
				Connection cc=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
				Statement stm=cc.createStatement();
				ResultSet res=stm.executeQuery("select * from Status where msg!='null'");
				while(res.next()) {
					System.out.println(res.getString("msg"));
				}
			}
			catch(Exception exxx) {
				System.out.println(exxx);
			}
			break;
//--------------------------------------------------------------------------------------------------------------------------------
		case 4:
			System.out.println("Enter Employee ID:");
			int idd=sc.nextInt();
			try {
				Class.forName("com.mysql.jdbc.Driver");
				Connection cc=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
				Statement stm=cc.createStatement();
				ResultSet res=stm.executeQuery("select * from StoredTA where ID_NO="+idd+"");
				while(res.next()) {
					if(res!=null)
					{
						System.out.println(res.getString("res"));
					}
					else
					{
						System.out.println("Record not found");
					}
				}
			}
			catch(Exception exxxx) {
				System.out.println(exxxx);
			}
			break;
//-------------------------------------------------------------------------------------------------------------------------------------
		case 5:
			System.out.println("Enter employee ID:");
			int eid=sc.nextInt();
			try {
				Class.forName("com.mysql.jdbc.Driver");
				Connection cc=DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator","root","");
				Statement stm=cc.createStatement();
				ResultSet r=stm.executeQuery("select * from StoredTA where ID_NO="+eid+"");
				while(r.next())
				{
					System.out.println("Your report:" +r.getString("r"));
				}
				}
			catch(Exception ee) {
				System.out.println(ee);
			}
			break;
//----------------------------------------------------------------------------------------------------------------------------------
		case 6:
			System.out.println("Thank for using this application");
			System.exit(0);
			System.out.println("Bye..");
		
//-------------------------------------------------------------------------------------------------------------------------------------
				
		}
	
	}
	
	

}
