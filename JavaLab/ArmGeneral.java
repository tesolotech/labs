import java.util.*;
class ArmGeneral
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter starting and ending points:");
		int start=sc.nextInt();
		int end=sc.nextInt();
		int rem,n=0,sum=0,i,temp,temp1;
		for(i=start+1;i<end;i++)
		{
			temp=i;
			temp1=i;
			while(temp>0)
			{
				temp/=10;
				++n;
			}
			while(temp1>0)
			{
				rem=temp1%10;
				sum+=Math.pow(rem,n);
				temp1/=10;
			}
			if(sum==i)
				System.out.println(i);
			n=0;
			sum=0;
		}
	}


}
