import java.util.Scanner;
class PerfactNumber
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number");
		int num=sc.nextInt();
		int temp,sum=0,i;
		temp=num;
		for(i=1;i<num;i++)
		{
			if(num%i==0)
				sum+=i;
		}
		if(temp==sum)
			System.out.println(temp+"is perfact no");
		else
			System.out.println(temp+"is not perfact no");

	}
}
