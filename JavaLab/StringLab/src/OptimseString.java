import java.util.Scanner;
public class OptimseString {
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		long starttime=System.currentTimeMillis();
		
		for(int i=0;i<10000000;i++) {

			String str=new String("i love you archana");
			String str1=new String("i love you nidhi");
		}
		long endtime=System.currentTimeMillis();
		System.out.println("BY using user input data:"+(starttime-endtime));
		
		long st=System.currentTimeMillis();
		
		for(int j=0;j<100000000;j++) {
			String str2="this is vikash kumar";
			String str3="i love you archana";
		}
		long et=System.currentTimeMillis();
		System.out.println("By useing constant string:"+(st-et));
	}

}
