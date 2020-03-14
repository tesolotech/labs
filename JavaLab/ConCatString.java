import java.util.Scanner;
class ConCatString
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter First String:-");
		String first=sc.next();
		System.out.println("Enter Second String:-");
		String second=sc.next();
		String ConCat=first+second;
		System.out.println("Concatnated string:"+ConCat);
	}
}
