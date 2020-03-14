import java.lang.Runnable;

class ThreadJava implements Runnable
{
	public void run()
	{
		int i;
		for(i=0;i<10;i++)
		System.out.println("ThreadJava"+i);
	}
}
class ThreadInJava implements Runnable
{ 
       public void run()   
        { 
                int i;
                for(i=0;i<10;i++)
                System.out.println("ThreadInJava"+i);
        }
}

class ThreadExample
{
	public static void main(String args[])
	{
		Thread t1=new Thread(new ThreadJava());
		Thread t2=new Thread(new ThreadInJava());
		t1.start();
		t2.start();
	}
}
