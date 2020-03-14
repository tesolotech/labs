import java.util.Scanner;
class SplitRegularExpression
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter string:");
		String word=sc.nextLine();
		String []ch=word.split("\\s");
		for(String w:ch)
		System.out.println(w);
	}

}
