import java.util.*;
class ArmStringGeneral
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int num=sc.nextInt();
		int result=ArmStrongFun(num);
		if(num==result)
		{
			System.out.println("Number is Armstrong"+num);
		}
		else
			System.out.println("Number is not Armstrong:"+num);
	}
static int  ArmStrongFun(int num)
{
	int temp=num;
	int rem,sum=0,n=0;
	while(num>0)
	{
		num=num/10;
		++n;
	}
//	System.out.println(n);
	num=temp;
	while(num>0)
	{
		rem=num%10;
		sum+=Math.pow(rem,n);
		num=num/10;
	}
	System.out.println(sum);
	return(sum);
}

}
