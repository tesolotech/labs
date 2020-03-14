class ThreasTest implements Runnable
{
	public void run()
	{System.out.println("abc");}
	public static void main(String args[])throws InterruptedException
	{
		Thread thread=new Thread(new ThreadsTest());
		thread.start();
		thread.start();
		System.out.println(thread.getState());
	}


}
