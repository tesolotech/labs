import java.util.Scanner;
class StringSorting
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String word="";
		char temp;
		int i,j,len;
		System.out.println("Enter Word or String:");
		String wd=sc.nextLine();
		len=wd.length();
		char arr[]=wd.toCharArray();
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				if(arr[i]<arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		for(int k=0;k<len;k++)
		{
			word=word+arr[k];
		}
		System.out.println("Sorted StringL:"+word);
	}
}
