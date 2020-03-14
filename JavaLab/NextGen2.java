class Base
{
	final public void show()
	{
		System.out.println("BaseClass");
	}
}
class Derived extends Base
{
	public void show()
	{System.out.println("Derived");}

}
class NextGen2
{
	public static void main(String args[])
	{
		Base b=new Derived();
		b.show();
	}
}
