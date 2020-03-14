import java.util.Scanner;
class PrimeNumber
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no of term that you want:");
		int num=sc.nextInt();
		PrimeFun(num);
	}
static void PrimeFun(int num)
{
        int i,x=2;
        while(num>0)
        {
                for(i=2;i<x;i++)
                        if(x%i==0)
                                break;
                if(x==i)
                {
                        System.out.println(x);
                        num--;
                }
                x++;
        }
}


}
