import java.util.*;
import java.sql.*;
public class HelloBhabhi {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter User Name:");
		String userName= sc.next();
		System.out.println("Enter New Password:");
		String password= sc.next();
		
		try {
			Class.forName("com.mysql.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/TACalculator", "root", "");
			Statement stmt = con.createStatement();
//			int dataInsert = stmt.executeUpdate("INSERT INTO AdminLogin VALUES (username = + "+userName+" , password = password)");
//			if(dataInsert > 0) {
//				System.out.println("Data are successfully inserted");
//			}
//			else {
//				System.out.println("Data are not inserted");
//			}
			ResultSet result = stmt.executeQuery("select * from AdminLogin where username = 'userName' && password ='password'");
			if(result.next() == false) {
					System.out.println("Result set is empty");
			}
			else {
				do {
					System.out.println(result.getString("username" + " " + result.getString("password")));
				}while(result.next());
			}
			}
		catch(Exception ex) {
			System.out.println("There are some exception are occurs:"+ex);
		}
	}
}
