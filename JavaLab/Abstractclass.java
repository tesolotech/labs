abstract class b
{
	public int x=10;
	abstract void showdata();
}
class Abstractclass extends b
{
	void showdata()
	{
		System.out.println("hello vikash");
	}
	public static void main(String args[])
	{
		Abstractclass ab=new Abstractclass();
		ab.showdata();
	}

}
