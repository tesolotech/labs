import java.util.Scanner;
public class MatchPartPrint {
	
	static public void main(String args[])
	{
		char temp[]=new char[20];
		String rest="";
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter First String");
		String first=sc.nextLine();
		char str[]=first.toCharArray();
		int len1=first.length();
		System.out.println("Enter Second String:");
		String second=sc.nextLine();
		char str2[]=second.toCharArray();
		int len2=second.length();
		int length=len1+len2;
		for(int i=0;i<length;i++) {
			if(str[i]==str2[i]) {
				temp[i]=str[i];
			}
		}
		for(int k=0;k<len1+len2;k++) {
			rest=rest+temp[k];
		}
		System.out.println(rest);
	}
	
}
