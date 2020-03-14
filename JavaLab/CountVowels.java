import java.util.Scanner;
class CountVowels
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String:");
		String word=sc.nextLine();
		char arr[]=word.toCharArray();
		int len=arr.length;
		int count=0;
		for(int i=0;i<len;i++)
		{
			//System.out.println(arr[i]);
			if(arr[i]=='a'|| arr[i]=='A' || arr[i]=='e'||arr[i]=='E'|| arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='u'||arr[i]=='U')
			{count++;}
		}
		System.out.println(count);
	}
}
