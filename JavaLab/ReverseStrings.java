import java.util.Scanner;
class ReverseStrings
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string:");
		String str[]=sc.next();
	//	char arr[]=str.toCharArray();
		int size=str.length;
		int i=0;
		for(i=size-1;i>=0;i++)
			System.out.println(str[i]);
	}



}
