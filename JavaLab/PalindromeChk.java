import java.util.Scanner;
class PalindromeChk
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number");
		int num=sc.nextInt();
		int temp,rev=0,rem;
		temp=num;
		while(num>0)
		{
			rem=num%10;
			rev=(rev*10)+rem;
			num=num/10;
		}
		if(temp==rev)
			System.out.println(temp+"is palindrom");
		else
			System.out.println(temp+"is not plaindorm");
	}
}
