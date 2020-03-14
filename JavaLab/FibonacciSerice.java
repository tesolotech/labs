import java.util.Scanner;
class FibonacciSerice
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int num=sc.nextInt();
		for(int i=1;i<num;i++)
		{
			System.out.println(FibonacciSeries(i));
		}
	}
static int FibonacciSeries(int num)
{
		if(num==1||num==2)
			return 1;
		else
			return(FibonacciSeries(num-1)+FibonacciSeries(num-2));
}
}
