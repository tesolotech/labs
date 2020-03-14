import java.util.*;
class Binary_Decimal
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Binary Digits:");
		int binary=sc.nextInt();
		int dec=B_D(binary);
		System.out.println(binary+"Binary to Decimal:"+dec);
	}
	static int B_D(int binary)
	{
		int rem,sum=0,i=0;
		while(binary>0)
		{
	//	rem=binary%10;
		sum+=Math.pow(2,i)*(binary%10);
		binary=binary/10;
		i++;
		}
		System.out.println(sum);
		return(sum);
	}

}
