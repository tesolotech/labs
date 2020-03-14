import java.util.Scanner;
class BinaryToOctal
{
	static public void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Binary Digits:");
		int binary=sc.nextInt();
		int rem,dec=0,i=0;
		while(binary>0)
		{
			rem=binary%10;
			dec+=Math.pow(2,i)*rem;
			binary=binary/10;
			i++;
		}
		//System.out.println(dec);
		int digits=dec;
		int r,y=1,sum=0;
		while(digits>8)
		{
			r=digits%8;
			sum+=r*y;
			y=y*2;
			digits/=10;
		}
		System.out.println(sum);
	}

}
