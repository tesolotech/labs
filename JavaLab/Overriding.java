// overriding means one of the fun is in super class with same fun name and signature
// And one of the  methods is in child class with same fun name and sgingature
// must to be presence one is in super class and one is child class
class Computer
{
	public void fun(int Price)
	{
		System.out.println("This is desktop computer");
	}
}
class Laptop extends Computer
{
	public void fun(int Price)
	{
		System.out.println("Laptop price"+Price);
	}
}
class Overriding
{
	public static void main(String args[])
	{
		Laptop lp=new Laptop();
		lp.fun(125432);
	}
}
