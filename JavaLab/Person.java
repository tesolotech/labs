class Person
{
	int age;
	String name,add;
	public void setData(int b, String n, String d)
	{
		age=b;name=n;add=d;
	}
	public void showData()
	{
		System.out.println("age="+age);
		System.out.println("name="+name);
		System.out.println("add="+add);
	}
}
