import java.util.Scanner;
class ArmstrongCal
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int num=sc.nextInt();
		int temp,sum=0,rem;
		temp=num;
		while(num>0)
		{
			rem=num%10;
			sum+=rem*rem*rem;
			num=num/10;
		}
		if(temp==sum)
			System.out.println(temp+"is armstrong number"+temp);
		else
			System.out.println(temp+"is not armstrong number"+temp);
	}
}
