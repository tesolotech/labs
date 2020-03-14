import java.util.*;
class ArmStrontTest
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter starting and ending point:");
		int num=sc.nextInt();
		int num1=sc.nextInt();
		int temp,temp1,i,n=0,sum=0,rem;
		for(i=num;i<num1;i++)
		{
			temp=i;
			temp1=i;
			while(temp>0)
			{
				temp/=10;// temp=temp/10;
				++n;
			}
			while(temp1>0)
			{
				rem=temp1%10;
				sum+=Math.pow(rem,n);
				temp1/=10;//temp1=temp1/10;
			}
			if(sum==i)
				System.out.println(i);
			n=0;
			sum=0;
		}
	}
}
