import java.util.Scanner;
class CharArray
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the string:");
		String arr=sc.nextLine();
		int len=arr.length();
//		System.out.println(len);
		for(int i=0;i<len;i++)
		System.out.println(i+"------> "+arr.charAt(i));
//		char ch=arr.charAt(0);
//		System.out.println(ch);
//		System.out.println(arr);
	}

}
