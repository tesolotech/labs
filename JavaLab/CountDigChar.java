import java.util.*;
class CountDigChar
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number:");
		int num=sc.nextInt();
		System.out.println("No of digits in number"+Digits(num));
	}
	
	static int Digits(int num)
	{
		int rem, count=0;
		while(num>0)
		{
			rem=num%10;
			count++;
			num=num/10;
		}
		return(count);
	}






}
