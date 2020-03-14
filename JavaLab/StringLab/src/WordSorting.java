import java.util.Scanner;
public class WordSorting {

	 static public void main(String args[])
     {
             Scanner sc=new Scanner(System.in);
             System.out.println("Enter word:");
             String word=sc.nextLine();
             char temp;
             String res="";
             int len=word.length();
             char arr[]=word.toCharArray();
             for(int i=0;i<len;i++)
             {
                     for(int j=0;j<len;j++)
                     {
                             if(arr[i]<arr[j])
                             {
                                     temp=arr[i];
                                     arr[i]=arr[j];
                                     arr[j]=temp;
                             }
                     }
             }
             for(int k=0;k<len;k++)
             {
                     res=res+arr[k];
             }
             System.out.println("Sorted array:"+res);
     }

}
