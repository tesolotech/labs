class Mobile
{
	private float price;
	{
		float price=12.7f;
		System.out.println("Price of phone:"+price);
	}
	private static float pricep;
	static
	{
		float pricep=123.42f;
		System.out.println("Price of second phone:"+pricep);
	}
	public static void main(String args[])
	{
		new Mobile();
	}
}
