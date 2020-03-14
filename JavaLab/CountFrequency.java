import java.util.Scanner;
class CountFrequency
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String:");
		String word=sc.nextLine();
		String word1[]=word.split(" ");
		int i,count=0;
		for(i=0;i<word1.length;i++)
		{
			if(word1[i]==word1[i+1])
			{count++;}
			System.out.println(word1[i]+"::"+count);
		}
	//	for(i=0;i<word1.length;i++)
	//		System.out.println(word1[i]+"::"+count);
	}


}
