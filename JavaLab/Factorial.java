import java.util.Scanner;
class Factorial
{
	public static void main(String args[])
	{

		Scanner sc=new Scanner(System.in);
		System.out.println("Enter MAX limits:");
		int num=sc.nextInt();
		int res=Fact(num);
		System.out.println(res);
	}
           public static  int Fact(int num)
           {
             if(num>=1)
                return(num*Fact(num-1));
             else
                    return 1;
            }
}
