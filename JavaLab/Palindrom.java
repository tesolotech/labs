import java.util.Scanner;
class Palindrom
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number");
		int num=sc.nextInt();
		int temp=Palindrome(num);
		if(num==temp)
			System.out.println("No is palindrom"+num);
		else
			System.out.println("No is not palindrom"+num);
		int res=Armstrong(num);
		if(num==res)
			System.out.println("Armstrong no"+num);
		else
			System.out.println("Not armstrong no"+num);
	}
static int Palindrome(int num)
{
	int rev=0,rem;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	return(rev);
}
static int Armstrong(int num)
{
	int rev=0,rem;
	while(num>0)
	{
		rem=num%10;
		rev=rev*rem*rem*rem;
		num=num/10;
	}
	return(rev);
}

}
