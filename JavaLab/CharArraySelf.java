import java.util.Scanner;
class CharArraySelf
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the string:");
		String word=sc.nextLine();
		System.out.println(word);
		int len=word.length();
		for(int i=0;i<len;i++)
		System.out.println(word.charAt(i));
	}

}
