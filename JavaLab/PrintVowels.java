import java.util.Scanner;
class PrintVowels
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String:");
		String str=sc.nextLine();
		int len=str.length();
		int i;
		char temp[]=new char[20];
		char arr[]=str.toCharArray();
		for(i=0;i<len;i++)
		{
			if(arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='o'||arr[i]=='O'||arr[i]=='U'||arr[i]=='u'||arr[i]=='i'||arr[i]=='I')
			{
			temp[i]=arr[i];
			}
		}
			System.out.println(temp);
	}
}



