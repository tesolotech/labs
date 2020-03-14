import java.util.*;
class DecimalBinary
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int num=sc.nextInt();
		System.out.println(num+ " in Binary:"+Dec_Binary(num));
	}
	static int Dec_Binary(int num)
	{
		int binary=0,i=1,rem;
		while(num>0)
		{
			rem=num%2;
			num=num/2;
			binary=binary+(rem*i);
			i=i*10;
		}
		return(binary);
	}
}
