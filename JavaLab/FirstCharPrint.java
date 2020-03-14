import java.util.Scanner;
class FirstCharPrint
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String:");
		char arr[]=new char[20];
		String word=sc.nextLine();
		String wo[]=word.split(" ");
		arr=wo.toCharArray();
		for(int i=0;i<wo.length;i++)
			System.out.println(wo[i]);
	}

}
