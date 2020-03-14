import java.util.Scanner;
class ReverseString
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String");
		String str=sc.nextLine();
		int len=str.length();
		int i;
		char arr[]=str.toCharArray();
		for(i=len-1;i>=0;i--)
			System.out.println(arr[i]);
	}

}
