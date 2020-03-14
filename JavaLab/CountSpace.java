import java.util.Scanner;
class CountSpace
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String:");
		String str=sc.nextLine();
		int count=0;
		char arr[]=str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==' ')
				count++;
		}
		System.out.println(count);
	}


}
