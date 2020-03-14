import java.util.Scanner;
class SubString
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String:");
		String word=sc.nextLine();
		System.out.println("Enter initial postion:");
		int ini=sc.nextInt();
		System.out.println("Enter last range:");
		int last=sc.nextInt();
		String word1=word.substring(ini,last);
		System.out.println("Sub string in "+word+":::---> "+word1);
	
	}

}
